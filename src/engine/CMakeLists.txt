file(GLOB_RECURSE EngineSource CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
file(GLOB_RECURSE EngineHeader CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/include/MyEngine/engine/*.h")

add_library(Engine STATIC ${EngineSource} ${EngineHeader})

target_link_libraries(Engine PUBLIC Headers)
