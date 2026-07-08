// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fortress_tut_msgs:srv/MoveTurtlebot.idl
// generated code does not contain a copyright notice

#ifndef FORTRESS_TUT_MSGS__SRV__DETAIL__MOVE_TURTLEBOT__TRAITS_HPP_
#define FORTRESS_TUT_MSGS__SRV__DETAIL__MOVE_TURTLEBOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fortress_tut_msgs/srv/detail/move_turtlebot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace fortress_tut_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveTurtlebot_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveTurtlebot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveTurtlebot_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace fortress_tut_msgs

namespace rosidl_generator_traits
{

[[deprecated("use fortress_tut_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const fortress_tut_msgs::srv::MoveTurtlebot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  fortress_tut_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fortress_tut_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const fortress_tut_msgs::srv::MoveTurtlebot_Request & msg)
{
  return fortress_tut_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<fortress_tut_msgs::srv::MoveTurtlebot_Request>()
{
  return "fortress_tut_msgs::srv::MoveTurtlebot_Request";
}

template<>
inline const char * name<fortress_tut_msgs::srv::MoveTurtlebot_Request>()
{
  return "fortress_tut_msgs/srv/MoveTurtlebot_Request";
}

template<>
struct has_fixed_size<fortress_tut_msgs::srv::MoveTurtlebot_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fortress_tut_msgs::srv::MoveTurtlebot_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fortress_tut_msgs::srv::MoveTurtlebot_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace fortress_tut_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveTurtlebot_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveTurtlebot_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveTurtlebot_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace fortress_tut_msgs

namespace rosidl_generator_traits
{

[[deprecated("use fortress_tut_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const fortress_tut_msgs::srv::MoveTurtlebot_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  fortress_tut_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fortress_tut_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const fortress_tut_msgs::srv::MoveTurtlebot_Response & msg)
{
  return fortress_tut_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<fortress_tut_msgs::srv::MoveTurtlebot_Response>()
{
  return "fortress_tut_msgs::srv::MoveTurtlebot_Response";
}

template<>
inline const char * name<fortress_tut_msgs::srv::MoveTurtlebot_Response>()
{
  return "fortress_tut_msgs/srv/MoveTurtlebot_Response";
}

template<>
struct has_fixed_size<fortress_tut_msgs::srv::MoveTurtlebot_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fortress_tut_msgs::srv::MoveTurtlebot_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fortress_tut_msgs::srv::MoveTurtlebot_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fortress_tut_msgs::srv::MoveTurtlebot>()
{
  return "fortress_tut_msgs::srv::MoveTurtlebot";
}

template<>
inline const char * name<fortress_tut_msgs::srv::MoveTurtlebot>()
{
  return "fortress_tut_msgs/srv/MoveTurtlebot";
}

template<>
struct has_fixed_size<fortress_tut_msgs::srv::MoveTurtlebot>
  : std::integral_constant<
    bool,
    has_fixed_size<fortress_tut_msgs::srv::MoveTurtlebot_Request>::value &&
    has_fixed_size<fortress_tut_msgs::srv::MoveTurtlebot_Response>::value
  >
{
};

template<>
struct has_bounded_size<fortress_tut_msgs::srv::MoveTurtlebot>
  : std::integral_constant<
    bool,
    has_bounded_size<fortress_tut_msgs::srv::MoveTurtlebot_Request>::value &&
    has_bounded_size<fortress_tut_msgs::srv::MoveTurtlebot_Response>::value
  >
{
};

template<>
struct is_service<fortress_tut_msgs::srv::MoveTurtlebot>
  : std::true_type
{
};

template<>
struct is_service_request<fortress_tut_msgs::srv::MoveTurtlebot_Request>
  : std::true_type
{
};

template<>
struct is_service_response<fortress_tut_msgs::srv::MoveTurtlebot_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FORTRESS_TUT_MSGS__SRV__DETAIL__MOVE_TURTLEBOT__TRAITS_HPP_
