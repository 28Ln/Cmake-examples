cmake_minimum_required(VERSION 3.16)

project(my-project)

# 添加可执行文件
add_executable(my-program main.cpp)

# 配置 CPack 生成器
set(CPACK_GENERATOR "DEB")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Your Name")
set(CPACK_PACKAGE_VERSION "1.0")

# 安装目标文件
install(TARGETS my-program DESTINATION /usr/bin)

# 打包安装脚本和其他必要文件
install(FILES my-program.desktop DESTINATION /usr/share/applications/)
install(FILES my-program.png DESTINATION /usr/share/pixmaps/)

# 打包软件包
include(CPack)
