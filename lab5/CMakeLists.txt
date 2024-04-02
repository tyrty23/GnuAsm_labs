cmake_minimum_required(VERSION 3.10)

project(asm_project)
enable_language(ASM)

add_executable(ex1 src/ex1.s)
add_executable(ex2 src/ex2.s)
add_executable(ex3 src/ex3.s)

# Указываем компилятору, что это ассемблерный код и отключаем использование стандартных файлов запуска
set(CMAKE_ASM_FLAGS "${CMAKE_ASM_FLAGS} -nostartfiles")


target_link_libraries(ex3 m)

#Опция компиляции -no-pie для предотвращения ошибки PIE
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -no-pie")
