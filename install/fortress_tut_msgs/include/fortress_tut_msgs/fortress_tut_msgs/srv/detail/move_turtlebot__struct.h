// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fortress_tut_msgs:srv/MoveTurtlebot.idl
// generated code does not contain a copyright notice

#ifndef FORTRESS_TUT_MSGS__SRV__DETAIL__MOVE_TURTLEBOT__STRUCT_H_
#define FORTRESS_TUT_MSGS__SRV__DETAIL__MOVE_TURTLEBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/MoveTurtlebot in the package fortress_tut_msgs.
typedef struct fortress_tut_msgs__srv__MoveTurtlebot_Request
{
  double x;
  double y;
  double yaw;
} fortress_tut_msgs__srv__MoveTurtlebot_Request;

// Struct for a sequence of fortress_tut_msgs__srv__MoveTurtlebot_Request.
typedef struct fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence
{
  fortress_tut_msgs__srv__MoveTurtlebot_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/MoveTurtlebot in the package fortress_tut_msgs.
typedef struct fortress_tut_msgs__srv__MoveTurtlebot_Response
{
  bool success;
  double x;
  double y;
  double yaw;
} fortress_tut_msgs__srv__MoveTurtlebot_Response;

// Struct for a sequence of fortress_tut_msgs__srv__MoveTurtlebot_Response.
typedef struct fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence
{
  fortress_tut_msgs__srv__MoveTurtlebot_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FORTRESS_TUT_MSGS__SRV__DETAIL__MOVE_TURTLEBOT__STRUCT_H_
