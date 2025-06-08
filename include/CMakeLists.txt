add_library(Headers INTERFACE)

configure_file (
  "${CMAKE_CURRENT_SOURCE_DIR}/MyEngine/Version.h.in"
  "${CMAKE_CURRENT_SOURCE_DIR}/MyEngine/Version.h"
)

target_include_directories(Headers INTERFACE
  "${CMAKE_SOURCE_DIR}/include/MyEngine"
)
