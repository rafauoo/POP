# Pliki źródłowe testów
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
    # Dodaj pozostałe pliki .cpp testów, jeśli istnieją
)

# Użyj odpowiedniej biblioteki do testów, na przykład Google Test
# Zainstaluj Google Test i ustaw odpowiednie ścieżki
find_package(GTest REQUIRED)

# Ścieżka do folderu include
include_directories(${GTEST_INCLUDE_DIRS})

# Dodaj testy jako cel wykonywalny
add_executable(tests ${TEST_FILES})

# Podłącz bibliotekę testową i bibliotekę główną
target_link_libraries(tests srcLib ${GTEST_BOTH_LIBRARIES})