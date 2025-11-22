cmake_minimum_required(VERSION 3.10)
project(Proj LANGUAGES C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SRC_FILES "src/*.c")
add_library(CSys SHARED ${SRC_FILES})

target_include_directories(CSys PRIVATE include)

find_package(PkgConfig REQUIRED)

pkg_check_modules(GLIB REQUIRED glib-2.0 gobject-2.0)

target_compile_options(CSys PRIVATE 
    ${GLIB_CFLAGS}
    -Wall -Wextra
)

target_link_libraries(CSys ${GLIB_LIBRARIES})

