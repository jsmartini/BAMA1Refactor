include_directories(${BAMA1Refactor_SOURCE_DIR}/BAMA1/inc)


include_directories(${BAMA1Refactor_SOURCE_DIR}/dep/libcsp/include)
link_directories(${BAMA1Refactor_SOURCE_DIR}/dep/libcsp/src)
link_directories(${BAMA1Refactor_SOURCE_DIR}/dep/libcsp/utils)

# libcsp needs this - it has weird print literals
add_compile_options(-Wreserved-user-defined-literal)

add_executable(BAMA1Refactor main.cxx)
target_link_libraries(BAMA1Refactor libcsp zmq)
