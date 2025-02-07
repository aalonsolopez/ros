// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from msgs_control:srv/SimPID.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "msgs_control/srv/detail/sim_pid__functions.h"
#include "msgs_control/srv/detail/sim_pid__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace msgs_control
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SimPID_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) msgs_control::srv::SimPID_Request(_init);
}

void SimPID_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<msgs_control::srv::SimPID_Request *>(message_memory);
  typed_message->~SimPID_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SimPID_Request_message_member_array[3] = {
  {
    "kp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_control::srv::SimPID_Request, kp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ki",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_control::srv::SimPID_Request, ki),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "kd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_control::srv::SimPID_Request, kd),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SimPID_Request_message_members = {
  "msgs_control::srv",  // message namespace
  "SimPID_Request",  // message name
  3,  // number of fields
  sizeof(msgs_control::srv::SimPID_Request),
  false,  // has_any_key_member_
  SimPID_Request_message_member_array,  // message members
  SimPID_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SimPID_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SimPID_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SimPID_Request_message_members,
  get_message_typesupport_handle_function,
  &msgs_control__srv__SimPID_Request__get_type_hash,
  &msgs_control__srv__SimPID_Request__get_type_description,
  &msgs_control__srv__SimPID_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace msgs_control


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<msgs_control::srv::SimPID_Request>()
{
  return &::msgs_control::srv::rosidl_typesupport_introspection_cpp::SimPID_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msgs_control, srv, SimPID_Request)() {
  return &::msgs_control::srv::rosidl_typesupport_introspection_cpp::SimPID_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "msgs_control/srv/detail/sim_pid__functions.h"
// already included above
// #include "msgs_control/srv/detail/sim_pid__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace msgs_control
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SimPID_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) msgs_control::srv::SimPID_Response(_init);
}

void SimPID_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<msgs_control::srv::SimPID_Response *>(message_memory);
  typed_message->~SimPID_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SimPID_Response_message_member_array[4] = {
  {
    "overshoot",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_control::srv::SimPID_Response, overshoot),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_control::srv::SimPID_Response, d),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ess",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_control::srv::SimPID_Response, ess),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ts",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_control::srv::SimPID_Response, ts),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SimPID_Response_message_members = {
  "msgs_control::srv",  // message namespace
  "SimPID_Response",  // message name
  4,  // number of fields
  sizeof(msgs_control::srv::SimPID_Response),
  false,  // has_any_key_member_
  SimPID_Response_message_member_array,  // message members
  SimPID_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SimPID_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SimPID_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SimPID_Response_message_members,
  get_message_typesupport_handle_function,
  &msgs_control__srv__SimPID_Response__get_type_hash,
  &msgs_control__srv__SimPID_Response__get_type_description,
  &msgs_control__srv__SimPID_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace msgs_control


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<msgs_control::srv::SimPID_Response>()
{
  return &::msgs_control::srv::rosidl_typesupport_introspection_cpp::SimPID_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msgs_control, srv, SimPID_Response)() {
  return &::msgs_control::srv::rosidl_typesupport_introspection_cpp::SimPID_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "msgs_control/srv/detail/sim_pid__functions.h"
// already included above
// #include "msgs_control/srv/detail/sim_pid__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace msgs_control
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SimPID_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) msgs_control::srv::SimPID_Event(_init);
}

void SimPID_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<msgs_control::srv::SimPID_Event *>(message_memory);
  typed_message->~SimPID_Event();
}

size_t size_function__SimPID_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<msgs_control::srv::SimPID_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SimPID_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<msgs_control::srv::SimPID_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__SimPID_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<msgs_control::srv::SimPID_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__SimPID_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const msgs_control::srv::SimPID_Request *>(
    get_const_function__SimPID_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<msgs_control::srv::SimPID_Request *>(untyped_value);
  value = item;
}

void assign_function__SimPID_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<msgs_control::srv::SimPID_Request *>(
    get_function__SimPID_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const msgs_control::srv::SimPID_Request *>(untyped_value);
  item = value;
}

void resize_function__SimPID_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<msgs_control::srv::SimPID_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SimPID_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<msgs_control::srv::SimPID_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SimPID_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<msgs_control::srv::SimPID_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__SimPID_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<msgs_control::srv::SimPID_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__SimPID_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const msgs_control::srv::SimPID_Response *>(
    get_const_function__SimPID_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<msgs_control::srv::SimPID_Response *>(untyped_value);
  value = item;
}

void assign_function__SimPID_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<msgs_control::srv::SimPID_Response *>(
    get_function__SimPID_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const msgs_control::srv::SimPID_Response *>(untyped_value);
  item = value;
}

void resize_function__SimPID_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<msgs_control::srv::SimPID_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SimPID_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_control::srv::SimPID_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<msgs_control::srv::SimPID_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(msgs_control::srv::SimPID_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__SimPID_Event__request,  // size() function pointer
    get_const_function__SimPID_Event__request,  // get_const(index) function pointer
    get_function__SimPID_Event__request,  // get(index) function pointer
    fetch_function__SimPID_Event__request,  // fetch(index, &value) function pointer
    assign_function__SimPID_Event__request,  // assign(index, value) function pointer
    resize_function__SimPID_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<msgs_control::srv::SimPID_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(msgs_control::srv::SimPID_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__SimPID_Event__response,  // size() function pointer
    get_const_function__SimPID_Event__response,  // get_const(index) function pointer
    get_function__SimPID_Event__response,  // get(index) function pointer
    fetch_function__SimPID_Event__response,  // fetch(index, &value) function pointer
    assign_function__SimPID_Event__response,  // assign(index, value) function pointer
    resize_function__SimPID_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SimPID_Event_message_members = {
  "msgs_control::srv",  // message namespace
  "SimPID_Event",  // message name
  3,  // number of fields
  sizeof(msgs_control::srv::SimPID_Event),
  false,  // has_any_key_member_
  SimPID_Event_message_member_array,  // message members
  SimPID_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  SimPID_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SimPID_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SimPID_Event_message_members,
  get_message_typesupport_handle_function,
  &msgs_control__srv__SimPID_Event__get_type_hash,
  &msgs_control__srv__SimPID_Event__get_type_description,
  &msgs_control__srv__SimPID_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace msgs_control


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<msgs_control::srv::SimPID_Event>()
{
  return &::msgs_control::srv::rosidl_typesupport_introspection_cpp::SimPID_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msgs_control, srv, SimPID_Event)() {
  return &::msgs_control::srv::rosidl_typesupport_introspection_cpp::SimPID_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "msgs_control/srv/detail/sim_pid__functions.h"
// already included above
// #include "msgs_control/srv/detail/sim_pid__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace msgs_control
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers SimPID_service_members = {
  "msgs_control::srv",  // service namespace
  "SimPID",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<msgs_control::srv::SimPID>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t SimPID_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SimPID_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<msgs_control::srv::SimPID_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<msgs_control::srv::SimPID_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<msgs_control::srv::SimPID_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<msgs_control::srv::SimPID>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<msgs_control::srv::SimPID>,
  &msgs_control__srv__SimPID__get_type_hash,
  &msgs_control__srv__SimPID__get_type_description,
  &msgs_control__srv__SimPID__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace msgs_control


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<msgs_control::srv::SimPID>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::msgs_control::srv::rosidl_typesupport_introspection_cpp::SimPID_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::msgs_control::srv::SimPID_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::msgs_control::srv::SimPID_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::msgs_control::srv::SimPID_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msgs_control, srv, SimPID)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<msgs_control::srv::SimPID>();
}

#ifdef __cplusplus
}
#endif
