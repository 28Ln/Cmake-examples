# 添加库
add_library(sublibrary2_lib STATIC src/sublibrary2.cpp)

# 添加头文件路径
target_include_directories(sublibrary2_lib PUBLIC include)
