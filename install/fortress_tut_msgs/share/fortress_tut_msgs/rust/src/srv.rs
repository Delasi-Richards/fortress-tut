#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to fortress_tut_msgs__srv__MoveTurtlebot_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::MoveTurtlebot_Request::default())
  }
}

impl rosidl_runtime_rs::Message for MoveTurtlebot_Request {
  type RmwMsg = super::srv::rmw::MoveTurtlebot_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
        yaw: msg.yaw,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
      yaw: msg.yaw,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
      yaw: msg.yaw,
    }
  }
}


// Corresponds to fortress_tut_msgs__srv__MoveTurtlebot_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::MoveTurtlebot_Response::default())
  }
}

impl rosidl_runtime_rs::Message for MoveTurtlebot_Response {
  type RmwMsg = super::srv::rmw::MoveTurtlebot_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        x: msg.x,
        y: msg.y,
        yaw: msg.yaw,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      x: msg.x,
      y: msg.y,
      yaw: msg.yaw,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      x: msg.x,
      y: msg.y,
      yaw: msg.yaw,
    }
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


