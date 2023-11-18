# Minimalna wersja CMake wymagana do zbudowania projektu
cmake_minimum_required(VERSION 3.10)

# Nazwa projektu
project(POP)

# Ustawienia kompilatora
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Ścieżka do plików źródłowych (src)
add_subdirectory(src)

# Ścieżka do plików z testami (tests)
add_subdirectory(tests)