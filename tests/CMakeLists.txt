# Download and include Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

# Define the test executable
add_executable(test_zipfs test_zipfs.cpp)  

# Link the test executable with the main project code and GTest
target_link_libraries(test_zipfs PRIVATE gtest gtest_main)

# Set the include directories so the tests can access your headers
target_include_directories(test_zipfs PRIVATE ${CMAKE_SOURCE_DIR}/include)

# Enable CTest to discover and run tests
include(GoogleTest)
gtest_discover_tests(test_zipfs)
