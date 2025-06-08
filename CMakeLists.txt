cmake_minimum_required(VERSION 3.20...4.0)
project(EngineProject VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Define available build types
set(CMAKE_CONFIGURATION_TYPES "Debug;Final;Development")

if (MSVC)
  add_compile_options(/W4 /WX)
  set(CMAKE_CXX_FLAGS_DEVELOPMENT "/O1")
  set(CMAKE_CXX_FLAGS_FINAL "/O2")
else()
  set(CMAKE_CXX_FLAGS_DEBUG "-g")
  add_compile_options(-Wall -Wextra -Wpedantic -Werror)
endif()

# Set default build type if not specified
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  set(CMAKE_BUILD_TYPE "Development")
endif()

add_subdirectory(include)
add_subdirectory(src/engine)
add_subdirectory(src/editor)
add_subdirectory(vendor)
