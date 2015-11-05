file(GLOB MARKDOWN *.md)
file(GLOB SRC *.cpp *.hpp)
add_library(basic SHARED ${SRC} ${MARKDOWN})
