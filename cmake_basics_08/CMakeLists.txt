cmake_minimum_required(VERSION 3.5)

# Set the project name
project (third_party_include)
set(Boost_DEBUG ON) 
#set(Boost_NO_BOOST_CMAKE ON)
# find a boost install with the libraries filesystem and system
find_package(Boost 1.71.0 REQUIRED COMPONENTS filesystem system)
#find_package(Boost REQUIRED COMPONENTS filesystem)
#find_package(Boost REQUIRED COMPONENTS filesystem)
#find_package(Boost REQUIRED COMPONENTS filesystem VERSION 1.71.0)
#find_package(Boost REQUIRED COMPONENTS filesystem EXACT 1.71.0)

# check if boost was found
if(Boost_FOUND)
    message ("boost found")
    include_directories(${Boost_INCLUDE_DIRS})
else()
    message (FATAL_ERROR "Cannot find Boost")
endif()

# Add an executable
add_executable(third_party_include main.cpp)

# link against the boost libraries
target_link_libraries( third_party_include
    PRIVATE
        Boost::filesystem
)