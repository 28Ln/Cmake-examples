CMAKE_MINIMUM_REQUIRED(VERSION 3.12)

PROJECT(example)
include(variables.cmake)

# 指定 variables 文件路径
#SET(VARIABLES_FILE "${CMAKE_CURRENT_SOURCE_DIR}/variables.cmake")
# 指定 variables 文件路径
SET(VARIABLES_FILE "${CMAKE_CURRENT_SOURCE_DIR}/variables.cmake")
MESSAGE(">>>>>>>VARIABLES_FILE = " ${VARIABLES_FILE})
message(">>>>>>>SOME_VARIABLE: ${SOME_VARIABLE}")
message(">>>>>>>ANOTHER_VARIABLE: ${ANOTHER_VARIABLE}")

# 指定 template 文件路径
SET(TEMPLATE_FILE "${CMAKE_CURRENT_SOURCE_DIR}/template.cpp.in")
MESSAGE(">>>>>>>TEMPLATE_FILE = " ${TEMPLATE_FILE})
# 指定输出文件路径
SET(OUTPUT_FILE "${CMAKE_CURRENT_BINARY_DIR}/output.cpp")
MESSAGE(">>>>>>>OUTPUT_FILE = " ${OUTPUT_FILE})

# 使用 configure_file 命令进行变量替换
configure_file(${TEMPLATE_FILE} ${OUTPUT_FILE} @ONLY)
# 编译目标程序
ADD_EXECUTABLE(output ${OUTPUT_FILE})
cmake_minimum_required(VERSION 3.0)
