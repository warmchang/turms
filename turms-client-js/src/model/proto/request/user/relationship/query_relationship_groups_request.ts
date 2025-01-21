// Code generated by protoc-gen-ts_proto. DO NOT EDIT.
// versions:
//   protoc-gen-ts_proto  v2.6.1
//   protoc               v5.29.1
// source: request/user/relationship/query_relationship_groups_request.proto

/* eslint-disable */
import { BinaryReader, BinaryWriter } from "@bufbuild/protobuf/wire";
import { Value } from "../../../model/common/value";

export const protobufPackage = "im.turms.proto";

export interface QueryRelationshipGroupsRequest {
  lastUpdatedDate?: string | undefined;
  customAttributes: Value[];
}

function createBaseQueryRelationshipGroupsRequest(): QueryRelationshipGroupsRequest {
  return { lastUpdatedDate: undefined, customAttributes: [] };
}

export const QueryRelationshipGroupsRequest: MessageFns<QueryRelationshipGroupsRequest> = {
  encode(message: QueryRelationshipGroupsRequest, writer: BinaryWriter = new BinaryWriter()): BinaryWriter {
    if (message.lastUpdatedDate !== undefined) {
      writer.uint32(8).int64(message.lastUpdatedDate);
    }
    for (const v of message.customAttributes) {
      Value.encode(v!, writer.uint32(122).fork()).join();
    }
    return writer;
  },

  decode(input: BinaryReader | Uint8Array, length?: number): QueryRelationshipGroupsRequest {
    const reader = input instanceof BinaryReader ? input : new BinaryReader(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseQueryRelationshipGroupsRequest();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1: {
          if (tag !== 8) {
            break;
          }

          message.lastUpdatedDate = reader.int64().toString();
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