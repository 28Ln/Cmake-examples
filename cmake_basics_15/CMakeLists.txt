# cmake 最低版本要求
cmake_minimum_required(VERSION 3.5)

# 项目名称和版本号
project(my_program VERSION 1.0)

# 导入 FindProtobuf.cmake 模块
find_package(Protobuf REQUIRED)

# 指定要编译的 .proto 文件
SET(PROTOBUF_FILE my_message.proto)
PROTOBUF_GENERATE_CPP(PROTO_SRCS PROTO_HDRS ${PROTOBUF_FILE})

# 添加包含 Protobuf 头文件的目录
INCLUDE_DIRECTORIES(${PROTOBUF_INCLUDE_DIRS})

# 将生成的源文件添加到项目中
ADD_EXECUTABLE(my_program main.cpp ${PROTO_SRCS} ${PROTO_HDRS})

# 链接 Protobuf 库
TARGET_LINK_LIBRARIES(my_program ${PROTOBUF_LIBRARIES})
