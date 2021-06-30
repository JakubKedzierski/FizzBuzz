#include "fizz_buzz_server.hpp"

int main(){
    asio::io_context context;
    FizzBuzzServer server(context,10100);
    context.run();
}