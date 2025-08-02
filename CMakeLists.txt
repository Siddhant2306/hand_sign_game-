cmake_minimum_required(VERSION 3.10)
project(WaveSimulator)

set(CMAKE_CXX_STANDARD 17)

# Set output directory (optional)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Include project headers and SFML headers
include_directories(
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/include/SFML
)

# Link to SFML library path
link_directories(
    ${CMAKE_SOURCE_DIR}/lib/lib
)

# Collect all .cpp files in src/
file(GLOB SOURCES
    src/*.cpp
)

# Create the executable
add_executable(WaveSimulator ${SOURCES})

# Link with SFML (dynamic linking)
target_link_libraries(WaveSimulator
    sfml-graphics
    sfml-window
    sfml-system
)

# Link Windows libraries (optional, if you're using WLAN/Bluetooth APIs)
target_link_libraries(WaveSimulator
    Wlanapi
    Bthprops
)
