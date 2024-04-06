/*
 * Copyright (C) 2019 The Turms Project
 * https://github.com/turms-im/turms
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package im.turms.server.common.access.client.dto.request.user.relationship;

/**
 * Protobuf type {@code im.turms.proto.UpdateRelationshipGroupRequest}
 */
public final class UpdateRelationshipGroupRequest extends com.google.protobuf.GeneratedMessage
        implements
        // @@protoc_insertion_point(message_implements:im.turms.proto.UpdateRelationshipGroupRequest)
        UpdateRelationshipGroupRequestOrBuilder {
    private static final long serialVersionUID = 0L;
    static {
        com.google.protobuf.RuntimeVersion.validateProtobufGencodeVersion(
                com.google.protobuf.RuntimeVersion.RuntimeDomain.PUBLIC,
                /* major= */ 4,
                /* minor= */ 26,
                /* patch= */ 1,
                /* suffix= */ "",
                UpdateRelationshipGroupRequest.class.getName());
    }

    // Use UpdateRelationshipGroupRequest.newBuilder() to construct.
    private UpdateRelationshipGroupRequest(
            com.google.protobuf.GeneratedMessage.Builder<?> builder) {
        super(builder);
    }

    private UpdateRelationshipGroupRequest() {
        newName_ = "";
    }

    public static com.google.protobuf.Descriptors.Descriptor getDescriptor() {
        return im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequestOuterClass.internal_static_im_turms_proto_UpdateRelationshipGroupRequest_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessage.FieldAccessorTable internalGetFieldAccessorTable() {
        return im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequestOuterClass.internal_static_im_turms_proto_UpdateRelationshipGroupRequest_fieldAccessorTable
                .ensureFieldAccessorsInitialized(
                        im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest.class,
                        im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest.Builder.class);
    }

    public static final int GROUP_INDEX_FIELD_NUMBER = 1;
    private int groupIndex_ = 0;

    /**
     * <pre>
     * Query filter
     * </pre>
     *
     * <code>int32 group_index = 1;</code>
     *
     * @return The groupIndex.
     */
    @java.lang.Override
    public int getGroupIndex() {
        return groupIndex_;
    }

    public static final int NEW_NAME_FIELD_NUMBER = 2;
    @SuppressWarnings("serial")
    private volatile java.lang.Object newName_ = "";

    /**
     * <pre>
     * Update
     * </pre>
     *
     * <code>string new_name = 2;</code>
     *
     * @return The newName.
     */
    @java.lang.Override
    public java.lang.String getNewName() {
        java.lang.Object ref = newName_;
        if (ref instanceof java.lang.String) {
            return (java.lang.String) ref;
        } else {
            com.google.protobuf.ByteString bs = (com.google.protobuf.ByteString) ref;
            java.lang.String s = bs.toStringUtf8();
            newName_ = s;
            return s;
        }
    }

    /**
     * <pre>
     * Update
     * </pre>
     *
     * <code>string new_name = 2;</code>
     *
     * @return The bytes for newName.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString getNewNameBytes() {
        java.lang.Object ref = newName_;
        if (ref instanceof java.lang.String) {
            com.google.protobuf.ByteString b =
                    com.google.protobuf.ByteString.copyFromUtf8((java.lang.String) ref);
            newName_ = b;
            return b;
        } else {
            return (com.google.protobuf.ByteString) ref;
        }
    }

    private byte memoizedIsInitialized = -1;

    @java.lang.Override
    public boolean isInitialized() {
        byte isInitialized = memoizedIsInitialized;
        if (isInitialized == 1) {
            return true;
        }
        if (isInitialized == 0) {
            return false;
        }

        memoizedIsInitialized = 1;
        return true;
    }

    @java.lang.Override
    public void writeTo(com.google.protobuf.CodedOutputStream output) throws java.io.IOException {
        if (groupIndex_ != 0) {
            output.writeInt32(1, groupIndex_);
        }
        if (!com.google.protobuf.GeneratedMessage.isStringEmpty(newName_)) {
            com.google.protobuf.GeneratedMessage.writeString(output, 2, newName_);
        }
        getUnknownFields().writeTo(output);
    }

    @java.lang.Override
    public int getSerializedSize() {
        int size = memoizedSize;
        if (size != -1) {
            return size;
        }

        size = 0;
        if (groupIndex_ != 0) {
            size += com.google.protobuf.CodedOutputStream.computeInt32Size(1, groupIndex_);
        }
        if (!com.google.protobuf.GeneratedMessage.isStringEmpty(newName_)) {
            size += com.google.protobuf.GeneratedMessage.computeStringSize(2, newName_);
        }
        size += getUnknownFields().getSerializedSize();
        memoizedSize = size;
        return size;
    }

    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof UpdateRelationshipGroupRequest other)) {
            return super.equals(obj);
        }

        if (getGroupIndex() != other.getGroupIndex()) {
            return false;
        }
        return getNewName().equals(other.getNewName())
                && getUnknownFields().equals(other.getUnknownFields());
    }

    @java.lang.Override
    public int hashCode() {
        if (memoizedHashCode != 0) {
            return memoizedHashCode;
        }
        int hash = 41;
        hash = (19 * hash) + getDescriptor().hashCode();
        hash = (37 * hash) + GROUP_INDEX_FIELD_NUMBER;
        hash = (53 * hash) + getGroupIndex();
        hash = (37 * hash) + NEW_NAME_FIELD_NUMBER;
        hash = (53 * hash) + getNewName().hashCode();
        hash = (29 * hash) + getUnknownFields().hashCode();
        memoizedHashCode = hash;
        return hash;
    }

    public static im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest parseFrom(
            java.nio.ByteBuffer data) throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data);
    }

    public static im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest parseFrom(
            java.nio.ByteBuffer data,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data, extensionRegistry);
    }

    public static im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest parseFrom(
            com.google.protobuf.ByteString data)
            throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data);
    }

    public static im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest parseFrom(
            com.google.protobuf.ByteString data,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data, extensionRegistry);
    }

    public static im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest parseFrom(
            byte[] data) throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data);
    }

    public static im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest parseFrom(
            byte[] data,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data, extensionRegistry);
    }

    public static im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest parseFrom(
            java.io.InputStream input) throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage.parseWithIOException(PARSER, input);
    }

    public static im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest parseFrom(
            java.io.InputStream input,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage
                .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public static im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest parseDelimitedFrom(
            java.io.InputStream input) throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage.parseDelimitedWithIOException(PARSER, input);
    }

    public static im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest parseDelimitedFrom(
            java.io.InputStream input,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage
                .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }

    public static im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest parseFrom(
            com.google.protobuf.CodedInputStream input) throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage.parseWithIOException(PARSER, input);
    }

    public static im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest parseFrom(
            com.google.protobuf.CodedInputStream input,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage
                .parseWithIOException(PARSER, input, extensionRegistry);
    }

    @java.lang.Override
    public Builder newBuilderForType() {
        return newBuilder();
    }

    public static Builder newBuilder() {
        return DEFAULT_INSTANCE.toBuilder();
    }

    public static Builder newBuilder(
            im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest prototype) {
        return DEFAULT_INSTANCE.toBuilder()
                .mergeFrom(prototype);
    }

    @java.lang.Override
    public Builder toBuilder() {
        return this == DEFAULT_INSTANCE
                ? new Builder()
                : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(com.google.protobuf.GeneratedMessage.BuilderParent parent) {
        return new Builder(parent);
    }

    /**
     * Protobuf type {@code im.turms.proto.UpdateRelationshipGroupRequest}
     */
    public static final class Builder extends com.google.protobuf.GeneratedMessage.Builder<Builder>
            implements
            // @@protoc_insertion_point(builder_implements:im.turms.proto.UpdateRelationshipGroupRequest)
            im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequestOrBuilder {
        public static com.google.protobuf.Descriptors.Descriptor getDescriptor() {
            return im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequestOuterClass.internal_static_im_turms_proto_UpdateRelationshipGroupRequest_descriptor;
        }

        @java.lang.Override
        protected com.google.protobuf.GeneratedMessage.FieldAccessorTable internalGetFieldAccessorTable() {
            return im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequestOuterClass.internal_static_im_turms_proto_UpdateRelationshipGroupRequest_fieldAccessorTable
                    .ensureFieldAccessorsInitialized(
                            im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest.class,
                            im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest.Builder.class);
        }

        // Construct using
        // im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest.newBuilder()
        private Builder() {

        }

        private Builder(com.google.protobuf.GeneratedMessage.BuilderParent parent) {
            super(parent);

        }

        @java.lang.Override
        public Builder clear() {
            super.clear();
            bitField0_ = 0;
            groupIndex_ = 0;
            newName_ = "";
            return this;
        }

        @java.lang.Override
        public com.google.protobuf.Descriptors.Descriptor getDescriptorForType() {
            return im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequestOuterClass.internal_static_im_turms_proto_UpdateRelationshipGroupRequest_descriptor;
        }

        @java.lang.Override
        public im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest getDefaultInstanceForType() {
            return im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest
                    .getDefaultInstance();
        }

        @java.lang.Override
        public im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest build() {
            im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest result =
                    buildPartial();
            if (!result.isInitialized()) {
                throw newUninitializedMessageException(result);
            }
            return result;
        }

        @java.lang.Override
        public im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest buildPartial() {
            im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest result =
                    new im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest(
                            this);
            if (bitField0_ != 0) {
                buildPartial0(result);
            }
            onBuilt();
            return result;
        }

        private void buildPartial0(
                im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest result) {
            int from_bitField0_ = bitField0_;
            if (((from_bitField0_ & 0x00000001) != 0)) {
                result.groupIndex_ = groupIndex_;
            }
            if (((from_bitField0_ & 0x00000002) != 0)) {
                result.newName_ = newName_;
            }
        }

        @java.lang.Override
        public Builder mergeFrom(com.google.protobuf.Message other) {
            if (other instanceof im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest) {
                return mergeFrom(
                        (im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest) other);
            } else {
                super.mergeFrom(other);
                return this;
            }
        }

        public Builder mergeFrom(
                im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest other) {
            if (other == im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest
                    .getDefaultInstance()) {
                return this;
            }
            if (other.getGroupIndex() != 0) {
                setGroupIndex(other.getGroupIndex());
            }
            if (!other.getNewName()
                    .isEmpty()) {
                newName_ = other.newName_;
                bitField0_ |= 0x00000002;
                onChanged();
            }
            this.mergeUnknownFields(other.getUnknownFields());
            onChanged();
            return this;
        }

        @java.lang.Override
        public boolean isInitialized() {
            return true;
        }

        @java.lang.Override
        public Builder mergeFrom(
                com.google.protobuf.CodedInputStream input,
                com.google.protobuf.ExtensionRegistryLite extensionRegistry)
                throws java.io.IOException {
            if (extensionRegistry == null) {
                throw new java.lang.NullPointerException();
            }
            try {
                boolean done = false;
                while (!done) {
                    int tag = input.readTag();
                    switch (tag) {
                        case 0 -> done = true;
                        case 8 -> {
                            groupIndex_ = input.readInt32();
                            bitField0_ |= 0x00000001;
                        } // case 8
                        case 18 -> {
                            newName_ = input.readStringRequireUtf8();
                            bitField0_ |= 0x00000002;
                        } // case 18
                        default -> {
                            if (!super.parseUnknownField(input, extensionRegistry, tag)) {
                                done = true; // was an endgroup tag
                            }
                        } // default:
                    } // switch (tag)
                } // while (!done)
            } catch (com.google.protobuf.InvalidProtocolBufferException e) {
                throw e.unwrapIOException();
            } finally {
                onChanged();
            } // finally
            return this;
        }

        private int bitField0_;

        private int groupIndex_;

        /**
         * <pre>
         * Query filter
         * </pre>
         *
         * <code>int32 group_index = 1;</code>
         *
         * @return The groupIndex.
         */
        @java.lang.Override
        public int getGroupIndex() {
            return groupIndex_;
        }

        /**
         * <pre>
         * Query filter
         * </pre>
         *
         * <code>int32 group_index = 1;</code>
         *
         * @param value The groupIndex to set.
         * @return This builder for chaining.
         */
        public Builder setGroupIndex(int value) {

            groupIndex_ = value;
            bitField0_ |= 0x00000001;
            onChanged();
            return this;
        }

        /**
         * <pre>
         * Query filter
         * </pre>
         *
         * <code>int32 group_index = 1;</code>
         *
         * @return This builder for chaining.
         */
        public Builder clearGroupIndex() {
            bitField0_ &= ~0x00000001;
            groupIndex_ = 0;
            onChanged();
            return this;
        }

        private java.lang.Object newName_ = "";

        /**
         * <pre>
         * Update
         * </pre>
         *
         * <code>string new_name = 2;</code>
         *
         * @return The newName.
         */
        public java.lang.String getNewName() {
            java.lang.Object ref = newName_;
            if (!(ref instanceof java.lang.String)) {
                com.google.protobuf.ByteString bs = (com.google.protobuf.ByteString) ref;
                java.lang.String s = bs.toStringUtf8();
                newName_ = s;
                return s;
            } else {
                return (java.lang.String) ref;
            }
        }

        /**
         * <pre>
         * Update
         * </pre>
         *
         * <code>string new_name = 2;</code>
         *
         * @return The bytes for newName.
         */
        public com.google.protobuf.ByteString getNewNameBytes() {
            java.lang.Object ref = newName_;
            if (ref instanceof String) {
                com.google.protobuf.ByteString b =
                        com.google.protobuf.ByteString.copyFromUtf8((java.lang.String) ref);
                newName_ = b;
                return b;
            } else {
                return (com.google.protobuf.ByteString) ref;
            }
        }

        /**
         * <pre>
         * Update
         * </pre>
         *
         * <code>string new_name = 2;</code>
         *
         * @param value The newName to set.
         * @return This builder for chaining.
         */
        public Builder setNewName(java.lang.String value) {
            if (value == null) {
                throw new NullPointerException();
            }
            newName_ = value;
            bitField0_ |= 0x00000002;
            onChanged();
            return this;
        }

        /**
         * <pre>
         * Update
         * </pre>
         *
         * <code>string new_name = 2;</code>
         *
         * @return This builder for chaining.
         */
        public Builder clearNewName() {
            newName_ = getDefaultInstance().getNewName();
            bitField0_ &= ~0x00000002;
            onChanged();
            return this;
        }

        /**
         * <pre>
         * Update
         * </pre>
         *
         * <code>string new_name = 2;</code>
         *
         * @param value The bytes for newName to set.
         * @return This builder for chaining.
         */
        public Builder setNewNameBytes(com.google.protobuf.ByteString value) {
            if (value == null) {
                throw new NullPointerException();
            }
            checkByteStringIsUtf8(value);
            newName_ = value;
            bitField0_ |= 0x00000002;
            onChanged();
            return this;
        }

        // @@protoc_insertion_point(builder_scope:im.turms.proto.UpdateRelationshipGroupRequest)
    }

    // @@protoc_insertion_point(class_scope:im.turms.proto.UpdateRelationshipGroupRequest)
    private static final im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest DEFAULT_INSTANCE;
    static {
        DEFAULT_INSTANCE =
                new im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest();
    }

    public static im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest getDefaultInstance() {
        return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<UpdateRelationshipGroupRequest> PARSER =
            new com.google.protobuf.AbstractParser<>() {
                @java.lang.Override
                public UpdateRelationshipGroupRequest parsePartialFrom(
                        com.google.protobuf.CodedInputStream input,
                        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
                        throws com.google.protobuf.InvalidProtocolBufferException {
                    Builder builder = newBuilder();
                    try {
                        builder.mergeFrom(input, extensionRegistry);
                    } catch (com.google.protobuf.InvalidProtocolBufferException e) {
                        throw e.setUnfinishedMessage(builder.buildPartial());
                    } catch (com.google.protobuf.UninitializedMessageException e) {
                        throw e.asInvalidProtocolBufferException()
                                .setUnfinishedMessage(builder.buildPartial());
                    } catch (java.io.IOException e) {
                        throw new com.google.protobuf.InvalidProtocolBufferException(e)
                                .setUnfinishedMessage(builder.buildPartial());
                    }
                    return builder.buildPartial();
                }
            };

    public static com.google.protobuf.Parser<UpdateRelationshipGroupRequest> parser() {
        return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<UpdateRelationshipGroupRequest> getParserForType() {
        return PARSER;
    }

    @java.lang.Override
    public im.turms.server.common.access.client.dto.request.user.relationship.UpdateRelationshipGroupRequest getDefaultInstanceForType() {
        return DEFAULT_INSTANCE;
    }

}