// Code generated by protoc-gen-ts_proto. DO NOT EDIT.
// versions:
//   protoc-gen-ts_proto  v2.6.1
//   protoc               v5.29.1
// source: request/message/query_messages_request.proto

/* eslint-disable */
import { BinaryReader, BinaryWriter } from "@bufbuild/protobuf/wire";
import { Value } from "../../model/common/value";

export const protobufPackage = "im.turms.proto";

export interface QueryMessagesRequest {
  /** Filter */
  ids: string[];
  areGroupMessages?: boolean | undefined;
  areSystemMessages?: boolean | undefined;
  fromIds: string[];
  deliveryDateStart?: string | undefined;
  deliveryDateEnd?:
    | string
    | undefined;
  /** Option */
  maxCount?:
    | number
    | undefined;
  /** Command */
  withTotal: boolean;
  /**
   * Option
   * TODO: reorder
   */
  descending?: boolean | undefined;
  customAttributes: Value[];
}

function createBaseQueryMessagesRequest(): QueryMessagesRequest {
  return {
    ids: [],
    areGroupMessages: undefined,
    areSystemMessages: undefined,
    fromIds: [],
    deliveryDateStart: undefined,
    deliveryDateEnd: undefined,
    maxCount: undefined,
    withTotal: false,
    descending: undefined,
    customAttributes: [],
  };
}

export const QueryMessagesRequest: MessageFns<QueryMessagesRequest> = {
  encode(message: QueryMessagesRequest, writer: BinaryWriter = new BinaryWriter()): BinaryWriter {
    writer.uint32(10).fork();
    for (const v of message.ids) {
      writer.int64(v);
    }
    writer.join();
    if (message.areGroupMessages !== undefined) {
      writer.uint32(16).bool(message.areGroupMessages);
    }
    if (message.areSystemMessages !== undefined) {
      writer.uint32(24).bool(message.areSystemMessages);
    }
    writer.uint32(34).fork();
    for (const v of message.fromIds) {
      writer.int64(v);
    }
    writer.join();
    if (message.deliveryDateStart !== undefined) {
      writer.uint32(40).int64(message.deliveryDateStart);
    }
    if (message.deliveryDateEnd !== undefined) {
      writer.uint32(48).int64(message.deliveryDateEnd);
    }
    if (message.maxCount !== undefined) {
      writer.uint32(56).int32(message.maxCount);
    }
    if (message.withTotal !== false) {
      writer.uint32(64).bool(message.withTotal);
    }
    if (message.descending !== undefined) {
      writer.uint32(72).bool(message.descending);
    }
    for (const v of message.customAttributes) {
      Value.encode(v!, writer.uint32(122).fork()).join();
    }
    return writer;
  },

  decode(input: BinaryReader | Uint8Array, length?: number): QueryMessagesRequest {
    const reader = input instanceof BinaryReader ? input : new BinaryReader(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseQueryMessagesRequest();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1: {
          if (tag === 8) {
            message.ids.push(reader.int64().toString());

            continue;
          }

          if (tag === 10) {
            const end2 = reader.uint32() + reader.pos;
            while (reader.pos < end2) {
              message.ids.push(reader.int64().toString());
            }

            continue;
          }

          break;
        }
        case 2: {
          if (tag !== 16) {
            break;
          }

          message.areGroupMessages = reader.bool();
          continue;
        }
        case 3: {
          if (tag !== 24) {
            break;
          }

          message.areSystemMessages = reader.bool();
          continue;
        }
        case 4: {
          if (tag === 32) {
            message.fromIds.push(reader.int64().toString());

            continue;
          }

          if (tag === 34) {
            const end2 = reader.uint32() + reader.pos;
            while (reader.pos < end2) {
              message.fromIds.push(reader.int64().toString());
            }

            continue;
          }

          break;
        }
        case 5: {
          if (tag !== 40) {
            break;
          }

          message.deliveryDateStart = reader.int64().toString();
          continue;
        }
        case 6: {
          if (tag !== 48) {
            break;
          }

          message.deliveryDateEnd = reader.int64().toString();
          continue;
        }
        case 7: {
          if (tag !== 56) {
            break;
          }

          message.maxCount = reader.int32();
          continue;
        }
        case 8: {
          if (tag !== 64) {
            break;
          }

          message.withTotal = reader.bool();
          continue;
        }
        case 9: {
          if (tag !== 72) {
            break;
          }

          message.descending = reader.bool();
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