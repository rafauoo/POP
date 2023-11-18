# Pliki źródłowe testów
set(TEST_FILES 
    test_1.cpp
    # Dodaj pozostałe pliki .cpp testów, jeśli istnieją
)

# Użyj odpowiedniej biblioteki do testów, na przykład Google Test
# Zainstaluj Google Test i ustaw odpowiednie ścieżki
find_package(GTest REQUIRED)

# Ścieżka do folderu include
include_directories(${GTEST_INCLUDE_DIRS})

# Dodaj testy jako cel wykonywalny
add_executable(testLib ${TEST_FILES})

# Podłącz bibliotekę testową i bibliotekę główną
target_link_libraries(testLib srcLib ${GTEST_BOTH_LIBRARIES})

# Dodaj testy jako cel wykonywalny
add_executable(tests ${TEST_FILES})

# Podłącz bibliotekę testową i bibliotekę główną
target_link_libraries(tests srcLib ${GTEST_BOTH_LIBRARIES})