// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msgs_control:srv/SimPID.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msgs_control/srv/detail/sim_pid__rosidl_typesupport_introspection_c.h"
#include "msgs_control/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msgs_control/srv/detail/sim_pid__functions.h"
#include "msgs_control/srv/detail/sim_pid__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void msgs_control__srv__SimPID_Request__rosidl_typesupport_introspection_c__SimPID_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msgs_control__srv__SimPID_Request__init(message_memory);
}

void msgs_control__srv__SimPID_Request__rosidl_typesupport_introspection_c__SimPID_Request_fini_function(void * message_memory)
{
  msgs_control__srv__SimPID_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember msgs_control__srv__SimPID_Request__rosidl_typesupport_introspection_c__SimPID_Request_message_member_array[3] = {
  {
    "kp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_control__srv__SimPID_Request, kp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ki",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_control__srv__SimPID_Request, ki),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_control__srv__SimPID_Request, kd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers msgs_control__srv__SimPID_Request__rosidl_typesupport_introspection_c__SimPID_Request_message_members = {
  "msgs_control__srv",  // message namespace
  "SimPID_Request",  // message name
  3,  // number of fields
  sizeof(msgs_control__srv__SimPID_Request),
  false,  // has_any_key_member_
  msgs_control__srv__SimPID_Request__rosidl_typesupport_introspection_c__SimPID_Request_message_member_array,  // message members
  msgs_control__srv__SimPID_Request__rosidl_typesupport_introspection_c__SimPID_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  msgs_control__srv__SimPID_Request__rosidl_typesupport_introspection_c__SimPID_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t msgs_control__srv__SimPID_Request__rosidl_typesupport_introspection_c__SimPID_Request_message_type_support_handle = {
  0,
  &msgs_control__srv__SimPID_Request__rosidl_typesupport_introspection_c__SimPID_Request_message_members,
  get_message_typesupport_handle_function,
  &msgs_control__srv__SimPID_Request__get_type_hash,
  &msgs_control__srv__SimPID_Request__get_type_description,
  &msgs_control__srv__SimPID_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msgs_control
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_control, srv, SimPID_Request)() {
  if (!msgs_control__srv__SimPID_Request__rosidl_typesupport_introspection_c__SimPID_Request_message_type_support_handle.typesupport_identifier) {
    msgs_control__srv__SimPID_Request__rosidl_typesupport_introspection_c__SimPID_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &msgs_control__srv__SimPID_Request__rosidl_typesupport_introspection_c__SimPID_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msgs_control/srv/detail/sim_pid__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msgs_control/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msgs_control/srv/detail/sim_pid__functions.h"
// already included above
// #include "msgs_control/srv/detail/sim_pid__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void msgs_control__srv__SimPID_Response__rosidl_typesupport_introspection_c__SimPID_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msgs_control__srv__SimPID_Response__init(message_memory);
}

void msgs_control__srv__SimPID_Response__rosidl_typesupport_introspection_c__SimPID_Response_fini_function(void * message_memory)
{
  msgs_control__srv__SimPID_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember msgs_control__srv__SimPID_Response__rosidl_typesupport_introspection_c__SimPID_Response_message_member_array[4] = {
  {
    "overshoot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_control__srv__SimPID_Response, overshoot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_control__srv__SimPID_Response, d),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ess",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_control__srv__SimPID_Response, ess),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_control__srv__SimPID_Response, ts),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers msgs_control__srv__SimPID_Response__rosidl_typesupport_introspection_c__SimPID_Response_message_members = {
  "msgs_control__srv",  // message namespace
  "SimPID_Response",  // message name
  4,  // number of fields
  sizeof(msgs_control__srv__SimPID_Response),
  false,  // has_any_key_member_
  msgs_control__srv__SimPID_Response__rosidl_typesupport_introspection_c__SimPID_Response_message_member_array,  // message members
  msgs_control__srv__SimPID_Response__rosidl_typesupport_introspection_c__SimPID_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  msgs_control__srv__SimPID_Response__rosidl_typesupport_introspection_c__SimPID_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t msgs_control__srv__SimPID_Response__rosidl_typesupport_introspection_c__SimPID_Response_message_type_support_handle = {
  0,
  &msgs_control__srv__SimPID_Response__rosidl_typesupport_introspection_c__SimPID_Response_message_members,
  get_message_typesupport_handle_function,
  &msgs_control__srv__SimPID_Response__get_type_hash,
  &msgs_control__srv__SimPID_Response__get_type_description,
  &msgs_control__srv__SimPID_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msgs_control
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_control, srv, SimPID_Response)() {
  if (!msgs_control__srv__SimPID_Response__rosidl_typesupport_introspection_c__SimPID_Response_message_type_support_handle.typesupport_identifier) {
    msgs_control__srv__SimPID_Response__rosidl_typesupport_introspection_c__SimPID_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &msgs_control__srv__SimPID_Response__rosidl_typesupport_introspection_c__SimPID_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msgs_control/srv/detail/sim_pid__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msgs_control/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msgs_control/srv/detail/sim_pid__functions.h"
// already included above
// #include "msgs_control/srv/detail/sim_pid__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "msgs_control/srv/sim_pid.h"
// Member `request`
// Member `response`
// already included above
// #include "msgs_control/srv/detail/sim_pid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__SimPID_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msgs_control__srv__SimPID_Event__init(message_memory);
}

void msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__SimPID_Event_fini_function(void * message_memory)
{
  msgs_control__srv__SimPID_Event__fini(message_memory);
}

size_t msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__size_function__SimPID_Event__request(
  const void * untyped_member)
{
  const msgs_control__srv__SimPID_Request__Sequence * member =
    (const msgs_control__srv__SimPID_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__get_const_function__SimPID_Event__request(
  const void * untyped_member, size_t index)
{
  const msgs_control__srv__SimPID_Request__Sequence * member =
    (const msgs_control__srv__SimPID_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__get_function__SimPID_Event__request(
  void * untyped_member, size_t index)
{
  msgs_control__srv__SimPID_Request__Sequence * member =
    (msgs_control__srv__SimPID_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__fetch_function__SimPID_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const msgs_control__srv__SimPID_Request * item =
    ((const msgs_control__srv__SimPID_Request *)
    msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__get_const_function__SimPID_Event__request(untyped_member, index));
  msgs_control__srv__SimPID_Request * value =
    (msgs_control__srv__SimPID_Request *)(untyped_value);
  *value = *item;
}

void msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__assign_function__SimPID_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  msgs_control__srv__SimPID_Request * item =
    ((msgs_control__srv__SimPID_Request *)
    msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__get_function__SimPID_Event__request(untyped_member, index));
  const msgs_control__srv__SimPID_Request * value =
    (const msgs_control__srv__SimPID_Request *)(untyped_value);
  *item = *value;
}

bool msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__resize_function__SimPID_Event__request(
  void * untyped_member, size_t size)
{
  msgs_control__srv__SimPID_Request__Sequence * member =
    (msgs_control__srv__SimPID_Request__Sequence *)(untyped_member);
  msgs_control__srv__SimPID_Request__Sequence__fini(member);
  return msgs_control__srv__SimPID_Request__Sequence__init(member, size);
}

size_t msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__size_function__SimPID_Event__response(
  const void * untyped_member)
{
  const msgs_control__srv__SimPID_Response__Sequence * member =
    (const msgs_control__srv__SimPID_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__get_const_function__SimPID_Event__response(
  const void * untyped_member, size_t index)
{
  const msgs_control__srv__SimPID_Response__Sequence * member =
    (const msgs_control__srv__SimPID_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__get_function__SimPID_Event__response(
  void * untyped_member, size_t index)
{
  msgs_control__srv__SimPID_Response__Sequence * member =
    (msgs_control__srv__SimPID_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__fetch_function__SimPID_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const msgs_control__srv__SimPID_Response * item =
    ((const msgs_control__srv__SimPID_Response *)
    msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__get_const_function__SimPID_Event__response(untyped_member, index));
  msgs_control__srv__SimPID_Response * value =
    (msgs_control__srv__SimPID_Response *)(untyped_value);
  *value = *item;
}

void msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__assign_function__SimPID_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  msgs_control__srv__SimPID_Response * item =
    ((msgs_control__srv__SimPID_Response *)
    msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__get_function__SimPID_Event__response(untyped_member, index));
  const msgs_control__srv__SimPID_Response * value =
    (const msgs_control__srv__SimPID_Response *)(untyped_value);
  *item = *value;
}

bool msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__resize_function__SimPID_Event__response(
  void * untyped_member, size_t size)
{
  msgs_control__srv__SimPID_Response__Sequence * member =
    (msgs_control__srv__SimPID_Response__Sequence *)(untyped_member);
  msgs_control__srv__SimPID_Response__Sequence__fini(member);
  return msgs_control__srv__SimPID_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__SimPID_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_control__srv__SimPID_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(msgs_control__srv__SimPID_Event, request),  // bytes offset in struct
    NULL,  // default value
    msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__size_function__SimPID_Event__request,  // size() function pointer
    msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__get_const_function__SimPID_Event__request,  // get_const(index) function pointer
    msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__get_function__SimPID_Event__request,  // get(index) function pointer
    msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__fetch_function__SimPID_Event__request,  // fetch(index, &value) function pointer
    msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__assign_function__SimPID_Event__request,  // assign(index, value) function pointer
    msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__resize_function__SimPID_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(msgs_control__srv__SimPID_Event, response),  // bytes offset in struct
    NULL,  // default value
    msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__size_function__SimPID_Event__response,  // size() function pointer
    msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__get_const_function__SimPID_Event__response,  // get_const(index) function pointer
    msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__get_function__SimPID_Event__response,  // get(index) function pointer
    msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__fetch_function__SimPID_Event__response,  // fetch(index, &value) function pointer
    msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__assign_function__SimPID_Event__response,  // assign(index, value) function pointer
    msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__resize_function__SimPID_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__SimPID_Event_message_members = {
  "msgs_control__srv",  // message namespace
  "SimPID_Event",  // message name
  3,  // number of fields
  sizeof(msgs_control__srv__SimPID_Event),
  false,  // has_any_key_member_
  msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__SimPID_Event_message_member_array,  // message members
  msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__SimPID_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__SimPID_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__SimPID_Event_message_type_support_handle = {
  0,
  &msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__SimPID_Event_message_members,
  get_message_typesupport_handle_function,
  &msgs_control__srv__SimPID_Event__get_type_hash,
  &msgs_control__srv__SimPID_Event__get_type_description,
  &msgs_control__srv__SimPID_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msgs_control
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_control, srv, SimPID_Event)() {
  msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__SimPID_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__SimPID_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_control, srv, SimPID_Request)();
  msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__SimPID_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_control, srv, SimPID_Response)();
  if (!msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__SimPID_Event_message_type_support_handle.typesupport_identifier) {
    msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__SimPID_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__SimPID_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "msgs_control/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "msgs_control/srv/detail/sim_pid__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers msgs_control__srv__detail__sim_pid__rosidl_typesupport_introspection_c__SimPID_service_members = {
  "msgs_control__srv",  // service namespace
  "SimPID",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // msgs_control__srv__detail__sim_pid__rosidl_typesupport_introspection_c__SimPID_Request_message_type_support_handle,
  NULL,  // response message
  // msgs_control__srv__detail__sim_pid__rosidl_typesupport_introspection_c__SimPID_Response_message_type_support_handle
  NULL  // event_message
  // msgs_control__srv__detail__sim_pid__rosidl_typesupport_introspection_c__SimPID_Response_message_type_support_handle
};


static rosidl_service_type_support_t msgs_control__srv__detail__sim_pid__rosidl_typesupport_introspection_c__SimPID_service_type_support_handle = {
  0,
  &msgs_control__srv__detail__sim_pid__rosidl_typesupport_introspection_c__SimPID_service_members,
  get_service_typesupport_handle_function,
  &msgs_control__srv__SimPID_Request__rosidl_typesupport_introspection_c__SimPID_Request_message_type_support_handle,
  &msgs_control__srv__SimPID_Response__rosidl_typesupport_introspection_c__SimPID_Response_message_type_support_handle,
  &msgs_control__srv__SimPID_Event__rosidl_typesupport_introspection_c__SimPID_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    msgs_control,
    srv,
    SimPID
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    msgs_control,
    srv,
    SimPID
  ),
  &msgs_control__srv__SimPID__get_type_hash,
  &msgs_control__srv__SimPID__get_type_description,
  &msgs_control__srv__SimPID__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_control, srv, SimPID_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_control, srv, SimPID_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_control, srv, SimPID_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msgs_control
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_control, srv, SimPID)(void) {
  if (!msgs_control__srv__detail__sim_pid__rosidl_typesupport_introspection_c__SimPID_service_type_support_handle.typesupport_identifier) {
    msgs_control__srv__detail__sim_pid__rosidl_typesupport_introspection_c__SimPID_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)msgs_control__srv__detail__sim_pid__rosidl_typesupport_introspection_c__SimPID_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_control, srv, SimPID_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_control, srv, SimPID_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_control, srv, SimPID_Event)()->data;
  }

  return &msgs_control__srv__detail__sim_pid__rosidl_typesupport_introspection_c__SimPID_service_type_support_handle;
}
