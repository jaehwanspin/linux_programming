file(GLOB examples_01 ${CMAKE_CURRENT_LIST_DIR}/*)
list(REMOVE_ITEM examples_01 ${CMAKE_CURRENT_LIST_DIR}/CMakeLists.txt)

foreach(example_01 ${examples_01})
    get_filename_component(exe ${example_01} NAME_WE)
    add_executable(${exe} ${exe}.c)
endforeach()