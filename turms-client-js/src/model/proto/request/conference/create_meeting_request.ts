// Code generated by protoc-gen-ts_proto. DO NOT EDIT.
// versions:
//   protoc-gen-ts_proto  v2.6.1
//   protoc               v5.29.1
// source: request/conference/create_meeting_request.proto

/* eslint-disable */
import { BinaryReader, BinaryWriter } from "@bufbuild/protobuf/wire";
import { Value } from "../../model/common/value";

export const protobufPackage = "im.turms.proto";

export interface CreateMeetingRequest {
  userId?: string | undefined;
  groupId?: string | undefined;
  name?: string | undefined;
  intro?: string | undefined;
  password?: string | undefined;
  startDate?: string | undefined;
  customAttributes: Value[];
}

function createBaseCreateMeetingRequest(): CreateMeetingRequest {
  return {
    userId: undefined,
    groupId: undefined,
    name: undefined,
    intro: undefined,
    password: undefined,
    startDate: undefined,
    customAttributes: [],
  };
}

export const CreateMeetingRequest: MessageFns<CreateMeetingRequest> = {
  encode(message: CreateMeetingRequest, writer: BinaryWriter = new BinaryWriter()): BinaryWriter {
    if (message.userId !== undefined) {
      writer.uint32(8).int64(message.userId);
    }
    if (message.groupId !== undefined) {
      writer.uint32(16).int64(message.groupId);
    }
    if (message.name !== undefined) {
      writer.uint32(26).string(message.name);
    }
    if (message.intro !== undefined) {
      writer.uint32(34).string(message.intro);
    }
    if (message.password !== undefined) {
      writer.uint32(42).string(message.password);
    }
    if (message.startDate !== undefined) {
      writer.uint32(48).int64(message.startDate);
    }
    for (const v of message.customAttributes) {
      Value.encode(v!, writer.uint32(122).fork()).join();
    }
    return writer;
  },

  decode(input: BinaryReader | Uint8Array, length?: number): CreateMeetingRequest {
    const reader = input instanceof BinaryReader ? input : new BinaryReader(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseCreateMeetingRequest();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1: {
          if (tag !== 8) {
            break;
          }

          message.userId = reader.int64().toString();
          continue;
        }
        case 2: {
          if (tag !== 16) {
            break;
          }

          message.groupId = reader.int64().toString();
          continue;
        }
        case 3: {
          if (tag !== 26) {
            break;
          }

          message.name = reader.string();
          continue;
        }
        case 4: {
          if (tag !== 34) {
            break;
          }

          message.intro = reader.string();
          continue;
        }
        case 5: {
          if (tag !== 42) {
            break;
          }

          message.password = reader.string();
          continue;
        }
        case 6: {
          if (tag !== 48) {
            break;
          }

          message.startDate = reader.int64().toString();
          continue;
        }
        case 15: {
          if (tag !== 122) {
            break;
          }

          message.customAttributes.push(Value.decode(reader, reader.uint32()));
          continue;
        }
      }
      if ((tag & 7) === 4 || tag === 0) {
        break;
      }
      reader.skip(tag & 7);
    }
    return message;
  },
};

export interface MessageFns<T> {
  encode(message: T, writer?: BinaryWriter): BinaryWriter;
  decode(input: BinaryReader | Uint8Array, length?: number): T;
}