#! usr/bin/env python3

from math import atan, atan2, sqrt
from functools import partial

import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Vector3, Twist
from fortress_tut_msgs.srv import MoveTurtlebot

Kpp = 0.1
Kp = 1.0
Ki = 0.075
Kd = 2.5
Ts = 0.05


class RobotNode(Node):

    def __init__(self):
        super().__init__("robot")
        self.get_logger().info("starting robot node")

        self.move_service = self.create_service(MoveTurtlebot, "move_turtlebot3", self.move_turtlebot3)
        self.pub_cmd = self.create_publisher(Twist, "cmd_vel", 10)

        self.pose_subscription = self.create_subscription(Odometry, "/odom", self.get_pose, 10)

        self.current_pose = Vector3()
        self.previous_cmd = Vector3()

        self.yaw_integral = 0.0
        self.yaw_prev_error = None

    def get_pose(self, odom: Odometry):
        self.current_pose.x = odom.pose.pose.position.x
        self.current_pose.y = odom.pose.pose.position.y

        orientation = odom.pose.pose.orientation
        self.current_pose.z = atan2(
            2 * (orientation.w * orientation.z + orientation.x * orientation.y),
            1 - 2 * (orientation.y ** 2 + orientation.z ** 2)
        )

    def position_callback(self, desired_x: float, desired_y: float):
        error_x = (desired_x - self.current_pose.x)
        error_y = (desired_y - self.current_pose.y)

        if ((abs(error_x) < 0.05) and (abs(error_y) < 0.05)):
            stop_signal = Twist()
            self.pub_cmd.publish(stop_signal)
            self.get_logger().info("position movement complete")
            self.destroy_timer(self.position_controller_sampler)
            self.position_controller_sampler = None
        else:
            error_position = sqrt(error_x ** 2 + error_y ** 2)
            error_yaw = atan(error_y / error_x) - self.current_pose.z
            if (error_x < 0) and (error_y < 0):
                error_position = 0 - error_position
                
            self.get_logger().info(f"Current pose\n\tx: {self.current_pose.x:.4f}m\ty: {self.current_pose.y:.4f}m\tyaw: {self.current_pose.z:.4f}r\ttarget_yaw: {(atan(error_y / error_x)):.4f}r")
            self.get_logger().info(f"Pose error\n\tx: {error_x:.4f}m\ty: {error_y:.4f}m\tyaw: {error_yaw:.4f}r")

            if self.yaw_prev_error is None:
                self.yaw_prev_error = error_yaw

            cmd_msg = Twist()
            cmd_msg.linear.x = error_position * Kpp
            self.yaw_integral += error_yaw * Ts
            cmd_msg.angular.z = (error_yaw * Kp) + (self.yaw_integral * Ki) + (((error_yaw - self.yaw_prev_error) / Ts) * Kd)

            self.get_logger().info(f"Control signal\n\tx: {cmd_msg.linear.x:.3f}ms-1\tyaw: {cmd_msg.angular.z:.3f}rads-1")
            self.get_logger().info(f"\tP: {(error_yaw * Kp):.4f}\tI: {(self.yaw_integral * Ki):.4f}\tD: {(((error_yaw - self.yaw_prev_error) / Ts) * Kd)}\n")
            self.pub_cmd.publish(cmd_msg)

            self.yaw_prev_error = error_yaw

    def orientation_callback(self, desired_yaw: float):
        error_yaw = desired_yaw - self.current_pose.z

        if (abs(error_yaw) < 0.087266):
            stop_signal = Twist()
            self.pub_cmd.publish(stop_signal)
            self.get_logger().info("orientation movement complete")
            self.destroy_timer(self.orientation_controller_sampler)
            self.orientation_controller_sampler = None
        else:
            self.get_logger().info(f"Current yaw error: {error_yaw}r")

            cmd_msg = Twist()
            cmd_msg.angular.z = error_yaw * 1

            self.get_logger().info(f"Control signal: {cmd_msg.angular.z}rads-1]\n")
            self.pub_cmd.publish(cmd_msg)

        

    def move_turtlebot3(self, request: MoveTurtlebot.Request, response: MoveTurtlebot.Response):
        try:
            self.position_controller_sampler = self.create_timer(Ts, partial(self.position_callback, request.x, request.y))
            self.orientation_controller_sampler = self.create_timer(Ts, partial(self.orientation_callback, request.yaw))
        except KeyboardInterrupt:
            self.get_logger().info("stopping processing")
        except Exception as e:
            response.success = False
            self.get_logger().error(str(e))
            return response
        
        response.success = True
        response.x = self.previous_cmd.x
        response.y = self.previous_cmd.y
        response.yaw = self.previous_cmd.z
        self.get_logger().info(f"Successfully moved turtle to ({response.x:.3f}m, {response.y:.3f}m, {response.yaw:.3f}r)")
        return response


def main(args=None):
    rclpy.init(args=args)
    node = RobotNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()