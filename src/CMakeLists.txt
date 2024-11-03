
# Look for headers in the include directory
include_directories(${CMAKE_SOURCE_DIR}/include)
add_library(some_library SHARED some_library.cpp)

# Add executables for each main file
add_executable(main_zipfs_containers main_zipfs_containers.cpp)
add_executable(main_zipfs_algorithms main_zipfs_algorithms.cpp)

# Link the include directory to both executables
target_include_directories(main_zipfs_containers PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_include_directories(main_zipfs_algorithms PRIVATE ${CMAKE_SOURCE_DIR}/include)
