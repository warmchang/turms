// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model/user/user_session_id.proto

package im.turms.common.model.bo.user;

public interface UserSessionIdOrBuilder extends
    // @@protoc_insertion_point(interface_extends:im.turms.proto.UserSessionId)
    com.google.protobuf.MessageOrBuilder {

  /**
   * <code>int64 user_id = 1;</code>
   * @return The userId.
   */
  long getUserId();

  /**
   * <code>.im.turms.proto.DeviceType device_type = 2;</code>
   * @return The enum numeric value on the wire for deviceType.
   */
  int getDeviceTypeValue();
  /**
   * <code>.im.turms.proto.DeviceType device_type = 2;</code>
   * @return The deviceType.
   */
  im.turms.common.constant.DeviceType getDeviceType();
}