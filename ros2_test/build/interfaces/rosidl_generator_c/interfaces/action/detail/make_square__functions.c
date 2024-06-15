// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:action/MakeSquare.idl
// generated code does not contain a copyright notice
#include "interfaces/action/detail/make_square__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `message_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
interfaces__action__MakeSquare_Goal__init(interfaces__action__MakeSquare_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // sender_id
  // receiver_id
  // message_type
  if (!rosidl_runtime_c__String__init(&msg->message_type)) {
    interfaces__action__MakeSquare_Goal__fini(msg);
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    interfaces__action__MakeSquare_Goal__fini(msg);
    return false;
  }
  // value
  return true;
}

void
interfaces__action__MakeSquare_Goal__fini(interfaces__action__MakeSquare_Goal * msg)
{
  if (!msg) {
    return;
  }
  // sender_id
  // receiver_id
  // message_type
  rosidl_runtime_c__String__fini(&msg->message_type);
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // value
}

bool
interfaces__action__MakeSquare_Goal__are_equal(const interfaces__action__MakeSquare_Goal * lhs, const interfaces__action__MakeSquare_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sender_id
  if (lhs->sender_id != rhs->sender_id) {
    return false;
  }
  // receiver_id
  if (lhs->receiver_id != rhs->receiver_id) {
    return false;
  }
  // message_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message_type), &(rhs->message_type)))
  {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
interfaces__action__MakeSquare_Goal__copy(
  const interfaces__action__MakeSquare_Goal * input,
  interfaces__action__MakeSquare_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // sender_id
  output->sender_id = input->sender_id;
  // receiver_id
  output->receiver_id = input->receiver_id;
  // message_type
  if (!rosidl_runtime_c__String__copy(
      &(input->message_type), &(output->message_type)))
  {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // value
  output->value = input->value;
  return true;
}

interfaces__action__MakeSquare_Goal *
interfaces__action__MakeSquare_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_Goal * msg = (interfaces__action__MakeSquare_Goal *)allocator.allocate(sizeof(interfaces__action__MakeSquare_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__MakeSquare_Goal));
  bool success = interfaces__action__MakeSquare_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__action__MakeSquare_Goal__destroy(interfaces__action__MakeSquare_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__action__MakeSquare_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__action__MakeSquare_Goal__Sequence__init(interfaces__action__MakeSquare_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_Goal * data = NULL;

  if (size) {
    data = (interfaces__action__MakeSquare_Goal *)allocator.zero_allocate(size, sizeof(interfaces__action__MakeSquare_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__MakeSquare_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__MakeSquare_Goal__fini(&data[i - 1]);
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
interfaces__action__MakeSquare_Goal__Sequence__fini(interfaces__action__MakeSquare_Goal__Sequence * array)
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
      interfaces__action__MakeSquare_Goal__fini(&array->data[i]);
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

interfaces__action__MakeSquare_Goal__Sequence *
interfaces__action__MakeSquare_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_Goal__Sequence * array = (interfaces__action__MakeSquare_Goal__Sequence *)allocator.allocate(sizeof(interfaces__action__MakeSquare_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__MakeSquare_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__action__MakeSquare_Goal__Sequence__destroy(interfaces__action__MakeSquare_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__action__MakeSquare_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__action__MakeSquare_Goal__Sequence__are_equal(const interfaces__action__MakeSquare_Goal__Sequence * lhs, const interfaces__action__MakeSquare_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__action__MakeSquare_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__action__MakeSquare_Goal__Sequence__copy(
  const interfaces__action__MakeSquare_Goal__Sequence * input,
  interfaces__action__MakeSquare_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__action__MakeSquare_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__action__MakeSquare_Goal * data =
      (interfaces__action__MakeSquare_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__action__MakeSquare_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__action__MakeSquare_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__action__MakeSquare_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message_type`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `timestamp`
// Member `timeslot`
// already included above
// #include "builtin_interfaces/msg/detail/time__functions.h"

bool
interfaces__action__MakeSquare_Result__init(interfaces__action__MakeSquare_Result * msg)
{
  if (!msg) {
    return false;
  }
  // sender_id
  // receiver_id
  // message_type
  if (!rosidl_runtime_c__String__init(&msg->message_type)) {
    interfaces__action__MakeSquare_Result__fini(msg);
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    interfaces__action__MakeSquare_Result__fini(msg);
    return false;
  }
  // result
  // timeslot
  if (!builtin_interfaces__msg__Time__init(&msg->timeslot)) {
    interfaces__action__MakeSquare_Result__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__action__MakeSquare_Result__fini(interfaces__action__MakeSquare_Result * msg)
{
  if (!msg) {
    return;
  }
  // sender_id
  // receiver_id
  // message_type
  rosidl_runtime_c__String__fini(&msg->message_type);
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // result
  // timeslot
  builtin_interfaces__msg__Time__fini(&msg->timeslot);
}

bool
interfaces__action__MakeSquare_Result__are_equal(const interfaces__action__MakeSquare_Result * lhs, const interfaces__action__MakeSquare_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sender_id
  if (lhs->sender_id != rhs->sender_id) {
    return false;
  }
  // receiver_id
  if (lhs->receiver_id != rhs->receiver_id) {
    return false;
  }
  // message_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message_type), &(rhs->message_type)))
  {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  // timeslot
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timeslot), &(rhs->timeslot)))
  {
    return false;
  }
  return true;
}

bool
interfaces__action__MakeSquare_Result__copy(
  const interfaces__action__MakeSquare_Result * input,
  interfaces__action__MakeSquare_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // sender_id
  output->sender_id = input->sender_id;
  // receiver_id
  output->receiver_id = input->receiver_id;
  // message_type
  if (!rosidl_runtime_c__String__copy(
      &(input->message_type), &(output->message_type)))
  {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // result
  output->result = input->result;
  // timeslot
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timeslot), &(output->timeslot)))
  {
    return false;
  }
  return true;
}

interfaces__action__MakeSquare_Result *
interfaces__action__MakeSquare_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_Result * msg = (interfaces__action__MakeSquare_Result *)allocator.allocate(sizeof(interfaces__action__MakeSquare_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__MakeSquare_Result));
  bool success = interfaces__action__MakeSquare_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__action__MakeSquare_Result__destroy(interfaces__action__MakeSquare_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__action__MakeSquare_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__action__MakeSquare_Result__Sequence__init(interfaces__action__MakeSquare_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_Result * data = NULL;

  if (size) {
    data = (interfaces__action__MakeSquare_Result *)allocator.zero_allocate(size, sizeof(interfaces__action__MakeSquare_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__MakeSquare_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__MakeSquare_Result__fini(&data[i - 1]);
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
interfaces__action__MakeSquare_Result__Sequence__fini(interfaces__action__MakeSquare_Result__Sequence * array)
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
      interfaces__action__MakeSquare_Result__fini(&array->data[i]);
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

interfaces__action__MakeSquare_Result__Sequence *
interfaces__action__MakeSquare_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_Result__Sequence * array = (interfaces__action__MakeSquare_Result__Sequence *)allocator.allocate(sizeof(interfaces__action__MakeSquare_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__MakeSquare_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__action__MakeSquare_Result__Sequence__destroy(interfaces__action__MakeSquare_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__action__MakeSquare_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__action__MakeSquare_Result__Sequence__are_equal(const interfaces__action__MakeSquare_Result__Sequence * lhs, const interfaces__action__MakeSquare_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__action__MakeSquare_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__action__MakeSquare_Result__Sequence__copy(
  const interfaces__action__MakeSquare_Result__Sequence * input,
  interfaces__action__MakeSquare_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__action__MakeSquare_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__action__MakeSquare_Result * data =
      (interfaces__action__MakeSquare_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__action__MakeSquare_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__action__MakeSquare_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__action__MakeSquare_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `calculation_process`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
interfaces__action__MakeSquare_Feedback__init(interfaces__action__MakeSquare_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // calculation_process
  if (!rosidl_runtime_c__String__init(&msg->calculation_process)) {
    interfaces__action__MakeSquare_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__action__MakeSquare_Feedback__fini(interfaces__action__MakeSquare_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // calculation_process
  rosidl_runtime_c__String__fini(&msg->calculation_process);
}

bool
interfaces__action__MakeSquare_Feedback__are_equal(const interfaces__action__MakeSquare_Feedback * lhs, const interfaces__action__MakeSquare_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // calculation_process
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->calculation_process), &(rhs->calculation_process)))
  {
    return false;
  }
  return true;
}

bool
interfaces__action__MakeSquare_Feedback__copy(
  const interfaces__action__MakeSquare_Feedback * input,
  interfaces__action__MakeSquare_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // calculation_process
  if (!rosidl_runtime_c__String__copy(
      &(input->calculation_process), &(output->calculation_process)))
  {
    return false;
  }
  return true;
}

interfaces__action__MakeSquare_Feedback *
interfaces__action__MakeSquare_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_Feedback * msg = (interfaces__action__MakeSquare_Feedback *)allocator.allocate(sizeof(interfaces__action__MakeSquare_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__MakeSquare_Feedback));
  bool success = interfaces__action__MakeSquare_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__action__MakeSquare_Feedback__destroy(interfaces__action__MakeSquare_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__action__MakeSquare_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__action__MakeSquare_Feedback__Sequence__init(interfaces__action__MakeSquare_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_Feedback * data = NULL;

  if (size) {
    data = (interfaces__action__MakeSquare_Feedback *)allocator.zero_allocate(size, sizeof(interfaces__action__MakeSquare_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__MakeSquare_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__MakeSquare_Feedback__fini(&data[i - 1]);
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
interfaces__action__MakeSquare_Feedback__Sequence__fini(interfaces__action__MakeSquare_Feedback__Sequence * array)
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
      interfaces__action__MakeSquare_Feedback__fini(&array->data[i]);
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

interfaces__action__MakeSquare_Feedback__Sequence *
interfaces__action__MakeSquare_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_Feedback__Sequence * array = (interfaces__action__MakeSquare_Feedback__Sequence *)allocator.allocate(sizeof(interfaces__action__MakeSquare_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__MakeSquare_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__action__MakeSquare_Feedback__Sequence__destroy(interfaces__action__MakeSquare_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__action__MakeSquare_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__action__MakeSquare_Feedback__Sequence__are_equal(const interfaces__action__MakeSquare_Feedback__Sequence * lhs, const interfaces__action__MakeSquare_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__action__MakeSquare_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__action__MakeSquare_Feedback__Sequence__copy(
  const interfaces__action__MakeSquare_Feedback__Sequence * input,
  interfaces__action__MakeSquare_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__action__MakeSquare_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__action__MakeSquare_Feedback * data =
      (interfaces__action__MakeSquare_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__action__MakeSquare_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__action__MakeSquare_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__action__MakeSquare_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "interfaces/action/detail/make_square__functions.h"

bool
interfaces__action__MakeSquare_SendGoal_Request__init(interfaces__action__MakeSquare_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    interfaces__action__MakeSquare_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!interfaces__action__MakeSquare_Goal__init(&msg->goal)) {
    interfaces__action__MakeSquare_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__action__MakeSquare_SendGoal_Request__fini(interfaces__action__MakeSquare_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  interfaces__action__MakeSquare_Goal__fini(&msg->goal);
}

bool
interfaces__action__MakeSquare_SendGoal_Request__are_equal(const interfaces__action__MakeSquare_SendGoal_Request * lhs, const interfaces__action__MakeSquare_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!interfaces__action__MakeSquare_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
interfaces__action__MakeSquare_SendGoal_Request__copy(
  const interfaces__action__MakeSquare_SendGoal_Request * input,
  interfaces__action__MakeSquare_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!interfaces__action__MakeSquare_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

interfaces__action__MakeSquare_SendGoal_Request *
interfaces__action__MakeSquare_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_SendGoal_Request * msg = (interfaces__action__MakeSquare_SendGoal_Request *)allocator.allocate(sizeof(interfaces__action__MakeSquare_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__MakeSquare_SendGoal_Request));
  bool success = interfaces__action__MakeSquare_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__action__MakeSquare_SendGoal_Request__destroy(interfaces__action__MakeSquare_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__action__MakeSquare_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__action__MakeSquare_SendGoal_Request__Sequence__init(interfaces__action__MakeSquare_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_SendGoal_Request * data = NULL;

  if (size) {
    data = (interfaces__action__MakeSquare_SendGoal_Request *)allocator.zero_allocate(size, sizeof(interfaces__action__MakeSquare_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__MakeSquare_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__MakeSquare_SendGoal_Request__fini(&data[i - 1]);
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
interfaces__action__MakeSquare_SendGoal_Request__Sequence__fini(interfaces__action__MakeSquare_SendGoal_Request__Sequence * array)
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
      interfaces__action__MakeSquare_SendGoal_Request__fini(&array->data[i]);
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

interfaces__action__MakeSquare_SendGoal_Request__Sequence *
interfaces__action__MakeSquare_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_SendGoal_Request__Sequence * array = (interfaces__action__MakeSquare_SendGoal_Request__Sequence *)allocator.allocate(sizeof(interfaces__action__MakeSquare_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__MakeSquare_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__action__MakeSquare_SendGoal_Request__Sequence__destroy(interfaces__action__MakeSquare_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__action__MakeSquare_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__action__MakeSquare_SendGoal_Request__Sequence__are_equal(const interfaces__action__MakeSquare_SendGoal_Request__Sequence * lhs, const interfaces__action__MakeSquare_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__action__MakeSquare_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__action__MakeSquare_SendGoal_Request__Sequence__copy(
  const interfaces__action__MakeSquare_SendGoal_Request__Sequence * input,
  interfaces__action__MakeSquare_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__action__MakeSquare_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__action__MakeSquare_SendGoal_Request * data =
      (interfaces__action__MakeSquare_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__action__MakeSquare_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__action__MakeSquare_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__action__MakeSquare_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
// already included above
// #include "builtin_interfaces/msg/detail/time__functions.h"

bool
interfaces__action__MakeSquare_SendGoal_Response__init(interfaces__action__MakeSquare_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    interfaces__action__MakeSquare_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__action__MakeSquare_SendGoal_Response__fini(interfaces__action__MakeSquare_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
interfaces__action__MakeSquare_SendGoal_Response__are_equal(const interfaces__action__MakeSquare_SendGoal_Response * lhs, const interfaces__action__MakeSquare_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
interfaces__action__MakeSquare_SendGoal_Response__copy(
  const interfaces__action__MakeSquare_SendGoal_Response * input,
  interfaces__action__MakeSquare_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

interfaces__action__MakeSquare_SendGoal_Response *
interfaces__action__MakeSquare_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_SendGoal_Response * msg = (interfaces__action__MakeSquare_SendGoal_Response *)allocator.allocate(sizeof(interfaces__action__MakeSquare_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__MakeSquare_SendGoal_Response));
  bool success = interfaces__action__MakeSquare_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__action__MakeSquare_SendGoal_Response__destroy(interfaces__action__MakeSquare_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__action__MakeSquare_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__action__MakeSquare_SendGoal_Response__Sequence__init(interfaces__action__MakeSquare_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_SendGoal_Response * data = NULL;

  if (size) {
    data = (interfaces__action__MakeSquare_SendGoal_Response *)allocator.zero_allocate(size, sizeof(interfaces__action__MakeSquare_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__MakeSquare_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__MakeSquare_SendGoal_Response__fini(&data[i - 1]);
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
interfaces__action__MakeSquare_SendGoal_Response__Sequence__fini(interfaces__action__MakeSquare_SendGoal_Response__Sequence * array)
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
      interfaces__action__MakeSquare_SendGoal_Response__fini(&array->data[i]);
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

interfaces__action__MakeSquare_SendGoal_Response__Sequence *
interfaces__action__MakeSquare_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_SendGoal_Response__Sequence * array = (interfaces__action__MakeSquare_SendGoal_Response__Sequence *)allocator.allocate(sizeof(interfaces__action__MakeSquare_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__MakeSquare_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__action__MakeSquare_SendGoal_Response__Sequence__destroy(interfaces__action__MakeSquare_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__action__MakeSquare_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__action__MakeSquare_SendGoal_Response__Sequence__are_equal(const interfaces__action__MakeSquare_SendGoal_Response__Sequence * lhs, const interfaces__action__MakeSquare_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__action__MakeSquare_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__action__MakeSquare_SendGoal_Response__Sequence__copy(
  const interfaces__action__MakeSquare_SendGoal_Response__Sequence * input,
  interfaces__action__MakeSquare_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__action__MakeSquare_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__action__MakeSquare_SendGoal_Response * data =
      (interfaces__action__MakeSquare_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__action__MakeSquare_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__action__MakeSquare_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__action__MakeSquare_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "interfaces/action/detail/make_square__functions.h"

bool
interfaces__action__MakeSquare_SendGoal_Event__init(interfaces__action__MakeSquare_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    interfaces__action__MakeSquare_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!interfaces__action__MakeSquare_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    interfaces__action__MakeSquare_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!interfaces__action__MakeSquare_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    interfaces__action__MakeSquare_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__action__MakeSquare_SendGoal_Event__fini(interfaces__action__MakeSquare_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  interfaces__action__MakeSquare_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  interfaces__action__MakeSquare_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
interfaces__action__MakeSquare_SendGoal_Event__are_equal(const interfaces__action__MakeSquare_SendGoal_Event * lhs, const interfaces__action__MakeSquare_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!interfaces__action__MakeSquare_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!interfaces__action__MakeSquare_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
interfaces__action__MakeSquare_SendGoal_Event__copy(
  const interfaces__action__MakeSquare_SendGoal_Event * input,
  interfaces__action__MakeSquare_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!interfaces__action__MakeSquare_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!interfaces__action__MakeSquare_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

interfaces__action__MakeSquare_SendGoal_Event *
interfaces__action__MakeSquare_SendGoal_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_SendGoal_Event * msg = (interfaces__action__MakeSquare_SendGoal_Event *)allocator.allocate(sizeof(interfaces__action__MakeSquare_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__MakeSquare_SendGoal_Event));
  bool success = interfaces__action__MakeSquare_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__action__MakeSquare_SendGoal_Event__destroy(interfaces__action__MakeSquare_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__action__MakeSquare_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__action__MakeSquare_SendGoal_Event__Sequence__init(interfaces__action__MakeSquare_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_SendGoal_Event * data = NULL;

  if (size) {
    data = (interfaces__action__MakeSquare_SendGoal_Event *)allocator.zero_allocate(size, sizeof(interfaces__action__MakeSquare_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__MakeSquare_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__MakeSquare_SendGoal_Event__fini(&data[i - 1]);
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
interfaces__action__MakeSquare_SendGoal_Event__Sequence__fini(interfaces__action__MakeSquare_SendGoal_Event__Sequence * array)
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
      interfaces__action__MakeSquare_SendGoal_Event__fini(&array->data[i]);
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

interfaces__action__MakeSquare_SendGoal_Event__Sequence *
interfaces__action__MakeSquare_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_SendGoal_Event__Sequence * array = (interfaces__action__MakeSquare_SendGoal_Event__Sequence *)allocator.allocate(sizeof(interfaces__action__MakeSquare_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__MakeSquare_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__action__MakeSquare_SendGoal_Event__Sequence__destroy(interfaces__action__MakeSquare_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__action__MakeSquare_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__action__MakeSquare_SendGoal_Event__Sequence__are_equal(const interfaces__action__MakeSquare_SendGoal_Event__Sequence * lhs, const interfaces__action__MakeSquare_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__action__MakeSquare_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__action__MakeSquare_SendGoal_Event__Sequence__copy(
  const interfaces__action__MakeSquare_SendGoal_Event__Sequence * input,
  interfaces__action__MakeSquare_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__action__MakeSquare_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__action__MakeSquare_SendGoal_Event * data =
      (interfaces__action__MakeSquare_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__action__MakeSquare_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__action__MakeSquare_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__action__MakeSquare_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
interfaces__action__MakeSquare_GetResult_Request__init(interfaces__action__MakeSquare_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    interfaces__action__MakeSquare_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__action__MakeSquare_GetResult_Request__fini(interfaces__action__MakeSquare_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
interfaces__action__MakeSquare_GetResult_Request__are_equal(const interfaces__action__MakeSquare_GetResult_Request * lhs, const interfaces__action__MakeSquare_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
interfaces__action__MakeSquare_GetResult_Request__copy(
  const interfaces__action__MakeSquare_GetResult_Request * input,
  interfaces__action__MakeSquare_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

interfaces__action__MakeSquare_GetResult_Request *
interfaces__action__MakeSquare_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_GetResult_Request * msg = (interfaces__action__MakeSquare_GetResult_Request *)allocator.allocate(sizeof(interfaces__action__MakeSquare_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__MakeSquare_GetResult_Request));
  bool success = interfaces__action__MakeSquare_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__action__MakeSquare_GetResult_Request__destroy(interfaces__action__MakeSquare_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__action__MakeSquare_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__action__MakeSquare_GetResult_Request__Sequence__init(interfaces__action__MakeSquare_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_GetResult_Request * data = NULL;

  if (size) {
    data = (interfaces__action__MakeSquare_GetResult_Request *)allocator.zero_allocate(size, sizeof(interfaces__action__MakeSquare_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__MakeSquare_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__MakeSquare_GetResult_Request__fini(&data[i - 1]);
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
interfaces__action__MakeSquare_GetResult_Request__Sequence__fini(interfaces__action__MakeSquare_GetResult_Request__Sequence * array)
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
      interfaces__action__MakeSquare_GetResult_Request__fini(&array->data[i]);
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

interfaces__action__MakeSquare_GetResult_Request__Sequence *
interfaces__action__MakeSquare_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_GetResult_Request__Sequence * array = (interfaces__action__MakeSquare_GetResult_Request__Sequence *)allocator.allocate(sizeof(interfaces__action__MakeSquare_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__MakeSquare_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__action__MakeSquare_GetResult_Request__Sequence__destroy(interfaces__action__MakeSquare_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__action__MakeSquare_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__action__MakeSquare_GetResult_Request__Sequence__are_equal(const interfaces__action__MakeSquare_GetResult_Request__Sequence * lhs, const interfaces__action__MakeSquare_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__action__MakeSquare_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__action__MakeSquare_GetResult_Request__Sequence__copy(
  const interfaces__action__MakeSquare_GetResult_Request__Sequence * input,
  interfaces__action__MakeSquare_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__action__MakeSquare_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__action__MakeSquare_GetResult_Request * data =
      (interfaces__action__MakeSquare_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__action__MakeSquare_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__action__MakeSquare_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__action__MakeSquare_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "interfaces/action/detail/make_square__functions.h"

bool
interfaces__action__MakeSquare_GetResult_Response__init(interfaces__action__MakeSquare_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!interfaces__action__MakeSquare_Result__init(&msg->result)) {
    interfaces__action__MakeSquare_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__action__MakeSquare_GetResult_Response__fini(interfaces__action__MakeSquare_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  interfaces__action__MakeSquare_Result__fini(&msg->result);
}

bool
interfaces__action__MakeSquare_GetResult_Response__are_equal(const interfaces__action__MakeSquare_GetResult_Response * lhs, const interfaces__action__MakeSquare_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!interfaces__action__MakeSquare_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
interfaces__action__MakeSquare_GetResult_Response__copy(
  const interfaces__action__MakeSquare_GetResult_Response * input,
  interfaces__action__MakeSquare_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!interfaces__action__MakeSquare_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

interfaces__action__MakeSquare_GetResult_Response *
interfaces__action__MakeSquare_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_GetResult_Response * msg = (interfaces__action__MakeSquare_GetResult_Response *)allocator.allocate(sizeof(interfaces__action__MakeSquare_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__MakeSquare_GetResult_Response));
  bool success = interfaces__action__MakeSquare_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__action__MakeSquare_GetResult_Response__destroy(interfaces__action__MakeSquare_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__action__MakeSquare_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__action__MakeSquare_GetResult_Response__Sequence__init(interfaces__action__MakeSquare_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_GetResult_Response * data = NULL;

  if (size) {
    data = (interfaces__action__MakeSquare_GetResult_Response *)allocator.zero_allocate(size, sizeof(interfaces__action__MakeSquare_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__MakeSquare_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__MakeSquare_GetResult_Response__fini(&data[i - 1]);
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
interfaces__action__MakeSquare_GetResult_Response__Sequence__fini(interfaces__action__MakeSquare_GetResult_Response__Sequence * array)
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
      interfaces__action__MakeSquare_GetResult_Response__fini(&array->data[i]);
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

interfaces__action__MakeSquare_GetResult_Response__Sequence *
interfaces__action__MakeSquare_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_GetResult_Response__Sequence * array = (interfaces__action__MakeSquare_GetResult_Response__Sequence *)allocator.allocate(sizeof(interfaces__action__MakeSquare_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__MakeSquare_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__action__MakeSquare_GetResult_Response__Sequence__destroy(interfaces__action__MakeSquare_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__action__MakeSquare_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__action__MakeSquare_GetResult_Response__Sequence__are_equal(const interfaces__action__MakeSquare_GetResult_Response__Sequence * lhs, const interfaces__action__MakeSquare_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__action__MakeSquare_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__action__MakeSquare_GetResult_Response__Sequence__copy(
  const interfaces__action__MakeSquare_GetResult_Response__Sequence * input,
  interfaces__action__MakeSquare_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__action__MakeSquare_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__action__MakeSquare_GetResult_Response * data =
      (interfaces__action__MakeSquare_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__action__MakeSquare_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__action__MakeSquare_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__action__MakeSquare_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "interfaces/action/detail/make_square__functions.h"

bool
interfaces__action__MakeSquare_GetResult_Event__init(interfaces__action__MakeSquare_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    interfaces__action__MakeSquare_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!interfaces__action__MakeSquare_GetResult_Request__Sequence__init(&msg->request, 0)) {
    interfaces__action__MakeSquare_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!interfaces__action__MakeSquare_GetResult_Response__Sequence__init(&msg->response, 0)) {
    interfaces__action__MakeSquare_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__action__MakeSquare_GetResult_Event__fini(interfaces__action__MakeSquare_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  interfaces__action__MakeSquare_GetResult_Request__Sequence__fini(&msg->request);
  // response
  interfaces__action__MakeSquare_GetResult_Response__Sequence__fini(&msg->response);
}

bool
interfaces__action__MakeSquare_GetResult_Event__are_equal(const interfaces__action__MakeSquare_GetResult_Event * lhs, const interfaces__action__MakeSquare_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!interfaces__action__MakeSquare_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!interfaces__action__MakeSquare_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
interfaces__action__MakeSquare_GetResult_Event__copy(
  const interfaces__action__MakeSquare_GetResult_Event * input,
  interfaces__action__MakeSquare_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!interfaces__action__MakeSquare_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!interfaces__action__MakeSquare_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

interfaces__action__MakeSquare_GetResult_Event *
interfaces__action__MakeSquare_GetResult_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_GetResult_Event * msg = (interfaces__action__MakeSquare_GetResult_Event *)allocator.allocate(sizeof(interfaces__action__MakeSquare_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__MakeSquare_GetResult_Event));
  bool success = interfaces__action__MakeSquare_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__action__MakeSquare_GetResult_Event__destroy(interfaces__action__MakeSquare_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__action__MakeSquare_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__action__MakeSquare_GetResult_Event__Sequence__init(interfaces__action__MakeSquare_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_GetResult_Event * data = NULL;

  if (size) {
    data = (interfaces__action__MakeSquare_GetResult_Event *)allocator.zero_allocate(size, sizeof(interfaces__action__MakeSquare_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__MakeSquare_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__MakeSquare_GetResult_Event__fini(&data[i - 1]);
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
interfaces__action__MakeSquare_GetResult_Event__Sequence__fini(interfaces__action__MakeSquare_GetResult_Event__Sequence * array)
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
      interfaces__action__MakeSquare_GetResult_Event__fini(&array->data[i]);
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

interfaces__action__MakeSquare_GetResult_Event__Sequence *
interfaces__action__MakeSquare_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_GetResult_Event__Sequence * array = (interfaces__action__MakeSquare_GetResult_Event__Sequence *)allocator.allocate(sizeof(interfaces__action__MakeSquare_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__MakeSquare_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__action__MakeSquare_GetResult_Event__Sequence__destroy(interfaces__action__MakeSquare_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__action__MakeSquare_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__action__MakeSquare_GetResult_Event__Sequence__are_equal(const interfaces__action__MakeSquare_GetResult_Event__Sequence * lhs, const interfaces__action__MakeSquare_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__action__MakeSquare_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__action__MakeSquare_GetResult_Event__Sequence__copy(
  const interfaces__action__MakeSquare_GetResult_Event__Sequence * input,
  interfaces__action__MakeSquare_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__action__MakeSquare_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__action__MakeSquare_GetResult_Event * data =
      (interfaces__action__MakeSquare_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__action__MakeSquare_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__action__MakeSquare_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__action__MakeSquare_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "interfaces/action/detail/make_square__functions.h"

bool
interfaces__action__MakeSquare_FeedbackMessage__init(interfaces__action__MakeSquare_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    interfaces__action__MakeSquare_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!interfaces__action__MakeSquare_Feedback__init(&msg->feedback)) {
    interfaces__action__MakeSquare_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__action__MakeSquare_FeedbackMessage__fini(interfaces__action__MakeSquare_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  interfaces__action__MakeSquare_Feedback__fini(&msg->feedback);
}

bool
interfaces__action__MakeSquare_FeedbackMessage__are_equal(const interfaces__action__MakeSquare_FeedbackMessage * lhs, const interfaces__action__MakeSquare_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!interfaces__action__MakeSquare_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
interfaces__action__MakeSquare_FeedbackMessage__copy(
  const interfaces__action__MakeSquare_FeedbackMessage * input,
  interfaces__action__MakeSquare_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!interfaces__action__MakeSquare_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

interfaces__action__MakeSquare_FeedbackMessage *
interfaces__action__MakeSquare_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_FeedbackMessage * msg = (interfaces__action__MakeSquare_FeedbackMessage *)allocator.allocate(sizeof(interfaces__action__MakeSquare_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__action__MakeSquare_FeedbackMessage));
  bool success = interfaces__action__MakeSquare_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__action__MakeSquare_FeedbackMessage__destroy(interfaces__action__MakeSquare_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__action__MakeSquare_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__action__MakeSquare_FeedbackMessage__Sequence__init(interfaces__action__MakeSquare_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_FeedbackMessage * data = NULL;

  if (size) {
    data = (interfaces__action__MakeSquare_FeedbackMessage *)allocator.zero_allocate(size, sizeof(interfaces__action__MakeSquare_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__action__MakeSquare_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__action__MakeSquare_FeedbackMessage__fini(&data[i - 1]);
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
interfaces__action__MakeSquare_FeedbackMessage__Sequence__fini(interfaces__action__MakeSquare_FeedbackMessage__Sequence * array)
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
      interfaces__action__MakeSquare_FeedbackMessage__fini(&array->data[i]);
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

interfaces__action__MakeSquare_FeedbackMessage__Sequence *
interfaces__action__MakeSquare_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__action__MakeSquare_FeedbackMessage__Sequence * array = (interfaces__action__MakeSquare_FeedbackMessage__Sequence *)allocator.allocate(sizeof(interfaces__action__MakeSquare_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__action__MakeSquare_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__action__MakeSquare_FeedbackMessage__Sequence__destroy(interfaces__action__MakeSquare_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__action__MakeSquare_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__action__MakeSquare_FeedbackMessage__Sequence__are_equal(const interfaces__action__MakeSquare_FeedbackMessage__Sequence * lhs, const interfaces__action__MakeSquare_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__action__MakeSquare_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__action__MakeSquare_FeedbackMessage__Sequence__copy(
  const interfaces__action__MakeSquare_FeedbackMessage__Sequence * input,
  interfaces__action__MakeSquare_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__action__MakeSquare_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__action__MakeSquare_FeedbackMessage * data =
      (interfaces__action__MakeSquare_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__action__MakeSquare_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__action__MakeSquare_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__action__MakeSquare_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
