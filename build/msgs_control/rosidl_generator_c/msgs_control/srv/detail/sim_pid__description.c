// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from msgs_control:srv/SimPID.idl
// generated code does not contain a copyright notice

#include "msgs_control/srv/detail/sim_pid__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_msgs_control
const rosidl_type_hash_t *
msgs_control__srv__SimPID__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6c, 0xb4, 0x05, 0x3a, 0xcc, 0x95, 0x86, 0x2e,
      0x23, 0x1b, 0x55, 0x31, 0x2b, 0x3e, 0xa2, 0x67,
      0x0d, 0x8f, 0x60, 0x85, 0x47, 0x96, 0xef, 0x05,
      0x3f, 0x81, 0xa5, 0xa7, 0x4a, 0x26, 0xdf, 0xdc,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_msgs_control
const rosidl_type_hash_t *
msgs_control__srv__SimPID_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x14, 0x57, 0xfa, 0xaf, 0x81, 0x6b, 0xb4, 0x34,
      0x85, 0x66, 0x82, 0xd7, 0xd7, 0x7c, 0x50, 0xc8,
      0xd7, 0x46, 0xc4, 0x0d, 0x2f, 0xc6, 0x9c, 0x17,
      0x46, 0xdf, 0x89, 0x0c, 0x05, 0x8c, 0xe1, 0x14,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_msgs_control
const rosidl_type_hash_t *
msgs_control__srv__SimPID_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xee, 0x05, 0xed, 0x36, 0xc9, 0x7b, 0x5f, 0xb4,
      0x18, 0x2f, 0x04, 0xe0, 0x07, 0x75, 0x9f, 0xbe,
      0xa1, 0x7c, 0x19, 0xc7, 0x41, 0xc0, 0x50, 0x6c,
      0x7f, 0xee, 0xca, 0x8c, 0x3e, 0x36, 0x7b, 0x94,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_msgs_control
const rosidl_type_hash_t *
msgs_control__srv__SimPID_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe6, 0x14, 0x6a, 0x63, 0x65, 0xe1, 0x97, 0x45,
      0xfc, 0xcb, 0x3e, 0xac, 0x2a, 0xa3, 0xa2, 0x93,
      0x18, 0xce, 0x83, 0x2d, 0xc9, 0x1b, 0x39, 0xe8,
      0x46, 0x82, 0xf5, 0x9b, 0xd6, 0xbe, 0x48, 0x07,
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

static char msgs_control__srv__SimPID__TYPE_NAME[] = "msgs_control/srv/SimPID";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char msgs_control__srv__SimPID_Event__TYPE_NAME[] = "msgs_control/srv/SimPID_Event";
static char msgs_control__srv__SimPID_Request__TYPE_NAME[] = "msgs_control/srv/SimPID_Request";
static char msgs_control__srv__SimPID_Response__TYPE_NAME[] = "msgs_control/srv/SimPID_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char msgs_control__srv__SimPID__FIELD_NAME__request_message[] = "request_message";
static char msgs_control__srv__SimPID__FIELD_NAME__response_message[] = "response_message";
static char msgs_control__srv__SimPID__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field msgs_control__srv__SimPID__FIELDS[] = {
  {
    {msgs_control__srv__SimPID__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {msgs_control__srv__SimPID_Request__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {msgs_control__srv__SimPID__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {msgs_control__srv__SimPID_Response__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {msgs_control__srv__SimPID__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {msgs_control__srv__SimPID_Event__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription msgs_control__srv__SimPID__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {msgs_control__srv__SimPID_Event__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {msgs_control__srv__SimPID_Request__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {msgs_control__srv__SimPID_Response__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
msgs_control__srv__SimPID__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {msgs_control__srv__SimPID__TYPE_NAME, 23, 23},
      {msgs_control__srv__SimPID__FIELDS, 3, 3},
    },
    {msgs_control__srv__SimPID__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = msgs_control__srv__SimPID_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = msgs_control__srv__SimPID_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = msgs_control__srv__SimPID_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char msgs_control__srv__SimPID_Request__FIELD_NAME__kp[] = "kp";
static char msgs_control__srv__SimPID_Request__FIELD_NAME__ki[] = "ki";
static char msgs_control__srv__SimPID_Request__FIELD_NAME__kd[] = "kd";

static rosidl_runtime_c__type_description__Field msgs_control__srv__SimPID_Request__FIELDS[] = {
  {
    {msgs_control__srv__SimPID_Request__FIELD_NAME__kp, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {msgs_control__srv__SimPID_Request__FIELD_NAME__ki, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {msgs_control__srv__SimPID_Request__FIELD_NAME__kd, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
msgs_control__srv__SimPID_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {msgs_control__srv__SimPID_Request__TYPE_NAME, 31, 31},
      {msgs_control__srv__SimPID_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char msgs_control__srv__SimPID_Response__FIELD_NAME__overshoot[] = "overshoot";
static char msgs_control__srv__SimPID_Response__FIELD_NAME__d[] = "d";
static char msgs_control__srv__SimPID_Response__FIELD_NAME__ess[] = "ess";
static char msgs_control__srv__SimPID_Response__FIELD_NAME__ts[] = "ts";

static rosidl_runtime_c__type_description__Field msgs_control__srv__SimPID_Response__FIELDS[] = {
  {
    {msgs_control__srv__SimPID_Response__FIELD_NAME__overshoot, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {msgs_control__srv__SimPID_Response__FIELD_NAME__d, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {msgs_control__srv__SimPID_Response__FIELD_NAME__ess, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {msgs_control__srv__SimPID_Response__FIELD_NAME__ts, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
msgs_control__srv__SimPID_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {msgs_control__srv__SimPID_Response__TYPE_NAME, 32, 32},
      {msgs_control__srv__SimPID_Response__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char msgs_control__srv__SimPID_Event__FIELD_NAME__info[] = "info";
static char msgs_control__srv__SimPID_Event__FIELD_NAME__request[] = "request";
static char msgs_control__srv__SimPID_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field msgs_control__srv__SimPID_Event__FIELDS[] = {
  {
    {msgs_control__srv__SimPID_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {msgs_control__srv__SimPID_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {msgs_control__srv__SimPID_Request__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {msgs_control__srv__SimPID_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {msgs_control__srv__SimPID_Response__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription msgs_control__srv__SimPID_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {msgs_control__srv__SimPID_Request__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {msgs_control__srv__SimPID_Response__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
msgs_control__srv__SimPID_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {msgs_control__srv__SimPID_Event__TYPE_NAME, 29, 29},
      {msgs_control__srv__SimPID_Event__FIELDS, 3, 3},
    },
    {msgs_control__srv__SimPID_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = msgs_control__srv__SimPID_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = msgs_control__srv__SimPID_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Archivo sim_pid.srv\n"
  "\n"
  "float32 kp\n"
  "float32 ki\n"
  "float32 kd\n"
  "\n"
  "---\n"
  "float32 overshoot\n"
  "float32 d\n"
  "float32 ess\n"
  "float32 ts";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
msgs_control__srv__SimPID__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {msgs_control__srv__SimPID__TYPE_NAME, 23, 23},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 112, 112},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
msgs_control__srv__SimPID_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {msgs_control__srv__SimPID_Request__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
msgs_control__srv__SimPID_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {msgs_control__srv__SimPID_Response__TYPE_NAME, 32, 32},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
msgs_control__srv__SimPID_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {msgs_control__srv__SimPID_Event__TYPE_NAME, 29, 29},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
msgs_control__srv__SimPID__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *msgs_control__srv__SimPID__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *msgs_control__srv__SimPID_Event__get_individual_type_description_source(NULL);
    sources[3] = *msgs_control__srv__SimPID_Request__get_individual_type_description_source(NULL);
    sources[4] = *msgs_control__srv__SimPID_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
msgs_control__srv__SimPID_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *msgs_control__srv__SimPID_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
msgs_control__srv__SimPID_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *msgs_control__srv__SimPID_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
msgs_control__srv__SimPID_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *msgs_control__srv__SimPID_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *msgs_control__srv__SimPID_Request__get_individual_type_description_source(NULL);
    sources[3] = *msgs_control__srv__SimPID_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
