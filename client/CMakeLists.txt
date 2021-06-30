project(FizzBuzzClient LANGUAGES CXX)

file(GLOB SOURCES "src/*.cpp")
add_executable(FizzBuzzClient launchClient.cpp ${SOURCES})
target_include_directories(FizzBuzzClient PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(FizzBuzzClient ws2_32)
target_include_directories(FizzBuzzClient PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/asio-1.18.1/include)