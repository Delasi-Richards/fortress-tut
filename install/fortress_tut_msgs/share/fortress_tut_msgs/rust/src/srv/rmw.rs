#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "fortress_tut_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fortress_tut_msgs__srv__MoveTurtlebot_Request() -> *const std::ffi::c_void;
}

#[link(name = "fortress_tut_msgs__rosidl_generator_c")]
extern "C" {
    fn fortress_tut_msgs__srv__MoveTurtlebot_Request__init(msg: *mut MoveTurtlebot_Request) -> bool;
    fn fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveTurtlebot_Request>, size: usize) -> bool;
    fn fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveTurtlebot_Request>);
    fn fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveTurtlebot_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveTurtlebot_Request>) -> bool;
}

// Corresponds to fortress_tut_msgs__srv__MoveTurtlebot_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveTurtlebot_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw: f64,

}



impl Default for MoveTurtlebot_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fortress_tut_msgs__srv__MoveTurtlebot_Request__init(&mut msg as *mut _) {
        panic!("Call to fortress_tut_msgs__srv__MoveTurtlebot_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveTurtlebot_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fortress_tut_msgs__srv__MoveTurtlebot_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveTurtlebot_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveTurtlebot_Request where Self: Sized {
  const TYPE_NAME: &'static str = "fortress_tut_msgs/srv/MoveTurtlebot_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fortress_tut_msgs__srv__MoveTurtlebot_Request() }
  }
}


#[link(name = "fortress_tut_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fortress_tut_msgs__srv__MoveTurtlebot_Response() -> *const std::ffi::c_void;
}

#[link(name = "fortress_tut_msgs__rosidl_generator_c")]
extern "C" {
    fn fortress_tut_msgs__srv__MoveTurtlebot_Response__init(msg: *mut MoveTurtlebot_Response) -> bool;
    fn fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveTurtlebot_Response>, size: usize) -> bool;
    fn fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveTurtlebot_Response>);
    fn fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveTurtlebot_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveTurtlebot_Response>) -> bool;
}

// Corresponds to fortress_tut_msgs__srv__MoveTurtlebot_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveTurtlebot_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw: f64,

}



impl Default for MoveTurtlebot_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fortress_tut_msgs__srv__MoveTurtlebot_Response__init(&mut msg as *mut _) {
        panic!("Call to fortress_tut_msgs__srv__MoveTurtlebot_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveTurtlebot_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fortress_tut_msgs__srv__MoveTurtlebot_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveTurtlebot_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveTurtlebot_Response where Self: Sized {
  const TYPE_NAME: &'static str = "fortress_tut_msgs/srv/MoveTurtlebot_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fortress_tut_msgs__srv__MoveTurtlebot_Response() }
  }
}






#[link(name = "fortress_tut_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__fortress_tut_msgs__srv__MoveTurtlebot() -> *const std::ffi::c_void;
}

// Corresponds to fortress_tut_msgs__srv__MoveTurtlebot
#[allow(missing_docs, non_camel_case_types)]
pub struct MoveTurtlebot;

impl rosidl_runtime_rs::Service for MoveTurtlebot {
    type Request = MoveTurtlebot_Request;
    type Response = MoveTurtlebot_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__fortress_tut_msgs__srv__MoveTurtlebot() }
    }
}


