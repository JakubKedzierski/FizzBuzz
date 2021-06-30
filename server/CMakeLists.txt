project(FizzBuzzServer LANGUAGES CXX)

file(GLOB SOURCES "src/*.cpp")
add_executable(FizzBuzzServer launchServer.cpp ${SOURCES})
target_include_directories(FizzBuzzServer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(FizzBuzzServer -lws2_32 -lwsock32 )
target_include_directories(FizzBuzzServer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/asio-1.18.1/include)

