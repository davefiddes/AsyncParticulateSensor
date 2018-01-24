# Unit test the library
enable_testing()

file(GLOB SRCS *.cpp)
add_executable(AsyncParticulateSensorTest ${SRCS})

# Generic Google Test libraries
target_link_libraries(AsyncParticulateSensorTest LINK_PUBLIC gtest )
target_link_libraries(AsyncParticulateSensorTest LINK_PUBLIC gtest_main)

# Extra linking for the project.
target_link_libraries (AsyncParticulateSensorTest LINK_PUBLIC AsyncParticulateSensor)

# This is so you can do 'make test' to see all your tests run, instead of
# manually running the executable AsyncParticulateSensorTest to see those specific tests.
add_test(NAME AsyncParticulateSensorTest COMMAND AsyncParticulateSensorTest)
