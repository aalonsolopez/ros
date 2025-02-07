// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msgs_control:srv/SimPID.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "msgs_control/srv/sim_pid.h"


#ifndef MSGS_CONTROL__SRV__DETAIL__SIM_PID__STRUCT_H_
#define MSGS_CONTROL__SRV__DETAIL__SIM_PID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SimPID in the package msgs_control.
typedef struct msgs_control__srv__SimPID_Request
{
  float kp;
  float ki;
  float kd;
} msgs_control__srv__SimPID_Request;

// Struct for a sequence of msgs_control__srv__SimPID_Request.
typedef struct msgs_control__srv__SimPID_Request__Sequence
{
  msgs_control__srv__SimPID_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msgs_control__srv__SimPID_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SimPID in the package msgs_control.
typedef struct msgs_control__srv__SimPID_Response
{
  float overshoot;
  float d;
  float ess;
  float ts;
} msgs_control__srv__SimPID_Response;

// Struct for a sequence of msgs_control__srv__SimPID_Response.
typedef struct msgs_control__srv__SimPID_Response__Sequence
{
  msgs_control__srv__SimPID_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msgs_control__srv__SimPID_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  msgs_control__srv__SimPID_Event__request__MAX_SIZE = 1
};
// response
enum
{
  msgs_control__srv__SimPID_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SimPID in the package msgs_control.
typedef struct msgs_control__srv__SimPID_Event
{
  service_msgs__msg__ServiceEventInfo info;
  msgs_control__srv__SimPID_Request__Sequence request;
  msgs_control__srv__SimPID_Response__Sequence response;
} msgs_control__srv__SimPID_Event;

// Struct for a sequence of msgs_control__srv__SimPID_Event.
typedef struct msgs_control__srv__SimPID_Event__Sequence
{
  msgs_control__srv__SimPID_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msgs_control__srv__SimPID_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSGS_CONTROL__SRV__DETAIL__SIM_PID__STRUCT_H_
