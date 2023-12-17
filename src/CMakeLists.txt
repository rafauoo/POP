# Pliki źródłowe
set(SOURCE_FILES 
    brut.cpp
    a_star.cpp
    io.cpp
    experiments.cpp
    # Dodaj pozostałe pliki .cpp, jeśli istnieją
)

include_directories(include)

add_library(srcLib ${SOURCE_FILES})

add_executable(main main.cpp)

target_link_libraries(main srcLib)