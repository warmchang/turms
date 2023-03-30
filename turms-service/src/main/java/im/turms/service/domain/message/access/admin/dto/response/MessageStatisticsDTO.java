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

package im.turms.service.domain.message.access.admin.dto.response;

import java.util.List;

import lombok.Builder;

import im.turms.server.common.domain.common.access.dto.ControllerDTO;
import im.turms.service.domain.common.access.admin.dto.response.StatisticsRecordDTO;

/**
 * @author James Chen
 */
@Builder
public record MessageStatisticsDTO(
        Long sentMessagesOnAverage,
        Long acknowledgedMessages,
        Long acknowledgedMessagesOnAverage,
        Long sentMessages,
        List<StatisticsRecordDTO> sentMessagesOnAverageRecords,
        List<StatisticsRecordDTO> acknowledgedMessagesRecords,
        List<StatisticsRecordDTO> acknowledgedMessagesOnAverageRecords,
        List<StatisticsRecordDTO> sentMessagesRecords
) implements ControllerDTO {
}