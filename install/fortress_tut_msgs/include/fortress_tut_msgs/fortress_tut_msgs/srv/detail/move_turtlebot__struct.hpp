// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fortress_tut_msgs:srv/MoveTurtlebot.idl
// generated code does not contain a copyright notice

#ifndef FORTRESS_TUT_MSGS__SRV__DETAIL__MOVE_TURTLEBOT__STRUCT_HPP_
#define FORTRESS_TUT_MSGS__SRV__DETAIL__MOVE_TURTLEBOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__fortress_tut_msgs__srv__MoveTurtlebot_Request __attribute__((deprecated))
#else
# define DEPRECATED__fortress_tut_msgs__srv__MoveTurtlebot_Request __declspec(deprecated)
#endif

namespace fortress_tut_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveTurtlebot_Request_
{
  using Type = MoveTurtlebot_Request_<ContainerAllocator>;

  explicit MoveTurtlebot_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->yaw = 0.0;
    }
  }

  explicit MoveTurtlebot_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->yaw = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _yaw_type =
    double;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fortress_tut_msgs::srv::MoveTurtlebot_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const fortress_tut_msgs::srv::MoveTurtlebot_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fortress_tut_msgs::srv::MoveTurtlebot_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fortress_tut_msgs::srv::MoveTurtlebot_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fortress_tut_msgs::srv::MoveTurtlebot_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fortress_tut_msgs::srv::MoveTurtlebot_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fortress_tut_msgs::srv::MoveTurtlebot_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fortress_tut_msgs::srv::MoveTurtlebot_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fortress_tut_msgs::srv::MoveTurtlebot_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fortress_tut_msgs::srv::MoveTurtlebot_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fortress_tut_msgs__srv__MoveTurtlebot_Request
    std::shared_ptr<fortress_tut_msgs::srv::MoveTurtlebot_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fortress_tut_msgs__srv__MoveTurtlebot_Request
    std::shared_ptr<fortress_tut_msgs::srv::MoveTurtlebot_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveTurtlebot_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveTurtlebot_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveTurtlebot_Request_

// alias to use template instance with default allocator
using MoveTurtlebot_Request =
  fortress_tut_msgs::srv::MoveTurtlebot_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace fortress_tut_msgs


#ifndef _WIN32
# define DEPRECATED__fortress_tut_msgs__srv__MoveTurtlebot_Response __attribute__((deprecated))
#else
# define DEPRECATED__fortress_tut_msgs__srv__MoveTurtlebot_Response __declspec(deprecated)
#endif

namespace fortress_tut_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveTurtlebot_Response_
{
  using Type = MoveTurtlebot_Response_<ContainerAllocator>;

  explicit MoveTurtlebot_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->x = 0.0;
      this->y = 0.0;
      this->yaw = 0.0;
    }
  }

  explicit MoveTurtlebot_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->x = 0.0;
      this->y = 0.0;
      this->yaw = 0.0;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _yaw_type =
    double;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fortress_tut_msgs::srv::MoveTurtlebot_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const fortress_tut_msgs::srv::MoveTurtlebot_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fortress_tut_msgs::srv::MoveTurtlebot_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fortress_tut_msgs::srv::MoveTurtlebot_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fortress_tut_msgs::srv::MoveTurtlebot_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fortress_tut_msgs::srv::MoveTurtlebot_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fortress_tut_msgs::srv::MoveTurtlebot_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fortress_tut_msgs::srv::MoveTurtlebot_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fortress_tut_msgs::srv::MoveTurtlebot_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fortress_tut_msgs::srv::MoveTurtlebot_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fortress_tut_msgs__srv__MoveTurtlebot_Response
    std::shared_ptr<fortress_tut_msgs::srv::MoveTurtlebot_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fortress_tut_msgs__srv__MoveTurtlebot_Response
    std::shared_ptr<fortress_tut_msgs::srv::MoveTurtlebot_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveTurtlebot_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveTurtlebot_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveTurtlebot_Response_

// alias to use template instance with default allocator
using MoveTurtlebot_Response =
  fortress_tut_msgs::srv::MoveTurtlebot_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace fortress_tut_msgs

namespace fortress_tut_msgs
{

namespace srv
{

struct MoveTurtlebot
{
  using Request = fortress_tut_msgs::srv::MoveTurtlebot_Request;
  using Response = fortress_tut_msgs::srv::MoveTurtlebot_Response;
};

}  // namespace srv

}  // namespace fortress_tut_msgs

#endif  // FORTRESS_TUT_MSGS__SRV__DETAIL__MOVE_TURTLEBOT__STRUCT_HPP_
