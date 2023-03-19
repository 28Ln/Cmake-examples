# 指定CMake的最低版本要求。
cmake_minimum_required(VERSION 3.1)

# 使用project命令指定库的名称
project(cmake_examples_inst_bin)

# 使用add_library命令添加库的源代码文件。指定库的类型为SHARED
add_library(cmake_examples_inst SHARED
    src/Hello.cpp
)

# 添加头文件目录
target_include_directories(cmake_examples_inst
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
)

# 使用add_executable添加可执行文件代码
add_executable(cmake_examples_inst_bin
    src/main.cpp
)

# 使用target_link_libraries链接静态库hello_library
target_link_libraries( cmake_examples_inst_bin
    PRIVATE 
        cmake_examples_inst
)

# 安装install

# 安装可执行文件
install (TARGETS cmake_examples_inst_bin
    DESTINATION bin)

# 安装共享库
install (TARGETS cmake_examples_inst
    LIBRARY DESTINATION lib)

# 安装头文件
install(DIRECTORY ${PROJECT_SOURCE_DIR}/include/ 
    DESTINATION include)

# 安装配置文件
install (FILES cmake-examples.conf
    DESTINATION etc)    