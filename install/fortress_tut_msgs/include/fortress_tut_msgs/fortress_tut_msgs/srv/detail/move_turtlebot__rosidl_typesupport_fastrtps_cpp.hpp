// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from fortress_tut_msgs:srv/MoveTurtlebot.idl
// generated code does not contain a copyright notice

#ifndef FORTRESS_TUT_MSGS__SRV__DETAIL__MOVE_TURTLEBOT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define FORTRESS_TUT_MSGS__SRV__DETAIL__MOVE_TURTLEBOT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "fortress_tut_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "fortress_tut_msgs/srv/detail/move_turtlebot__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace fortress_tut_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fortress_tut_msgs
cdr_serialize(
  const fortress_tut_msgs::srv::MoveTurtlebot_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fortress_tut_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fortress_tut_msgs::srv::MoveTurtlebot_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fortress_tut_msgs
get_serialized_size(
  const fortress_tut_msgs::srv::MoveTurtlebot_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fortress_tut_msgs
max_serialized_size_MoveTurtlebot_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace fortress_tut_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fortress_tut_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fortress_tut_msgs, srv, MoveTurtlebot_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "fortress_tut_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "fortress_tut_msgs/srv/detail/move_turtlebot__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace fortress_tut_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fortress_tut_msgs
cdr_serialize(
  const fortress_tut_msgs::srv::MoveTurtlebot_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fortress_tut_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fortress_tut_msgs::srv::MoveTurtlebot_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fortress_tut_msgs
get_serialized_size(
  const fortress_tut_msgs::srv::MoveTurtlebot_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fortress_tut_msgs
max_serialized_size_MoveTurtlebot_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace fortress_tut_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fortress_tut_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fortress_tut_msgs, srv, MoveTurtlebot_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "fortress_tut_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fortress_tut_msgs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fortress_tut_msgs, srv, MoveTurtlebot)();

#ifdef __cplusplus
}
#endif

#endif  // FORTRESS_TUT_MSGS__SRV__DETAIL__MOVE_TURTLEBOT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
