// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fortress_tut_msgs:srv/MoveTurtlebot.idl
// generated code does not contain a copyright notice
#include "fortress_tut_msgs/srv/detail/move_turtlebot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
fortress_tut_msgs__srv__MoveTurtlebot_Request__init(fortress_tut_msgs__srv__MoveTurtlebot_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // yaw
  return true;
}

void
fortress_tut_msgs__srv__MoveTurtlebot_Request__fini(fortress_tut_msgs__srv__MoveTurtlebot_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // yaw
}

bool
fortress_tut_msgs__srv__MoveTurtlebot_Request__are_equal(const fortress_tut_msgs__srv__MoveTurtlebot_Request * lhs, const fortress_tut_msgs__srv__MoveTurtlebot_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  return true;
}

bool
fortress_tut_msgs__srv__MoveTurtlebot_Request__copy(
  const fortress_tut_msgs__srv__MoveTurtlebot_Request * input,
  fortress_tut_msgs__srv__MoveTurtlebot_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // yaw
  output->yaw = input->yaw;
  return true;
}

fortress_tut_msgs__srv__MoveTurtlebot_Request *
fortress_tut_msgs__srv__MoveTurtlebot_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fortress_tut_msgs__srv__MoveTurtlebot_Request * msg = (fortress_tut_msgs__srv__MoveTurtlebot_Request *)allocator.allocate(sizeof(fortress_tut_msgs__srv__MoveTurtlebot_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fortress_tut_msgs__srv__MoveTurtlebot_Request));
  bool success = fortress_tut_msgs__srv__MoveTurtlebot_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fortress_tut_msgs__srv__MoveTurtlebot_Request__destroy(fortress_tut_msgs__srv__MoveTurtlebot_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fortress_tut_msgs__srv__MoveTurtlebot_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence__init(fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fortress_tut_msgs__srv__MoveTurtlebot_Request * data = NULL;

  if (size) {
    data = (fortress_tut_msgs__srv__MoveTurtlebot_Request *)allocator.zero_allocate(size, sizeof(fortress_tut_msgs__srv__MoveTurtlebot_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fortress_tut_msgs__srv__MoveTurtlebot_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fortress_tut_msgs__srv__MoveTurtlebot_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence__fini(fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      fortress_tut_msgs__srv__MoveTurtlebot_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence *
fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence * array = (fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence *)allocator.allocate(sizeof(fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence__destroy(fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence__are_equal(const fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence * lhs, const fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fortress_tut_msgs__srv__MoveTurtlebot_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence__copy(
  const fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence * input,
  fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fortress_tut_msgs__srv__MoveTurtlebot_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fortress_tut_msgs__srv__MoveTurtlebot_Request * data =
      (fortress_tut_msgs__srv__MoveTurtlebot_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fortress_tut_msgs__srv__MoveTurtlebot_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fortress_tut_msgs__srv__MoveTurtlebot_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fortress_tut_msgs__srv__MoveTurtlebot_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
fortress_tut_msgs__srv__MoveTurtlebot_Response__init(fortress_tut_msgs__srv__MoveTurtlebot_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // x
  // y
  // yaw
  return true;
}

void
fortress_tut_msgs__srv__MoveTurtlebot_Response__fini(fortress_tut_msgs__srv__MoveTurtlebot_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // x
  // y
  // yaw
}

bool
fortress_tut_msgs__srv__MoveTurtlebot_Response__are_equal(const fortress_tut_msgs__srv__MoveTurtlebot_Response * lhs, const fortress_tut_msgs__srv__MoveTurtlebot_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  return true;
}

bool
fortress_tut_msgs__srv__MoveTurtlebot_Response__copy(
  const fortress_tut_msgs__srv__MoveTurtlebot_Response * input,
  fortress_tut_msgs__srv__MoveTurtlebot_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // yaw
  output->yaw = input->yaw;
  return true;
}

fortress_tut_msgs__srv__MoveTurtlebot_Response *
fortress_tut_msgs__srv__MoveTurtlebot_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fortress_tut_msgs__srv__MoveTurtlebot_Response * msg = (fortress_tut_msgs__srv__MoveTurtlebot_Response *)allocator.allocate(sizeof(fortress_tut_msgs__srv__MoveTurtlebot_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fortress_tut_msgs__srv__MoveTurtlebot_Response));
  bool success = fortress_tut_msgs__srv__MoveTurtlebot_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fortress_tut_msgs__srv__MoveTurtlebot_Response__destroy(fortress_tut_msgs__srv__MoveTurtlebot_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fortress_tut_msgs__srv__MoveTurtlebot_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence__init(fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fortress_tut_msgs__srv__MoveTurtlebot_Response * data = NULL;

  if (size) {
    data = (fortress_tut_msgs__srv__MoveTurtlebot_Response *)allocator.zero_allocate(size, sizeof(fortress_tut_msgs__srv__MoveTurtlebot_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fortress_tut_msgs__srv__MoveTurtlebot_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fortress_tut_msgs__srv__MoveTurtlebot_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence__fini(fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      fortress_tut_msgs__srv__MoveTurtlebot_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence *
fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence * array = (fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence *)allocator.allocate(sizeof(fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence__destroy(fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence__are_equal(const fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence * lhs, const fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fortress_tut_msgs__srv__MoveTurtlebot_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence__copy(
  const fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence * input,
  fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fortress_tut_msgs__srv__MoveTurtlebot_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fortress_tut_msgs__srv__MoveTurtlebot_Response * data =
      (fortress_tut_msgs__srv__MoveTurtlebot_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fortress_tut_msgs__srv__MoveTurtlebot_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fortress_tut_msgs__srv__MoveTurtlebot_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fortress_tut_msgs__srv__MoveTurtlebot_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
