#include "fizz_buzz_server.hpp"

void FizzBuzzServer::accept(asio::io_context &io_context){
    tcp_acceptor.async_accept(server_socket,
        [this](std::error_code ec)
		{
            if(!ec){
                std::cout << "[SERVER] New Connection: " ;
            }
            
        });
}

void FizzBuzzServer::run(asio::io_context &io_context)
{   
    std::cout << "server started" << std::endl;
    this->accept(io_context);
}
