# 设置cmake最低版本
cmake_minimum_required(VERSION 3.5)

# 定义项目名称和版本号
project(subproject VERSION 1.0)

# 添加子目录
add_subdirectory(sublibrary1)
add_subdirectory(sublibrary2)
add_subdirectory(subbinary)

