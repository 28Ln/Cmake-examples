# CMake最低版本要求
cmake_minimum_required(VERSION 3.16.3)

# 项目名称
project(my_project)

# 设置全局C++标准
set(CMAKE_CXX_STANDARD 14)

# 创建可执行文件
add_executable(my_target main.cpp)

# 将目标编译为C++17
target_compile_features(my_target PRIVATE cxx_std_17)
