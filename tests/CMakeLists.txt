set(TEST_FILES 
    test_example_1.cpp
    test_example_2.cpp
    test_example_3.cpp
    test_example_4.cpp
    test_example_5.cpp
    test_example_6.cpp
    test_example_7.cpp
    test_example_8.cpp
    test_example_9.cpp
    test_example_10.cpp
    test_example_11.cpp
    test_example_12.cpp
    test_example_13.cpp
)

find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})

add_executable(tests ${TEST_FILES})

target_link_libraries(tests srcLib ${GTEST_BOTH_LIBRARIES})