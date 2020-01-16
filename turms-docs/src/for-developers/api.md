### 管理功能

此表所述功能主要供：①您的后端程序发出HTTP请求进行调用；②同时作为内容统计管理系统与集群监控管理系统的turms-admin使用。具体API接口文档，请查阅[Turms的Swagger文档](https://github.com/turms-im/turms/blob/develop/turms/docs/html/swagger.html)

**注意**

- **此表所述接口仅供管理员使用，而不应该被用户使用**。
- Turms面向管理员使用的API接口并不是完全按照RESTful风格设计的，Turms的API接口的设计原则是“接口的规范性要以开发者使用便捷为前提”，而不是“为了接口规范，需要开发者进行多余的繁琐操作”

### 管理员权限管理

每个Turms集群默认存在一个userId为“turms”，password为“turms”的超级管理员

| **功能**       | **功能说明**                               | **URL**        | **实现版本** |
| :------------- | :----------------------------------------- | -------------- | ------------ |
| 管理员身份校验 | 告知请求发起者，其发送的管理员信息是否存在 | HEAD /admins   | 0.8.0 ✔      |
| 获取管理员名单 |                                            | GET /admins    | 0.8.0 ✔      |
| 新建管理员     |                                            | POST /admins   | 0.8.0 ✔      |
| 删除管理员     |                                            | DELETE /admins | 0.8.0 ✔      |
| 修改管理员信息 | 包括修改管理员的权限                       | PUT /admins    | 0.8.0 ✔      |

### 消息管理

| **功能**     | **功能说明**                                               | **URL**          | **实现版本** |
| :----------- | :--------------------------------------------------------- | ---------------- | ------------ |
| 获取消息     | 根据自定义的过滤条件，获取消息                             | GET /messages    | 0.8.0 ✔      |
| 消息全文检索 | （Planned）预计基于hanLP与CoreNLP分词实现                  | GET /messages    | 1.x ❓        |
| 发送消息     | 可发送的消息类型同“业务功能列表”中的消息类型               | POST /messages   | 0.9.0 ❓      |
| 删除消息     | 删除消息                                                   | DELETE /messages | 0.8.0 ✔      |
| 修改消息     | 可修改消息的所有字段信息，并在修改消息后可选是否重发此消息 | PUT /messages    | 0.9.0 ❓      |

### 用户管理

| **功能**           | **功能说明**                                                 | **URL**                 | **实现版本** |
| :----------------- | :----------------------------------------------------------- | ----------------------- | ------------ |
| 获取用户信息       | 根据用户ID或分页信息，获取用户的非敏感信息或完整信息。<br />注意：此处获取的用户密码既可以是密文（默认salt+SHA256），也可以是明文。由您配置的参数决定（默认密文） | GET /users              | 0.8.0 ✔      |
| 添加用户账号       | 添加用户账号                                                 | POST /users             | 0.8.0 ✔      |
| 删除用户账号       | 删除用户账号。可指定是否同时删除，用户的联系人列表与被联系人列表 | DELETE /users           | 0.8.0 ✔      |
| 修改用户信息       | 可修改用户所有字段信息。包括禁用/解禁用户                    | PUT /users              | 0.8.0 ✔      |
| 获取用户在线信息   | 获取用户在线信息，包括用户在线状态、用户位置（如果客户端有提供此数据）、用户在线设备类型与用户在线设备登陆时间 | GET /users/statuses     | 0.8.0 ✔      |
| 修改用户在线状态   | 修改用户在线状态，可用于强制用户下线。不可修改下线用户的在线状态 | PUT /users/statuses     | 0.8.0 ✔      |
| 获取用户附近的人   | 根据该用户的最新坐标，获取其附近的其他用户的ID（主要：此服务要求此用户客户端有提供用户坐标数据） | GET /users/users-nearby | 0.8.0 ✔      |
| 获取用户的历史坐标 | 获取用户的所有历史坐标，每个坐标信息由必有的具体坐标、时间戳，以及可能为空的地址与地点名称组成 | GET /users/locations    | 0.8.0 ✔      |

### 用户关系管理

| **功能**           | **描述**                                                     | **URL**                           | **实现版本** |
| :----------------- | :----------------------------------------------------------- | :-------------------------------- | ------------ |
| 获取用户关系人名单 | 根据可选的过滤（如“是否是联系人”、“是否是好友/拉黑用户”等）与分组条件，获取用户的关系人名单 | GET /users/relationships          | 0.8.0 ✔      |
| 移除关系人         | 根据可选的过滤条件（如“是否是联系人”、“是否是好友/拉黑用户”等），移除用户关系人列表中的某类用户或指定用户 | DELETE /users/relationships       | 0.8.0 ✔      |
| 修改关系人信息     | 修改与关系人的关系。如设定“是否是联系人”、转变具体关系为“好友”或“拉黑用户” | PUT /users/relationships          | 0.8.0 ✔      |
| 新建关系人分组     |                                                              | POST /users/relationships-group   | 0.8.0 ✔      |
| 修改关系人分组     |                                                              | PUT /users/relationships-group    | 0.8.0 ✔      |
| 删除关系人分组     |                                                              | DELETE /users/relationships-group | 0.8.0 ✔      |
| 获取关系人所在分组 |                                                              | GET /users/relationships/group    | 0.8.0 ✔      |
| 添加关系人至分组   |                                                              | POST /users/relationships/group   | 0.8.0 ✔      |
| 将关系人移除分组   |                                                              | DELETE /users/relationships/group | 0.8.0 ✔      |

### 群组管理

| **功能**                   | **描述**                                                     | **URL**           | **实现版本** |
| :------------------------- | :----------------------------------------------------------- | :---------------- | ------------ |
| 获取群组信息（可分页）     | 根据过滤条件，获取全部或指定的群组信息                       | GET /groups       | 0.8.0 ✔      |
| 获取一个用户参与的所有群组 | 根据用户 ID 获取此用户加入的全部群组信息                     | GET /users/groups | 0.8.0 ✔      |
| 创建群组                   | 创建新群组                                                   | POST /groups      | 0.8.0 ✔      |
| 修改群组信息               | 修改群组的信息。包括转让群主身份、修改群组类型、修改群组禁言状态等操作 | PUT /groups       | 0.8.0 ✔      |
| 删除群组                   | 根据过滤条件，删除群组                                       | DELETE /groups    | 0.8.0 ✔      |

### 群组成员管理

| **功能**         | **描述**                                                     | **URL**                | **实现版本** |
| :--------------- | :----------------------------------------------------------- | :--------------------- | ------------ |
| 获取群组成员     | 根据过滤条件（如“被禁言用户”、“某身份”），获取一个群组的群成员列表 | GET /groups/members    | 0.8.0 ✔      |
| 添加群组成员     | 添加用户至群组成员列表。可添加指定身份的成员                 | POST /groups/members   | 0.8.0 ✔      |
| 移除群组成员     | 根据过滤条件（如“被禁言用户”、“某身份”），从群组成员列表中移除用户 | DELETE /groups/members | 0.8.0 ✔      |
| 修改群组成员信息 | 根据过滤条件（如“被禁言用户”、“某身份”），修改群组成员信息   | PUT /groups/members    | 0.8.0 ✔      |

提醒：群组的禁言状态是指在某个时间段整个群组成员无法进行发言操作（群创建者Creator这个身份也是无权发言的，只有群所有者Owner与群管理员Managers在群禁言期间能发言）；群组成员的禁言状态是指在某个时间段某个群组成员无法进行发言操作，但其他未被禁言的成员仍可以发言。

### 群组黑名单管理

| **功能**                 | **描述**                     | **URL**                   | **实现版本** |
| ------------------------ | ---------------------------- | ------------------------- | ------------ |
| 查询群组黑名单           | 查看群组的黑名单列表         | GET /groups/blacklists    | 0.8.0 ✔      |
| 添加单个用户至群组黑名单 | 将用户添加至群组的黑名单列表 | POST /groups/blacklists   | 0.8.0 ✔      |
| 批量从群组黑名单移除用户 | 将用户从黑名单列表中移除     | DELETE /groups/blacklists | 0.8.0 ✔      |

### 群组类型管理

| **功能**           | **描述**                                                     | **URL**              | **实现版本** |
| ------------------ | ------------------------------------------------------------ | -------------------- | ------------ |
| 查询已有群组类型   | 查询已有群组类型。默认数据库中包括一个名为“GROUP”类型的群组类型 | GET /groups/types    | 0.8.0 ✔      |
| 增加自定义群组类型 | 新增自定义的群组类型，来对群组做各种各样的定制化配置         | POST /groups/types   | 0.8.0 ✔      |
| 删除群组类型       | 删除群组类型                                                 | DELETE /groups/types | 0.8.0 ✔      |
| 修改群组类型的配置 | 修改已存在群组类型的配置                                     | PUT /groups/types    | 0.8.0 ✔      |

### 集群管理

| **功能**                 | **描述**                                                     | **URL**             | **实现版本** |
| ------------------------ | ------------------------------------------------------------ | ------------------- | ------------ |
| 获取当前集群服务节点信息 |                                                              | GET /cluster        | 0.8.0 ✔      |
| 获取当前配置             | 获取当前集群中服务节点的统一配置。<br />通过/cluster/config?mutable=true可仅获取可动态修改的配置项 | GET /cluster/config | 0.8.0 ✔      |
| 修改配置                 | 动态修改集群节点的配置                                       | PUT /cluster/config | 0.8.0 ✔      |