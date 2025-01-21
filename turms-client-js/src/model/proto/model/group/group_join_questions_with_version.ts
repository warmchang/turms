// Code generated by protoc-gen-ts_proto. DO NOT EDIT.
// versions:
//   protoc-gen-ts_proto  v2.6.1
//   protoc               v5.29.1
// source: model/group/group_join_questions_with_version.proto

/* eslint-disable */
import { BinaryReader, BinaryWriter } from "@bufbuild/protobuf/wire";
import { GroupJoinQuestion } from "./group_join_question";

export const protobufPackage = "im.turms.proto";

export interface GroupJoinQuestionsWithVersion {
  groupJoinQuestions: GroupJoinQuestion[];
  lastUpdatedDate?: string | undefined;
}

function createBaseGroupJoinQuestionsWithVersion(): GroupJoinQuestionsWithVersion {
  return { groupJoinQuestions: [], lastUpdatedDate: undefined };
}

export const GroupJoinQuestionsWithVersion: MessageFns<GroupJoinQuestionsWithVersion> = {
  encode(message: GroupJoinQuestionsWithVersion, writer: BinaryWriter = new BinaryWriter()): BinaryWriter {
    for (const v of message.groupJoinQuestions) {
      GroupJoinQuestion.encode(v!, writer.uint32(10).fork()).join();
    }
    if (message.lastUpdatedDate !== undefined) {
      writer.uint32(16).int64(message.lastUpdatedDate);
    }
    return writer;
  },

  decode(input: BinaryReader | Uint8Array, length?: number): GroupJoinQuestionsWithVersion {
    const reader = input instanceof BinaryReader ? input : new BinaryReader(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseGroupJoinQuestionsWithVersion();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1: {
          if (tag !== 10) {
            break;
          }

          message.groupJoinQuestions.push(GroupJoinQuestion.decode(reader, reader.uint32()));
          continue;
        }
        case 2: {
          if (tag !== 16) {
            break;
          }

          message.lastUpdatedDate = reader.int64().toString();
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
