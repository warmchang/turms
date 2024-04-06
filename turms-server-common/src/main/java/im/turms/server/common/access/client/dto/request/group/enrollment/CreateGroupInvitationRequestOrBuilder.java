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

package im.turms.server.common.access.client.dto.request.group.enrollment;

public interface CreateGroupInvitationRequestOrBuilder extends
        // @@protoc_insertion_point(interface_extends:im.turms.proto.CreateGroupInvitationRequest)
        com.google.protobuf.MessageOrBuilder {

    /**
     * <code>int64 group_id = 1;</code>
     *
     * @return The groupId.
     */
    long getGroupId();

    /**
     * <code>int64 invitee_id = 2;</code>
     *
     * @return The inviteeId.
     */
    long getInviteeId();

    /**
     * <code>string content = 3;</code>
     *
     * @return The content.
     */
    java.lang.String getContent();

    /**
     * <code>string content = 3;</code>
     *
     * @return The bytes for content.
     */
    com.google.protobuf.ByteString getContentBytes();
}
