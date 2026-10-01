cmake_minimum_required(VERSION 3.10)
project(mocor_adapter C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_library(mocor_adapter
    src/mocor_canvas.c
    src/mocor_event_queue.c
)

target_include_directories(mocor_adapter PUBLIC include)

add_executable(test_adapter tests/test_adapter.c)
target_link_libraries(test_adapter PRIVATE mocor_adapter)

enable_testing()
add_test(NAME mocor_adapter_test COMMAND test_adapter)
