cmake_minimum_required(VERSION 3.1)

project(hello_library)


# 定义库的名称为 hello_library
#>>>>>>> hello_library 是库的名称，STATIC 表示构建静态库，src/Hello.cpp 是库文件的路径。
add_library(hello_library STATIC src/Hello.cpp)

# 添加头文件目录
target_include_directories(hello_library PUBLIC ${PROJECT_SOURCE_DIR}/include)

# 定义一个可执行文件
add_executable(hello_binary src/main.cpp)

message(STATUS ${hello_binary})

# 安装静态库到 /usr/local/lib 目录
install(TARGETS hello_library DESTINATION /usr/local/lib)

# 安装可执行文件到 /usr/local/bin 目录
install(TARGETS hello_binary DESTINATION /usr/local/bin)

# 将静态库 MyLib 链接到可执行文件 MyApp 上
target_link_libraries(hello_binary PRIVATE hello_library)

