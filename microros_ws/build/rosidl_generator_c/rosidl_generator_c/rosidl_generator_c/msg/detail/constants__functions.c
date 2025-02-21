// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosidl_generator_c:msg/Constants.idl
// generated code does not contain a copyright notice
#include "rosidl_generator_c/msg/detail/constants__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rosidl_generator_c__msg__Constants__init(rosidl_generator_c__msg__Constants * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
rosidl_generator_c__msg__Constants__fini(rosidl_generator_c__msg__Constants * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
rosidl_generator_c__msg__Constants__are_equal(const rosidl_generator_c__msg__Constants * lhs, const rosidl_generator_c__msg__Constants * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
rosidl_generator_c__msg__Constants__copy(
  const rosidl_generator_c__msg__Constants * input,
  rosidl_generator_c__msg__Constants * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

rosidl_generator_c__msg__Constants *
rosidl_generator_c__msg__Constants__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosidl_generator_c__msg__Constants * msg = (rosidl_generator_c__msg__Constants *)allocator.allocate(sizeof(rosidl_generator_c__msg__Constants), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosidl_generator_c__msg__Constants));
  bool success = rosidl_generator_c__msg__Constants__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rosidl_generator_c__msg__Constants__destroy(rosidl_generator_c__msg__Constants * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rosidl_generator_c__msg__Constants__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rosidl_generator_c__msg__Constants__Sequence__init(rosidl_generator_c__msg__Constants__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosidl_generator_c__msg__Constants * data = NULL;

  if (size) {
    data = (rosidl_generator_c__msg__Constants *)allocator.zero_allocate(size, sizeof(rosidl_generator_c__msg__Constants), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosidl_generator_c__msg__Constants__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosidl_generator_c__msg__Constants__fini(&data[i - 1]);
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
rosidl_generator_c__msg__Constants__Sequence__fini(rosidl_generator_c__msg__Constants__Sequence * array)
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
      rosidl_generator_c__msg__Constants__fini(&array->data[i]);
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

rosidl_generator_c__msg__Constants__Sequence *
rosidl_generator_c__msg__Constants__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosidl_generator_c__msg__Constants__Sequence * array = (rosidl_generator_c__msg__Constants__Sequence *)allocator.allocate(sizeof(rosidl_generator_c__msg__Constants__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rosidl_generator_c__msg__Constants__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rosidl_generator_c__msg__Constants__Sequence__destroy(rosidl_generator_c__msg__Constants__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rosidl_generator_c__msg__Constants__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rosidl_generator_c__msg__Constants__Sequence__are_equal(const rosidl_generator_c__msg__Constants__Sequence * lhs, const rosidl_generator_c__msg__Constants__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rosidl_generator_c__msg__Constants__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rosidl_generator_c__msg__Constants__Sequence__copy(
  const rosidl_generator_c__msg__Constants__Sequence * input,
  rosidl_generator_c__msg__Constants__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rosidl_generator_c__msg__Constants);
    rosidl_generator_c__msg__Constants * data =
      (rosidl_generator_c__msg__Constants *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rosidl_generator_c__msg__Constants__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rosidl_generator_c__msg__Constants__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rosidl_generator_c__msg__Constants__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
