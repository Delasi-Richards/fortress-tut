# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target fortress_tut_msgs::fortress_tut_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${fortress_tut_msgs_TARGETS}.
if(fortress_tut_msgs_TARGETS AND NOT TARGET fortress_tut_msgs::fortress_tut_msgs)
  add_library(fortress_tut_msgs::fortress_tut_msgs INTERFACE IMPORTED)
  set_target_properties(fortress_tut_msgs::fortress_tut_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${fortress_tut_msgs_TARGETS}")
endif()
