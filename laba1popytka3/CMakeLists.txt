# CMakeList.txt: проект CMake для laboratonaya1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)
project("laba1popytka")
# Добавьте источник в исполняемый файл этого проекта.
add_executable(Lab1_task1 "task1.c")
add_executable(Lab1_task2 "task2.c")
add_executable(Lab1_task3 "task3.c")
add_executable(Lab1_task4 "task4.c")
add_executable(Lab1_task5 "task5_main.c" "task5_func.c")
add_executable(Lab1_task6 "task6_main.c" "task6_func.c")
add_executable(Lab1_task7 "task7_main.c" "task7_func.c")
add_executable(Lab1_task8 "task7_main.c")

add_library(Lab1_task8_lib STATIC "task7_func.c")

target_link_libraries(Lab1_task8 Lab1_task8_lib)

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
