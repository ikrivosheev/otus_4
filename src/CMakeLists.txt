configure_file(config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/config.h)

add_executable(print_ip main.cpp)

add_library(utils version.cpp utils.cpp)

set_target_properties(print_ip utils PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
    COMPILE_OPTIONS "-Wpedantic;-Wall;-Wextra"
)

target_link_libraries(print_ip utils)

target_include_directories(utils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

install(TARGETS print_ip RUNTIME DESTINATION bin)

