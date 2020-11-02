file(GLOB chapters ${CMAKE_CURRENT_LIST_DIR}/*)
list(REMOVE_ITEM chapters ${CMAKE_CURRENT_LIST_DIR}/CMakeLists.txt)

foreach(chapter ${chapters})
    add_subdirectory(${chapter})
endforeach()
