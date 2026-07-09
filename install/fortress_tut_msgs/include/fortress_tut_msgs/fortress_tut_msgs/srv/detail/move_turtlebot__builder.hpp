// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fortress_tut_msgs:srv/MoveTurtlebot.idl
// generated code does not contain a copyright notice

#ifndef FORTRESS_TUT_MSGS__SRV__DETAIL__MOVE_TURTLEBOT__BUILDER_HPP_
#define FORTRESS_TUT_MSGS__SRV__DETAIL__MOVE_TURTLEBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fortress_tut_msgs/srv/detail/move_turtlebot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fortress_tut_msgs
{

namespace srv
{

namespace builder
{

class Init_MoveTurtlebot_Request_yaw
{
public:
  explicit Init_MoveTurtlebot_Request_yaw(::fortress_tut_msgs::srv::MoveTurtlebot_Request & msg)
  : msg_(msg)
  {}
  ::fortress_tut_msgs::srv::MoveTurtlebot_Request yaw(::fortress_tut_msgs::srv::MoveTurtlebot_Request::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fortress_tut_msgs::srv::MoveTurtlebot_Request msg_;
};

class Init_MoveTurtlebot_Request_y
{
public:
  explicit Init_MoveTurtlebot_Request_y(::fortress_tut_msgs::srv::MoveTurtlebot_Request & msg)
  : msg_(msg)
  {}
  Init_MoveTurtlebot_Request_yaw y(::fortress_tut_msgs::srv::MoveTurtlebot_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_MoveTurtlebot_Request_yaw(msg_);
  }

private:
  ::fortress_tut_msgs::srv::MoveTurtlebot_Request msg_;
};

class Init_MoveTurtlebot_Request_x
{
public:
  Init_MoveTurtlebot_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveTurtlebot_Request_y x(::fortress_tut_msgs::srv::MoveTurtlebot_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_MoveTurtlebot_Request_y(msg_);
  }

private:
  ::fortress_tut_msgs::srv::MoveTurtlebot_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::fortress_tut_msgs::srv::MoveTurtlebot_Request>()
{
  return fortress_tut_msgs::srv::builder::Init_MoveTurtlebot_Request_x();
}

}  // namespace fortress_tut_msgs


namespace fortress_tut_msgs
{

namespace srv
{

namespace builder
{

class Init_MoveTurtlebot_Response_success
{
public:
  Init_MoveTurtlebot_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fortress_tut_msgs::srv::MoveTurtlebot_Response success(::fortress_tut_msgs::srv::MoveTurtlebot_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fortress_tut_msgs::srv::MoveTurtlebot_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::fortress_tut_msgs::srv::MoveTurtlebot_Response>()
{
  return fortress_tut_msgs::srv::builder::Init_MoveTurtlebot_Response_success();
}

}  // namespace fortress_tut_msgs

#endif  // FORTRESS_TUT_MSGS__SRV__DETAIL__MOVE_TURTLEBOT__BUILDER_HPP_
