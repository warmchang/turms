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

package im.turms.server.common.access.client.dto.request.group;

/**
 * Protobuf type {@code im.turms.proto.QueryGroupsRequest}
 */
public final class QueryGroupsRequest extends com.google.protobuf.GeneratedMessage implements
        // @@protoc_insertion_point(message_implements:im.turms.proto.QueryGroupsRequest)
        QueryGroupsRequestOrBuilder {
    private static final long serialVersionUID = 0L;
    static {
        com.google.protobuf.RuntimeVersion.validateProtobufGencodeVersion(
                com.google.protobuf.RuntimeVersion.RuntimeDomain.PUBLIC,
                /* major= */ 4,
                /* minor= */ 26,
                /* patch= */ 1,
                /* suffix= */ "",
                QueryGroupsRequest.class.getName());
    }

    // Use QueryGroupsRequest.newBuilder() to construct.
    private QueryGroupsRequest(com.google.protobuf.GeneratedMessage.Builder<?> builder) {
        super(builder);
    }

    private QueryGroupsRequest() {
        groupIds_ = emptyLongList();
        name_ = "";
        fieldsToHighlight_ = emptyIntList();
    }

    public static final com.google.protobuf.Descriptors.Descriptor getDescriptor() {
        return im.turms.server.common.access.client.dto.request.group.QueryGroupsRequestOuterClass.internal_static_im_turms_proto_QueryGroupsRequest_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessage.FieldAccessorTable internalGetFieldAccessorTable() {
        return im.turms.server.common.access.client.dto.request.group.QueryGroupsRequestOuterClass.internal_static_im_turms_proto_QueryGroupsRequest_fieldAccessorTable
                .ensureFieldAccessorsInitialized(
                        im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest.class,
                        im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest.Builder.class);
    }

    private int bitField0_;
    public static final int GROUP_IDS_FIELD_NUMBER = 1;
    @SuppressWarnings("serial")
    private com.google.protobuf.Internal.LongList groupIds_ = emptyLongList();

    /**
     * <code>repeated int64 group_ids = 1;</code>
     *
     * @return A list containing the groupIds.
     */
    @java.lang.Override
    public java.util.List<java.lang.Long> getGroupIdsList() {
        return groupIds_;
    }

    /**
     * <code>repeated int64 group_ids = 1;</code>
     *
     * @return The count of groupIds.
     */
    public int getGroupIdsCount() {
        return groupIds_.size();
    }

    /**
     * <code>repeated int64 group_ids = 1;</code>
     *
     * @param index The index of the element to return.
     * @return The groupIds at the given index.
     */
    public long getGroupIds(int index) {
        return groupIds_.getLong(index);
    }

    private int groupIdsMemoizedSerializedSize = -1;

    public static final int LAST_UPDATED_DATE_FIELD_NUMBER = 2;
    private long lastUpdatedDate_ = 0L;

    /**
     * <code>optional int64 last_updated_date = 2;</code>
     *
     * @return Whether the lastUpdatedDate field is set.
     */
    @java.lang.Override
    public boolean hasLastUpdatedDate() {
        return ((bitField0_ & 0x00000001) != 0);
    }

    /**
     * <code>optional int64 last_updated_date = 2;</code>
     *
     * @return The lastUpdatedDate.
     */
    @java.lang.Override
    public long getLastUpdatedDate() {
        return lastUpdatedDate_;
    }

    public static final int NAME_FIELD_NUMBER = 3;
    @SuppressWarnings("serial")
    private volatile java.lang.Object name_ = "";

    /**
     * <code>optional string name = 3;</code>
     *
     * @return Whether the name field is set.
     */
    @java.lang.Override
    public boolean hasName() {
        return ((bitField0_ & 0x00000002) != 0);
    }

    /**
     * <code>optional string name = 3;</code>
     *
     * @return The name.
     */
    @java.lang.Override
    public java.lang.String getName() {
        java.lang.Object ref = name_;
        if (ref instanceof java.lang.String) {
            return (java.lang.String) ref;
        } else {
            com.google.protobuf.ByteString bs = (com.google.protobuf.ByteString) ref;
            java.lang.String s = bs.toStringUtf8();
            name_ = s;
            return s;
        }
    }

    /**
     * <code>optional string name = 3;</code>
     *
     * @return The bytes for name.
     */
    @java.lang.Override
    public com.google.protobuf.ByteString getNameBytes() {
        java.lang.Object ref = name_;
        if (ref instanceof java.lang.String) {
            com.google.protobuf.ByteString b =
                    com.google.protobuf.ByteString.copyFromUtf8((java.lang.String) ref);
            name_ = b;
            return b;
        } else {
            return (com.google.protobuf.ByteString) ref;
        }
    }

    public static final int SKIP_FIELD_NUMBER = 10;
    private int skip_ = 0;

    /**
     * <code>optional int32 skip = 10;</code>
     *
     * @return Whether the skip field is set.
     */
    @java.lang.Override
    public boolean hasSkip() {
        return ((bitField0_ & 0x00000004) != 0);
    }

    /**
     * <code>optional int32 skip = 10;</code>
     *
     * @return The skip.
     */
    @java.lang.Override
    public int getSkip() {
        return skip_;
    }

    public static final int LIMIT_FIELD_NUMBER = 11;
    private int limit_ = 0;

    /**
     * <code>optional int32 limit = 11;</code>
     *
     * @return Whether the limit field is set.
     */
    @java.lang.Override
    public boolean hasLimit() {
        return ((bitField0_ & 0x00000008) != 0);
    }

    /**
     * <code>optional int32 limit = 11;</code>
     *
     * @return The limit.
     */
    @java.lang.Override
    public int getLimit() {
        return limit_;
    }

    public static final int FIELDS_TO_HIGHLIGHT_FIELD_NUMBER = 12;
    @SuppressWarnings("serial")
    private com.google.protobuf.Internal.IntList fieldsToHighlight_ = emptyIntList();

    /**
     * <code>repeated int32 fields_to_highlight = 12;</code>
     *
     * @return A list containing the fieldsToHighlight.
     */
    @java.lang.Override
    public java.util.List<java.lang.Integer> getFieldsToHighlightList() {
        return fieldsToHighlight_;
    }

    /**
     * <code>repeated int32 fields_to_highlight = 12;</code>
     *
     * @return The count of fieldsToHighlight.
     */
    public int getFieldsToHighlightCount() {
        return fieldsToHighlight_.size();
    }

    /**
     * <code>repeated int32 fields_to_highlight = 12;</code>
     *
     * @param index The index of the element to return.
     * @return The fieldsToHighlight at the given index.
     */
    public int getFieldsToHighlight(int index) {
        return fieldsToHighlight_.getInt(index);
    }

    private int fieldsToHighlightMemoizedSerializedSize = -1;

    private byte memoizedIsInitialized = -1;

    @java.lang.Override
    public final boolean isInitialized() {
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
        getSerializedSize();
        if (getGroupIdsList().size() > 0) {
            output.writeUInt32NoTag(10);
            output.writeUInt32NoTag(groupIdsMemoizedSerializedSize);
        }
        for (int i = 0; i < groupIds_.size(); i++) {
            output.writeInt64NoTag(groupIds_.getLong(i));
        }
        if (((bitField0_ & 0x00000001) != 0)) {
            output.writeInt64(2, lastUpdatedDate_);
        }
        if (((bitField0_ & 0x00000002) != 0)) {
            com.google.protobuf.GeneratedMessage.writeString(output, 3, name_);
        }
        if (((bitField0_ & 0x00000004) != 0)) {
            output.writeInt32(10, skip_);
        }
        if (((bitField0_ & 0x00000008) != 0)) {
            output.writeInt32(11, limit_);
        }
        if (getFieldsToHighlightList().size() > 0) {
            output.writeUInt32NoTag(98);
            output.writeUInt32NoTag(fieldsToHighlightMemoizedSerializedSize);
        }
        for (int i = 0; i < fieldsToHighlight_.size(); i++) {
            output.writeInt32NoTag(fieldsToHighlight_.getInt(i));
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
        {
            int dataSize = 0;
            for (int i = 0; i < groupIds_.size(); i++) {
                dataSize += com.google.protobuf.CodedOutputStream
                        .computeInt64SizeNoTag(groupIds_.getLong(i));
            }
            size += dataSize;
            if (!getGroupIdsList().isEmpty()) {
                size += 1;
                size += com.google.protobuf.CodedOutputStream.computeInt32SizeNoTag(dataSize);
            }
            groupIdsMemoizedSerializedSize = dataSize;
        }
        if (((bitField0_ & 0x00000001) != 0)) {
            size += com.google.protobuf.CodedOutputStream.computeInt64Size(2, lastUpdatedDate_);
        }
        if (((bitField0_ & 0x00000002) != 0)) {
            size += com.google.protobuf.GeneratedMessage.computeStringSize(3, name_);
        }
        if (((bitField0_ & 0x00000004) != 0)) {
            size += com.google.protobuf.CodedOutputStream.computeInt32Size(10, skip_);
        }
        if (((bitField0_ & 0x00000008) != 0)) {
            size += com.google.protobuf.CodedOutputStream.computeInt32Size(11, limit_);
        }
        {
            int dataSize = 0;
            for (int i = 0; i < fieldsToHighlight_.size(); i++) {
                dataSize += com.google.protobuf.CodedOutputStream
                        .computeInt32SizeNoTag(fieldsToHighlight_.getInt(i));
            }
            size += dataSize;
            if (!getFieldsToHighlightList().isEmpty()) {
                size += 1;
                size += com.google.protobuf.CodedOutputStream.computeInt32SizeNoTag(dataSize);
            }
            fieldsToHighlightMemoizedSerializedSize = dataSize;
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
        if (!(obj instanceof QueryGroupsRequest other)) {
            return super.equals(obj);
        }

        if (!getGroupIdsList().equals(other.getGroupIdsList())) {
            return false;
        }
        if (hasLastUpdatedDate() != other.hasLastUpdatedDate()) {
            return false;
        }
        if (hasLastUpdatedDate()) {
            if (getLastUpdatedDate() != other.getLastUpdatedDate()) {
                return false;
            }
        }
        if (hasName() != other.hasName()) {
            return false;
        }
        if (hasName()) {
            if (!getName().equals(other.getName())) {
                return false;
            }
        }
        if (hasSkip() != other.hasSkip()) {
            return false;
        }
        if (hasSkip()) {
            if (getSkip() != other.getSkip()) {
                return false;
            }
        }
        if (hasLimit() != other.hasLimit()) {
            return false;
        }
        if (hasLimit()) {
            if (getLimit() != other.getLimit()) {
                return false;
            }
        }
        if (!getFieldsToHighlightList().equals(other.getFieldsToHighlightList())) {
            return false;
        }
        return getUnknownFields().equals(other.getUnknownFields());
    }

    @java.lang.Override
    public int hashCode() {
        if (memoizedHashCode != 0) {
            return memoizedHashCode;
        }
        int hash = 41;
        hash = (19 * hash) + getDescriptor().hashCode();
        if (getGroupIdsCount() > 0) {
            hash = (37 * hash) + GROUP_IDS_FIELD_NUMBER;
            hash = (53 * hash) + getGroupIdsList().hashCode();
        }
        if (hasLastUpdatedDate()) {
            hash = (37 * hash) + LAST_UPDATED_DATE_FIELD_NUMBER;
            hash = (53 * hash) + com.google.protobuf.Internal.hashLong(getLastUpdatedDate());
        }
        if (hasName()) {
            hash = (37 * hash) + NAME_FIELD_NUMBER;
            hash = (53 * hash) + getName().hashCode();
        }
        if (hasSkip()) {
            hash = (37 * hash) + SKIP_FIELD_NUMBER;
            hash = (53 * hash) + getSkip();
        }
        if (hasLimit()) {
            hash = (37 * hash) + LIMIT_FIELD_NUMBER;
            hash = (53 * hash) + getLimit();
        }
        if (getFieldsToHighlightCount() > 0) {
            hash = (37 * hash) + FIELDS_TO_HIGHLIGHT_FIELD_NUMBER;
            hash = (53 * hash) + getFieldsToHighlightList().hashCode();
        }
        hash = (29 * hash) + getUnknownFields().hashCode();
        memoizedHashCode = hash;
        return hash;
    }

    public static im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest parseFrom(
            java.nio.ByteBuffer data) throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data);
    }

    public static im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest parseFrom(
            java.nio.ByteBuffer data,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data, extensionRegistry);
    }

    public static im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest parseFrom(
            com.google.protobuf.ByteString data)
            throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data);
    }

    public static im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest parseFrom(
            com.google.protobuf.ByteString data,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data, extensionRegistry);
    }

    public static im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest parseFrom(
            byte[] data) throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data);
    }

    public static im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest parseFrom(
            byte[] data,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws com.google.protobuf.InvalidProtocolBufferException {
        return PARSER.parseFrom(data, extensionRegistry);
    }

    public static im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest parseFrom(
            java.io.InputStream input) throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage.parseWithIOException(PARSER, input);
    }

    public static im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest parseFrom(
            java.io.InputStream input,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage
                .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public static im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest parseDelimitedFrom(
            java.io.InputStream input) throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage.parseDelimitedWithIOException(PARSER, input);
    }

    public static im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest parseDelimitedFrom(
            java.io.InputStream input,
            com.google.protobuf.ExtensionRegistryLite extensionRegistry)
            throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage
                .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }

    public static im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest parseFrom(
            com.google.protobuf.CodedInputStream input) throws java.io.IOException {
        return com.google.protobuf.GeneratedMessage.parseWithIOException(PARSER, input);
    }

    public static im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest parseFrom(
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
            im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest prototype) {
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
     * Protobuf type {@code im.turms.proto.QueryGroupsRequest}
     */
    public static final class Builder extends com.google.protobuf.GeneratedMessage.Builder<Builder>
            implements
            // @@protoc_insertion_point(builder_implements:im.turms.proto.QueryGroupsRequest)
            im.turms.server.common.access.client.dto.request.group.QueryGroupsRequestOrBuilder {
        public static final com.google.protobuf.Descriptors.Descriptor getDescriptor() {
            return im.turms.server.common.access.client.dto.request.group.QueryGroupsRequestOuterClass.internal_static_im_turms_proto_QueryGroupsRequest_descriptor;
        }

        @java.lang.Override
        protected com.google.protobuf.GeneratedMessage.FieldAccessorTable internalGetFieldAccessorTable() {
            return im.turms.server.common.access.client.dto.request.group.QueryGroupsRequestOuterClass.internal_static_im_turms_proto_QueryGroupsRequest_fieldAccessorTable
                    .ensureFieldAccessorsInitialized(
                            im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest.class,
                            im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest.Builder.class);
        }

        // Construct using
        // im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest.newBuilder()
        private Builder() {

        }

        private Builder(com.google.protobuf.GeneratedMessage.BuilderParent parent) {
            super(parent);

        }

        @java.lang.Override
        public Builder clear() {
            super.clear();
            bitField0_ = 0;
            groupIds_ = emptyLongList();
            lastUpdatedDate_ = 0L;
            name_ = "";
            skip_ = 0;
            limit_ = 0;
            fieldsToHighlight_ = emptyIntList();
            return this;
        }

        @java.lang.Override
        public com.google.protobuf.Descriptors.Descriptor getDescriptorForType() {
            return im.turms.server.common.access.client.dto.request.group.QueryGroupsRequestOuterClass.internal_static_im_turms_proto_QueryGroupsRequest_descriptor;
        }

        @java.lang.Override
        public im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest getDefaultInstanceForType() {
            return im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest
                    .getDefaultInstance();
        }

        @java.lang.Override
        public im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest build() {
            im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest result =
                    buildPartial();
            if (!result.isInitialized()) {
                throw newUninitializedMessageException(result);
            }
            return result;
        }

        @java.lang.Override
        public im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest buildPartial() {
            im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest result =
                    new im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest(
                            this);
            if (bitField0_ != 0) {
                buildPartial0(result);
            }
            onBuilt();
            return result;
        }

        private void buildPartial0(
                im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest result) {
            int from_bitField0_ = bitField0_;
            if (((from_bitField0_ & 0x00000001) != 0)) {
                groupIds_.makeImmutable();
                result.groupIds_ = groupIds_;
            }
            int to_bitField0_ = 0;
            if (((from_bitField0_ & 0x00000002) != 0)) {
                result.lastUpdatedDate_ = lastUpdatedDate_;
                to_bitField0_ |= 0x00000001;
            }
            if (((from_bitField0_ & 0x00000004) != 0)) {
                result.name_ = name_;
                to_bitField0_ |= 0x00000002;
            }
            if (((from_bitField0_ & 0x00000008) != 0)) {
                result.skip_ = skip_;
                to_bitField0_ |= 0x00000004;
            }
            if (((from_bitField0_ & 0x00000010) != 0)) {
                result.limit_ = limit_;
                to_bitField0_ |= 0x00000008;
            }
            if (((from_bitField0_ & 0x00000020) != 0)) {
                fieldsToHighlight_.makeImmutable();
                result.fieldsToHighlight_ = fieldsToHighlight_;
            }
            result.bitField0_ |= to_bitField0_;
        }

        @java.lang.Override
        public Builder mergeFrom(com.google.protobuf.Message other) {
            if (other instanceof im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest) {
                return mergeFrom(
                        (im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest) other);
            } else {
                super.mergeFrom(other);
                return this;
            }
        }

        public Builder mergeFrom(
                im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest other) {
            if (other == im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest
                    .getDefaultInstance()) {
                return this;
            }
            if (!other.groupIds_.isEmpty()) {
                if (groupIds_.isEmpty()) {
                    groupIds_ = other.groupIds_;
                    groupIds_.makeImmutable();
                    bitField0_ |= 0x00000001;
                } else {
                    ensureGroupIdsIsMutable();
                    groupIds_.addAll(other.groupIds_);
                }
                onChanged();
            }
            if (other.hasLastUpdatedDate()) {
                setLastUpdatedDate(other.getLastUpdatedDate());
            }
            if (other.hasName()) {
                name_ = other.name_;
                bitField0_ |= 0x00000004;
                onChanged();
            }
            if (other.hasSkip()) {
                setSkip(other.getSkip());
            }
            if (other.hasLimit()) {
                setLimit(other.getLimit());
            }
            if (!other.fieldsToHighlight_.isEmpty()) {
                if (fieldsToHighlight_.isEmpty()) {
                    fieldsToHighlight_ = other.fieldsToHighlight_;
                    fieldsToHighlight_.makeImmutable();
                    bitField0_ |= 0x00000020;
                } else {
                    ensureFieldsToHighlightIsMutable();
                    fieldsToHighlight_.addAll(other.fieldsToHighlight_);
                }
                onChanged();
            }
            this.mergeUnknownFields(other.getUnknownFields());
            onChanged();
            return this;
        }

        @java.lang.Override
        public final boolean isInitialized() {
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
                            long v = input.readInt64();
                            ensureGroupIdsIsMutable();
                            groupIds_.addLong(v);
                        } // case 8
                        case 10 -> {
                            int length = input.readRawVarint32();
                            int limit = input.pushLimit(length);
                            ensureGroupIdsIsMutable();
                            while (input.getBytesUntilLimit() > 0) {
                                groupIds_.addLong(input.readInt64());
                            }
                            input.popLimit(limit);
                        } // case 10
                        case 16 -> {
                            lastUpdatedDate_ = input.readInt64();
                            bitField0_ |= 0x00000002;
                        } // case 16
                        case 26 -> {
                            name_ = input.readStringRequireUtf8();
                            bitField0_ |= 0x00000004;
                        } // case 26
                        case 80 -> {
                            skip_ = input.readInt32();
                            bitField0_ |= 0x00000008;
                        } // case 80
                        case 88 -> {
                            limit_ = input.readInt32();
                            bitField0_ |= 0x00000010;
                        } // case 88
                        case 96 -> {
                            int v = input.readInt32();
                            ensureFieldsToHighlightIsMutable();
                            fieldsToHighlight_.addInt(v);
                        } // case 96
                        case 98 -> {
                            int length = input.readRawVarint32();
                            int limit = input.pushLimit(length);
                            ensureFieldsToHighlightIsMutable();
                            while (input.getBytesUntilLimit() > 0) {
                                fieldsToHighlight_.addInt(input.readInt32());
                            }
                            input.popLimit(limit);
                        } // case 98
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

        private com.google.protobuf.Internal.LongList groupIds_ = emptyLongList();

        private void ensureGroupIdsIsMutable() {
            if (!groupIds_.isModifiable()) {
                groupIds_ = makeMutableCopy(groupIds_);
            }
            bitField0_ |= 0x00000001;
        }

        /**
         * <code>repeated int64 group_ids = 1;</code>
         *
         * @return A list containing the groupIds.
         */
        public java.util.List<java.lang.Long> getGroupIdsList() {
            groupIds_.makeImmutable();
            return groupIds_;
        }

        /**
         * <code>repeated int64 group_ids = 1;</code>
         *
         * @return The count of groupIds.
         */
        public int getGroupIdsCount() {
            return groupIds_.size();
        }

        /**
         * <code>repeated int64 group_ids = 1;</code>
         *
         * @param index The index of the element to return.
         * @return The groupIds at the given index.
         */
        public long getGroupIds(int index) {
            return groupIds_.getLong(index);
        }

        /**
         * <code>repeated int64 group_ids = 1;</code>
         *
         * @param index The index to set the value at.
         * @param value The groupIds to set.
         * @return This builder for chaining.
         */
        public Builder setGroupIds(int index, long value) {

            ensureGroupIdsIsMutable();
            groupIds_.setLong(index, value);
            bitField0_ |= 0x00000001;
            onChanged();
            return this;
        }

        /**
         * <code>repeated int64 group_ids = 1;</code>
         *
         * @param value The groupIds to add.
         * @return This builder for chaining.
         */
        public Builder addGroupIds(long value) {

            ensureGroupIdsIsMutable();
            groupIds_.addLong(value);
            bitField0_ |= 0x00000001;
            onChanged();
            return this;
        }

        /**
         * <code>repeated int64 group_ids = 1;</code>
         *
         * @param values The groupIds to add.
         * @return This builder for chaining.
         */
        public Builder addAllGroupIds(java.lang.Iterable<? extends java.lang.Long> values) {
            ensureGroupIdsIsMutable();
            com.google.protobuf.AbstractMessageLite.Builder.addAll(values, groupIds_);
            bitField0_ |= 0x00000001;
            onChanged();
            return this;
        }

        /**
         * <code>repeated int64 group_ids = 1;</code>
         *
         * @return This builder for chaining.
         */
        public Builder clearGroupIds() {
            groupIds_ = emptyLongList();
            bitField0_ &= ~0x00000001;
            onChanged();
            return this;
        }

        private long lastUpdatedDate_;

        /**
         * <code>optional int64 last_updated_date = 2;</code>
         *
         * @return Whether the lastUpdatedDate field is set.
         */
        @java.lang.Override
        public boolean hasLastUpdatedDate() {
            return ((bitField0_ & 0x00000002) != 0);
        }

        /**
         * <code>optional int64 last_updated_date = 2;</code>
         *
         * @return The lastUpdatedDate.
         */
        @java.lang.Override
        public long getLastUpdatedDate() {
            return lastUpdatedDate_;
        }

        /**
         * <code>optional int64 last_updated_date = 2;</code>
         *
         * @param value The lastUpdatedDate to set.
         * @return This builder for chaining.
         */
        public Builder setLastUpdatedDate(long value) {

            lastUpdatedDate_ = value;
            bitField0_ |= 0x00000002;
            onChanged();
            return this;
        }

        /**
         * <code>optional int64 last_updated_date = 2;</code>
         *
         * @return This builder for chaining.
         */
        public Builder clearLastUpdatedDate() {
            bitField0_ &= ~0x00000002;
            lastUpdatedDate_ = 0L;
            onChanged();
            return this;
        }

        private java.lang.Object name_ = "";

        /**
         * <code>optional string name = 3;</code>
         *
         * @return Whether the name field is set.
         */
        public boolean hasName() {
            return ((bitField0_ & 0x00000004) != 0);
        }

        /**
         * <code>optional string name = 3;</code>
         *
         * @return The name.
         */
        public java.lang.String getName() {
            java.lang.Object ref = name_;
            if (!(ref instanceof java.lang.String)) {
                com.google.protobuf.ByteString bs = (com.google.protobuf.ByteString) ref;
                java.lang.String s = bs.toStringUtf8();
                name_ = s;
                return s;
            } else {
                return (java.lang.String) ref;
            }
        }

        /**
         * <code>optional string name = 3;</code>
         *
         * @return The bytes for name.
         */
        public com.google.protobuf.ByteString getNameBytes() {
            java.lang.Object ref = name_;
            if (ref instanceof String) {
                com.google.protobuf.ByteString b =
                        com.google.protobuf.ByteString.copyFromUtf8((java.lang.String) ref);
                name_ = b;
                return b;
            } else {
                return (com.google.protobuf.ByteString) ref;
            }
        }

        /**
         * <code>optional string name = 3;</code>
         *
         * @param value The name to set.
         * @return This builder for chaining.
         */
        public Builder setName(java.lang.String value) {
            if (value == null) {
                throw new NullPointerException();
            }
            name_ = value;
            bitField0_ |= 0x00000004;
            onChanged();
            return this;
        }

        /**
         * <code>optional string name = 3;</code>
         *
         * @return This builder for chaining.
         */
        public Builder clearName() {
            name_ = getDefaultInstance().getName();
            bitField0_ &= ~0x00000004;
            onChanged();
            return this;
        }

        /**
         * <code>optional string name = 3;</code>
         *
         * @param value The bytes for name to set.
         * @return This builder for chaining.
         */
        public Builder setNameBytes(com.google.protobuf.ByteString value) {
            if (value == null) {
                throw new NullPointerException();
            }
            checkByteStringIsUtf8(value);
            name_ = value;
            bitField0_ |= 0x00000004;
            onChanged();
            return this;
        }

        private int skip_;

        /**
         * <code>optional int32 skip = 10;</code>
         *
         * @return Whether the skip field is set.
         */
        @java.lang.Override
        public boolean hasSkip() {
            return ((bitField0_ & 0x00000008) != 0);
        }

        /**
         * <code>optional int32 skip = 10;</code>
         *
         * @return The skip.
         */
        @java.lang.Override
        public int getSkip() {
            return skip_;
        }

        /**
         * <code>optional int32 skip = 10;</code>
         *
         * @param value The skip to set.
         * @return This builder for chaining.
         */
        public Builder setSkip(int value) {

            skip_ = value;
            bitField0_ |= 0x00000008;
            onChanged();
            return this;
        }

        /**
         * <code>optional int32 skip = 10;</code>
         *
         * @return This builder for chaining.
         */
        public Builder clearSkip() {
            bitField0_ &= ~0x00000008;
            skip_ = 0;
            onChanged();
            return this;
        }

        private int limit_;

        /**
         * <code>optional int32 limit = 11;</code>
         *
         * @return Whether the limit field is set.
         */
        @java.lang.Override
        public boolean hasLimit() {
            return ((bitField0_ & 0x00000010) != 0);
        }

        /**
         * <code>optional int32 limit = 11;</code>
         *
         * @return The limit.
         */
        @java.lang.Override
        public int getLimit() {
            return limit_;
        }

        /**
         * <code>optional int32 limit = 11;</code>
         *
         * @param value The limit to set.
         * @return This builder for chaining.
         */
        public Builder setLimit(int value) {

            limit_ = value;
            bitField0_ |= 0x00000010;
            onChanged();
            return this;
        }

        /**
         * <code>optional int32 limit = 11;</code>
         *
         * @return This builder for chaining.
         */
        public Builder clearLimit() {
            bitField0_ &= ~0x00000010;
            limit_ = 0;
            onChanged();
            return this;
        }

        private com.google.protobuf.Internal.IntList fieldsToHighlight_ = emptyIntList();

        private void ensureFieldsToHighlightIsMutable() {
            if (!fieldsToHighlight_.isModifiable()) {
                fieldsToHighlight_ = makeMutableCopy(fieldsToHighlight_);
            }
            bitField0_ |= 0x00000020;
        }

        /**
         * <code>repeated int32 fields_to_highlight = 12;</code>
         *
         * @return A list containing the fieldsToHighlight.
         */
        public java.util.List<java.lang.Integer> getFieldsToHighlightList() {
            fieldsToHighlight_.makeImmutable();
            return fieldsToHighlight_;
        }

        /**
         * <code>repeated int32 fields_to_highlight = 12;</code>
         *
         * @return The count of fieldsToHighlight.
         */
        public int getFieldsToHighlightCount() {
            return fieldsToHighlight_.size();
        }

        /**
         * <code>repeated int32 fields_to_highlight = 12;</code>
         *
         * @param index The index of the element to return.
         * @return The fieldsToHighlight at the given index.
         */
        public int getFieldsToHighlight(int index) {
            return fieldsToHighlight_.getInt(index);
        }

        /**
         * <code>repeated int32 fields_to_highlight = 12;</code>
         *
         * @param index The index to set the value at.
         * @param value The fieldsToHighlight to set.
         * @return This builder for chaining.
         */
        public Builder setFieldsToHighlight(int index, int value) {

            ensureFieldsToHighlightIsMutable();
            fieldsToHighlight_.setInt(index, value);
            bitField0_ |= 0x00000020;
            onChanged();
            return this;
        }

        /**
         * <code>repeated int32 fields_to_highlight = 12;</code>
         *
         * @param value The fieldsToHighlight to add.
         * @return This builder for chaining.
         */
        public Builder addFieldsToHighlight(int value) {

            ensureFieldsToHighlightIsMutable();
            fieldsToHighlight_.addInt(value);
            bitField0_ |= 0x00000020;
            onChanged();
            return this;
        }

        /**
         * <code>repeated int32 fields_to_highlight = 12;</code>
         *
         * @param values The fieldsToHighlight to add.
         * @return This builder for chaining.
         */
        public Builder addAllFieldsToHighlight(
                java.lang.Iterable<? extends java.lang.Integer> values) {
            ensureFieldsToHighlightIsMutable();
            com.google.protobuf.AbstractMessageLite.Builder.addAll(values, fieldsToHighlight_);
            bitField0_ |= 0x00000020;
            onChanged();
            return this;
        }

        /**
         * <code>repeated int32 fields_to_highlight = 12;</code>
         *
         * @return This builder for chaining.
         */
        public Builder clearFieldsToHighlight() {
            fieldsToHighlight_ = emptyIntList();
            bitField0_ &= ~0x00000020;
            onChanged();
            return this;
        }

        // @@protoc_insertion_point(builder_scope:im.turms.proto.QueryGroupsRequest)
    }

    // @@protoc_insertion_point(class_scope:im.turms.proto.QueryGroupsRequest)
    private static final im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest DEFAULT_INSTANCE;
    static {
        DEFAULT_INSTANCE =
                new im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest();
    }

    public static im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest getDefaultInstance() {
        return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<QueryGroupsRequest> PARSER =
            new com.google.protobuf.AbstractParser<>() {
                @java.lang.Override
                public QueryGroupsRequest parsePartialFrom(
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

    public static com.google.protobuf.Parser<QueryGroupsRequest> parser() {
        return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<QueryGroupsRequest> getParserForType() {
        return PARSER;
    }

    @java.lang.Override
    public im.turms.server.common.access.client.dto.request.group.QueryGroupsRequest getDefaultInstanceForType() {
        return DEFAULT_INSTANCE;
    }

}