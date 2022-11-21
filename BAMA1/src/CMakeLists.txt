include_directories(${BAMA1Refactor_SOURCE_DIR}/BAMA1/inc)


include_directories(${BAMA1Refactor_SOURCE_DIR}/dep/libcsp/include)
link_directories(${BAMA1Refactor_SOURCE_DIR}/dep/libcsp/src)
link_directories(${BAMA1Refactor_SOURCE_DIR}/dep/libcsp/utils)

add_executable(BAMA1Refactor main.c)
target_link_libraries(BAMA1Refactor CSP)