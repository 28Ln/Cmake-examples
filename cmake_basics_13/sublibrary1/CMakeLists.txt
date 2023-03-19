# 添加库
add_library(sublibrary1_lib STATIC src/sublibrary1.cpp)

# 添加头文件路径
target_include_directories(sublibrary1_lib PUBLIC include)
