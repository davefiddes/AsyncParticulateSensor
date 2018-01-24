cmake_minimum_required (VERSION 3.1)
project (AsyncParticulateSensor)

########################################################################
# Compiler specific setup
########################################################################
set (CMAKE_CXX_STANDARD 11)
if(CMAKE_COMPILER_IS_GNUCC AND NOT WIN32)
    ADD_DEFINITIONS(-Werror)
    ADD_DEFINITIONS(-Wall)
    ADD_DEFINITIONS(-W)
    ADD_DEFINITIONS(-Wextra)
    ADD_DEFINITIONS(-Wno-unused-parameter)
    ADD_DEFINITIONS(-Wsign-compare)
endif()

# The main library
add_subdirectory (src)

# The unit tests
add_subdirectory (test)
