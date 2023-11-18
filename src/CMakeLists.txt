# Pliki źródłowe
set(SOURCE_FILES 
    brut.cpp
    a_star.cpp
    io.cpp
    # Dodaj pozostałe pliki .cpp, jeśli istnieją
)

# Ścieżka do folderu include
include_directories(include)

# Dodaj bibliotekę z plikami źródłowymi
add_library(srcLib ${SOURCE_FILES})

# Cel wykonywalny dla programu głównego
add_executable(main main.cpp)

# Podłącz bibliotekę główną
target_link_libraries(main srcLib)