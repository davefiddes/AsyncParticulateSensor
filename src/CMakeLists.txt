# Compile as a library
add_library(AsyncParticulateSensor AsyncParticulateSensor.cpp)

# Publish the libraries includes
target_include_directories (AsyncParticulateSensor PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
