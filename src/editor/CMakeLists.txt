file(GLOB_RECURSE EditorSource CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
file(GLOB_RECURSE EditorHeader CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/include/MyEngine/editor/*.h")

add_executable(Editor ${EditorSource} ${EditorHeader})

target_link_libraries(Editor PUBLIC Headers)
target_link_libraries(Editor PRIVATE Engine)
