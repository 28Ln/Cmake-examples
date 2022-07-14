cmake_minimum_required(VERSION 3.1)

# Set the project name
project (hello_headers)

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
    src/Hello.cpp
    src/main.cpp
)

# Add an executable with the above sources
add_executable(hello_headers ${SOURCES})

# when running g++ these will be included as -I/directory/path/
target_include_directories(hello_headers
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)
