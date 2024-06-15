// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:srv/MakeSquare.idl
// generated code does not contain a copyright notice
#include "interfaces/srv/detail/make_square__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `message_type`
#include "rosidl_runtime_c/string_functions.h"

bool
interfaces__srv__MakeSquare_Request__init(interfaces__srv__MakeSquare_Request * msg)
{
  if (!msg) {
    return false;
  }
  // sender_id
  // receiver_id
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    interfaces__srv__MakeSquare_Request__fini(msg);
    return false;
  }
  // message_type
  if (!rosidl_runtime_c__String__init(&msg->message_type)) {
    interfaces__srv__MakeSquare_Request__fini(msg);
    return false;
  }
  // value
  return true;
}

void
interfaces__srv__MakeSquare_Request__fini(interfaces__srv__MakeSquare_Request * msg)
{
  if (!msg) {
    return;
  }
  // sender_id
  // receiver_id
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // message_type
  rosidl_runtime_c__String__fini(&msg->message_type);
  // value
}

bool
interfaces__srv__MakeSquare_Request__are_equal(const interfaces__srv__MakeSquare_Request * lhs, const interfaces__srv__MakeSquare_Request * rhs)
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
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // message_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message_type), &(rhs->message_type)))
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
interfaces__srv__MakeSquare_Request__copy(
  const interfaces__srv__MakeSquare_Request * input,
  interfaces__srv__MakeSquare_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // sender_id
  output->sender_id = input->sender_id;
  // receiver_id
  output->receiver_id = input->receiver_id;
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // message_type
  if (!rosidl_runtime_c__String__copy(
      &(input->message_type), &(output->message_type)))
  {
    return false;
  }
  // value
  output->value = input->value;
  return true;
}

interfaces__srv__MakeSquare_Request *
interfaces__srv__MakeSquare_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__MakeSquare_Request * msg = (interfaces__srv__MakeSquare_Request *)allocator.allocate(sizeof(interfaces__srv__MakeSquare_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__srv__MakeSquare_Request));
  bool success = interfaces__srv__MakeSquare_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__srv__MakeSquare_Request__destroy(interfaces__srv__MakeSquare_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__srv__MakeSquare_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__srv__MakeSquare_Request__Sequence__init(interfaces__srv__MakeSquare_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__MakeSquare_Request * data = NULL;

  if (size) {
    data = (interfaces__srv__MakeSquare_Request *)allocator.zero_allocate(size, sizeof(interfaces__srv__MakeSquare_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__srv__MakeSquare_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__srv__MakeSquare_Request__fini(&data[i - 1]);
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
interfaces__srv__MakeSquare_Request__Sequence__fini(interfaces__srv__MakeSquare_Request__Sequence * array)
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
      interfaces__srv__MakeSquare_Request__fini(&array->data[i]);
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

interfaces__srv__MakeSquare_Request__Sequence *
interfaces__srv__MakeSquare_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__MakeSquare_Request__Sequence * array = (interfaces__srv__MakeSquare_Request__Sequence *)allocator.allocate(sizeof(interfaces__srv__MakeSquare_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__srv__MakeSquare_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__srv__MakeSquare_Request__Sequence__destroy(interfaces__srv__MakeSquare_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__srv__MakeSquare_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__srv__MakeSquare_Request__Sequence__are_equal(const interfaces__srv__MakeSquare_Request__Sequence * lhs, const interfaces__srv__MakeSquare_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__srv__MakeSquare_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__srv__MakeSquare_Request__Sequence__copy(
  const interfaces__srv__MakeSquare_Request__Sequence * input,
  interfaces__srv__MakeSquare_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__srv__MakeSquare_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__srv__MakeSquare_Request * data =
      (interfaces__srv__MakeSquare_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__srv__MakeSquare_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__srv__MakeSquare_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__srv__MakeSquare_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `timestamp`
// Member `timeslot`
// already included above
// #include "builtin_interfaces/msg/detail/time__functions.h"
// Member `message_type`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
interfaces__srv__MakeSquare_Response__init(interfaces__srv__MakeSquare_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sender_id
  // receiver_id
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    interfaces__srv__MakeSquare_Response__fini(msg);
    return false;
  }
  // message_type
  if (!rosidl_runtime_c__String__init(&msg->message_type)) {
    interfaces__srv__MakeSquare_Response__fini(msg);
    return false;
  }
  // result
  // timeslot
  if (!builtin_interfaces__msg__Time__init(&msg->timeslot)) {
    interfaces__srv__MakeSquare_Response__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__srv__MakeSquare_Response__fini(interfaces__srv__MakeSquare_Response * msg)
{
  if (!msg) {
    return;
  }
  // sender_id
  // receiver_id
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // message_type
  rosidl_runtime_c__String__fini(&msg->message_type);
  // result
  // timeslot
  builtin_interfaces__msg__Time__fini(&msg->timeslot);
}

bool
interfaces__srv__MakeSquare_Response__are_equal(const interfaces__srv__MakeSquare_Response * lhs, const interfaces__srv__MakeSquare_Response * rhs)
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
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // message_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message_type), &(rhs->message_type)))
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
interfaces__srv__MakeSquare_Response__copy(
  const interfaces__srv__MakeSquare_Response * input,
  interfaces__srv__MakeSquare_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // sender_id
  output->sender_id = input->sender_id;
  // receiver_id
  output->receiver_id = input->receiver_id;
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // message_type
  if (!rosidl_runtime_c__String__copy(
      &(input->message_type), &(output->message_type)))
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

interfaces__srv__MakeSquare_Response *
interfaces__srv__MakeSquare_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__MakeSquare_Response * msg = (interfaces__srv__MakeSquare_Response *)allocator.allocate(sizeof(interfaces__srv__MakeSquare_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__srv__MakeSquare_Response));
  bool success = interfaces__srv__MakeSquare_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__srv__MakeSquare_Response__destroy(interfaces__srv__MakeSquare_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__srv__MakeSquare_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__srv__MakeSquare_Response__Sequence__init(interfaces__srv__MakeSquare_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__MakeSquare_Response * data = NULL;

  if (size) {
    data = (interfaces__srv__MakeSquare_Response *)allocator.zero_allocate(size, sizeof(interfaces__srv__MakeSquare_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__srv__MakeSquare_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__srv__MakeSquare_Response__fini(&data[i - 1]);
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
interfaces__srv__MakeSquare_Response__Sequence__fini(interfaces__srv__MakeSquare_Response__Sequence * array)
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
      interfaces__srv__MakeSquare_Response__fini(&array->data[i]);
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

interfaces__srv__MakeSquare_Response__Sequence *
interfaces__srv__MakeSquare_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__MakeSquare_Response__Sequence * array = (interfaces__srv__MakeSquare_Response__Sequence *)allocator.allocate(sizeof(interfaces__srv__MakeSquare_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__srv__MakeSquare_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__srv__MakeSquare_Response__Sequence__destroy(interfaces__srv__MakeSquare_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__srv__MakeSquare_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__srv__MakeSquare_Response__Sequence__are_equal(const interfaces__srv__MakeSquare_Response__Sequence * lhs, const interfaces__srv__MakeSquare_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__srv__MakeSquare_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__srv__MakeSquare_Response__Sequence__copy(
  const interfaces__srv__MakeSquare_Response__Sequence * input,
  interfaces__srv__MakeSquare_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__srv__MakeSquare_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__srv__MakeSquare_Response * data =
      (interfaces__srv__MakeSquare_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__srv__MakeSquare_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__srv__MakeSquare_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__srv__MakeSquare_Response__copy(
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
// #include "interfaces/srv/detail/make_square__functions.h"

bool
interfaces__srv__MakeSquare_Event__init(interfaces__srv__MakeSquare_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    interfaces__srv__MakeSquare_Event__fini(msg);
    return false;
  }
  // request
  if (!interfaces__srv__MakeSquare_Request__Sequence__init(&msg->request, 0)) {
    interfaces__srv__MakeSquare_Event__fini(msg);
    return false;
  }
  // response
  if (!interfaces__srv__MakeSquare_Response__Sequence__init(&msg->response, 0)) {
    interfaces__srv__MakeSquare_Event__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__srv__MakeSquare_Event__fini(interfaces__srv__MakeSquare_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  interfaces__srv__MakeSquare_Request__Sequence__fini(&msg->request);
  // response
  interfaces__srv__MakeSquare_Response__Sequence__fini(&msg->response);
}

bool
interfaces__srv__MakeSquare_Event__are_equal(const interfaces__srv__MakeSquare_Event * lhs, const interfaces__srv__MakeSquare_Event * rhs)
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
  if (!interfaces__srv__MakeSquare_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!interfaces__srv__MakeSquare_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
interfaces__srv__MakeSquare_Event__copy(
  const interfaces__srv__MakeSquare_Event * input,
  interfaces__srv__MakeSquare_Event * output)
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
  if (!interfaces__srv__MakeSquare_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!interfaces__srv__MakeSquare_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

interfaces__srv__MakeSquare_Event *
interfaces__srv__MakeSquare_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__MakeSquare_Event * msg = (interfaces__srv__MakeSquare_Event *)allocator.allocate(sizeof(interfaces__srv__MakeSquare_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__srv__MakeSquare_Event));
  bool success = interfaces__srv__MakeSquare_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__srv__MakeSquare_Event__destroy(interfaces__srv__MakeSquare_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__srv__MakeSquare_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__srv__MakeSquare_Event__Sequence__init(interfaces__srv__MakeSquare_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__MakeSquare_Event * data = NULL;

  if (size) {
    data = (interfaces__srv__MakeSquare_Event *)allocator.zero_allocate(size, sizeof(interfaces__srv__MakeSquare_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__srv__MakeSquare_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__srv__MakeSquare_Event__fini(&data[i - 1]);
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
interfaces__srv__MakeSquare_Event__Sequence__fini(interfaces__srv__MakeSquare_Event__Sequence * array)
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
      interfaces__srv__MakeSquare_Event__fini(&array->data[i]);
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

interfaces__srv__MakeSquare_Event__Sequence *
interfaces__srv__MakeSquare_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__srv__MakeSquare_Event__Sequence * array = (interfaces__srv__MakeSquare_Event__Sequence *)allocator.allocate(sizeof(interfaces__srv__MakeSquare_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__srv__MakeSquare_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__srv__MakeSquare_Event__Sequence__destroy(interfaces__srv__MakeSquare_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__srv__MakeSquare_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__srv__MakeSquare_Event__Sequence__are_equal(const interfaces__srv__MakeSquare_Event__Sequence * lhs, const interfaces__srv__MakeSquare_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__srv__MakeSquare_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__srv__MakeSquare_Event__Sequence__copy(
  const interfaces__srv__MakeSquare_Event__Sequence * input,
  interfaces__srv__MakeSquare_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__srv__MakeSquare_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__srv__MakeSquare_Event * data =
      (interfaces__srv__MakeSquare_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__srv__MakeSquare_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__srv__MakeSquare_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__srv__MakeSquare_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}