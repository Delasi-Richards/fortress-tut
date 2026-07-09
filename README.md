# Fortress ROS2 Assessment

## Overview

This is a ROS2 project to move a Turtlebot3 robot to a specified pose using ROS2 services and topics.

The project makes use of ROS2 Humble and Gazebo 11 for simulating the movement of the Turtlebot3.

## Installing Dependencies
1. Clone this repository to your local machine

2. Run the following command inside the repository folder
```shell
colcon build
source script.bash
```

3. In the repository root folder, the `script.bash` file contains commands to source the environment and set up environment variables.

## Running the Simulation

1. To run the service node, run the following command
```shell
ros2 launch fortress_tut simulation_launch.py
```

2. To run the client node, run the following command
```shell
ros2 run fortress_tut commander <x_position> <y_position> <yaw>
```
This will send a request to the service to move the Turtlebot3 to the specified pose.

## Simulation Background

The simulation uses two ROS2 nodes:
1. `/robot` operates the service (i.e. service server).
2. `/commander` sends client requests to the service.

The service is named `move_turtlebot3`.
It accepts a  `fortress_tut_msgs/srv/MoveTurtlebot` interface.
```shell
float64 x
float64 y
float64 yaw
---
bool success
float64 x
float64 y
float64 yaw
```
The request sends the coordinates for the pose and the response contains a flag indicating the success of the operation and the current location of the turtlebot.

## Codebase
Inside the `./src` folder are the following folders
```
DynamixelSDK
fortress_tut
fortress_tut_msgs
turtlebot3
turtlebot3_msgs
turtlebot3_simulations
```

`fortress_tut` contains the main code for the nodes for this project.
`fortress_tut_msgs` contains a custom interface for the pose service.

The remaining packages provide the functionality for running and operating the Turtlebot in Gazebo.