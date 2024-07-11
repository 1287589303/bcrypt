cmake_minimum_required(VERSION 3.10)
project(bcrypt)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O2 -Wall")

set(SOURCES
    main.c
    blowfish.c
    rwfile.c
    keys.c
    wrapbf.c
    endian.c
    wrapzl.c 
)

include_directories(${CMAKE_SOURCE_DIR})

add_executable(bcrypt ${SOURCES})

target_link_libraries(bcrypt z)