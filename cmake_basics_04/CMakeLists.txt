# 指定CMake的最低版本要求。
cmake_minimum_required(VERSION 3.1)

# 使用project命令指定库的名称
project(hello_library)

# 使用add_library命令添加库的源代码文件。指定库的类型为SHARED
add_library(hello_library SHARED src/Hello.cpp)

# 添加别名,允许你在将目标链接到其他目标时使用别名引用该目标
add_library(hello::library ALIAS hello_library)


# 添加头文件目录
target_include_directories(hello_library PUBLIC ${PROJECT_SOURCE_DIR}/include)


# 使用add_executable添加可执行文件代码
add_executable(hello_binary src/main.cpp)

# 使用target_link_libraries链接静态库hello_library
target_link_libraries(hello_binary PRIVATE hello::library)