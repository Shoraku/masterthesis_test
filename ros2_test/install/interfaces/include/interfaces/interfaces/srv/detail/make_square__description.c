// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:srv/MakeSquare.idl
// generated code does not contain a copyright notice

#include "interfaces/srv/detail/make_square__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__srv__MakeSquare__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa6, 0x72, 0x5e, 0x64, 0x9f, 0x3c, 0x90, 0xa0,
      0xf6, 0xa7, 0x4d, 0xed, 0x24, 0x07, 0xa1, 0xc1,
      0x43, 0xf1, 0xbe, 0xa8, 0x66, 0x4f, 0xaf, 0xee,
      0x12, 0x76, 0xb5, 0xc1, 0xe1, 0x97, 0x9d, 0x0d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__srv__MakeSquare_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd4, 0x37, 0x33, 0xb9, 0x28, 0x05, 0x59, 0x28,
      0x97, 0x36, 0x1d, 0xde, 0x90, 0x7b, 0x4a, 0xa5,
      0x7a, 0x94, 0x35, 0x6b, 0xe7, 0xc5, 0xb1, 0xe7,
      0xb7, 0x79, 0x7f, 0x52, 0x0e, 0x20, 0x26, 0x50,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__srv__MakeSquare_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x07, 0x94, 0xfb, 0xfe, 0x55, 0xdd, 0xb4, 0x0d,
      0xc5, 0x98, 0xee, 0xd1, 0x78, 0xae, 0x7b, 0xc6,
      0xea, 0xdc, 0x47, 0x26, 0xcf, 0xb4, 0x18, 0xed,
      0xd3, 0x23, 0xfd, 0x33, 0x9e, 0x78, 0x4a, 0xdc,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__srv__MakeSquare_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3f, 0xb7, 0xc0, 0xca, 0x66, 0x2c, 0xdb, 0xb7,
      0xa2, 0xba, 0x99, 0x2a, 0x73, 0x4e, 0xf9, 0xcb,
      0x8c, 0x48, 0x5a, 0xb8, 0x5b, 0x11, 0x95, 0x78,
      0x70, 0xa0, 0x67, 0x71, 0x73, 0xc6, 0x59, 0x72,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char interfaces__srv__MakeSquare__TYPE_NAME[] = "interfaces/srv/MakeSquare";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char interfaces__srv__MakeSquare_Event__TYPE_NAME[] = "interfaces/srv/MakeSquare_Event";
static char interfaces__srv__MakeSquare_Request__TYPE_NAME[] = "interfaces/srv/MakeSquare_Request";
static char interfaces__srv__MakeSquare_Response__TYPE_NAME[] = "interfaces/srv/MakeSquare_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char interfaces__srv__MakeSquare__FIELD_NAME__request_message[] = "request_message";
static char interfaces__srv__MakeSquare__FIELD_NAME__response_message[] = "response_message";
static char interfaces__srv__MakeSquare__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field interfaces__srv__MakeSquare__FIELDS[] = {
  {
    {interfaces__srv__MakeSquare__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interfaces__srv__MakeSquare_Request__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__MakeSquare__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interfaces__srv__MakeSquare_Response__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__MakeSquare__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interfaces__srv__MakeSquare_Event__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interfaces__srv__MakeSquare__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__MakeSquare_Event__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__MakeSquare_Request__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__MakeSquare_Response__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__srv__MakeSquare__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__srv__MakeSquare__TYPE_NAME, 25, 25},
      {interfaces__srv__MakeSquare__FIELDS, 3, 3},
    },
    {interfaces__srv__MakeSquare__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = interfaces__srv__MakeSquare_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = interfaces__srv__MakeSquare_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = interfaces__srv__MakeSquare_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interfaces__srv__MakeSquare_Request__FIELD_NAME__sender_id[] = "sender_id";
static char interfaces__srv__MakeSquare_Request__FIELD_NAME__receiver_id[] = "receiver_id";
static char interfaces__srv__MakeSquare_Request__FIELD_NAME__timestamp[] = "timestamp";
static char interfaces__srv__MakeSquare_Request__FIELD_NAME__message_type[] = "message_type";
static char interfaces__srv__MakeSquare_Request__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field interfaces__srv__MakeSquare_Request__FIELDS[] = {
  {
    {interfaces__srv__MakeSquare_Request__FIELD_NAME__sender_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__MakeSquare_Request__FIELD_NAME__receiver_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__MakeSquare_Request__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__MakeSquare_Request__FIELD_NAME__message_type, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__MakeSquare_Request__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interfaces__srv__MakeSquare_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__srv__MakeSquare_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__srv__MakeSquare_Request__TYPE_NAME, 33, 33},
      {interfaces__srv__MakeSquare_Request__FIELDS, 5, 5},
    },
    {interfaces__srv__MakeSquare_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interfaces__srv__MakeSquare_Response__FIELD_NAME__sender_id[] = "sender_id";
static char interfaces__srv__MakeSquare_Response__FIELD_NAME__receiver_id[] = "receiver_id";
static char interfaces__srv__MakeSquare_Response__FIELD_NAME__timestamp[] = "timestamp";
static char interfaces__srv__MakeSquare_Response__FIELD_NAME__message_type[] = "message_type";
static char interfaces__srv__MakeSquare_Response__FIELD_NAME__result[] = "result";
static char interfaces__srv__MakeSquare_Response__FIELD_NAME__timeslot[] = "timeslot";

static rosidl_runtime_c__type_description__Field interfaces__srv__MakeSquare_Response__FIELDS[] = {
  {
    {interfaces__srv__MakeSquare_Response__FIELD_NAME__sender_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__MakeSquare_Response__FIELD_NAME__receiver_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__MakeSquare_Response__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__MakeSquare_Response__FIELD_NAME__message_type, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__MakeSquare_Response__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__MakeSquare_Response__FIELD_NAME__timeslot, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interfaces__srv__MakeSquare_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__srv__MakeSquare_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__srv__MakeSquare_Response__TYPE_NAME, 34, 34},
      {interfaces__srv__MakeSquare_Response__FIELDS, 6, 6},
    },
    {interfaces__srv__MakeSquare_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interfaces__srv__MakeSquare_Event__FIELD_NAME__info[] = "info";
static char interfaces__srv__MakeSquare_Event__FIELD_NAME__request[] = "request";
static char interfaces__srv__MakeSquare_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field interfaces__srv__MakeSquare_Event__FIELDS[] = {
  {
    {interfaces__srv__MakeSquare_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__MakeSquare_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {interfaces__srv__MakeSquare_Request__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__MakeSquare_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {interfaces__srv__MakeSquare_Response__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interfaces__srv__MakeSquare_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__MakeSquare_Request__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__MakeSquare_Response__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__srv__MakeSquare_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__srv__MakeSquare_Event__TYPE_NAME, 31, 31},
      {interfaces__srv__MakeSquare_Event__FIELDS, 3, 3},
    },
    {interfaces__srv__MakeSquare_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = interfaces__srv__MakeSquare_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = interfaces__srv__MakeSquare_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 sender_id \n"
  "int32 receiver_id\n"
  "string message_type\n"
  "builtin_interfaces/Time timestamp\n"
  "float32 value \n"
  "---\n"
  "int32 sender_id \n"
  "int32 receiver_id\n"
  "string message_type\n"
  "builtin_interfaces/Time timestamp\n"
  "float32 result\n"
  "builtin_interfaces/Time timeslot\n"
  "---\n"
  "string calculation_process";

static char action_encoding[] = "action";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__srv__MakeSquare__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__srv__MakeSquare__TYPE_NAME, 25, 25},
    {action_encoding, 6, 6},
    {toplevel_type_raw_source, 276, 276},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interfaces__srv__MakeSquare_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__srv__MakeSquare_Request__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interfaces__srv__MakeSquare_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__srv__MakeSquare_Response__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interfaces__srv__MakeSquare_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__srv__MakeSquare_Event__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__srv__MakeSquare__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__srv__MakeSquare__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *interfaces__srv__MakeSquare_Event__get_individual_type_description_source(NULL);
    sources[3] = *interfaces__srv__MakeSquare_Request__get_individual_type_description_source(NULL);
    sources[4] = *interfaces__srv__MakeSquare_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__srv__MakeSquare_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__srv__MakeSquare_Request__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__srv__MakeSquare_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__srv__MakeSquare_Response__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__srv__MakeSquare_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__srv__MakeSquare_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *interfaces__srv__MakeSquare_Request__get_individual_type_description_source(NULL);
    sources[3] = *interfaces__srv__MakeSquare_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
