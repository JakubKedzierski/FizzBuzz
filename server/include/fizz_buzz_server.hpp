#pragma once

#ifdef _WIN32
#define _WIN32_WINNT 0x0A00
#endif
#define ASIO_STANDALONE
#include <asio.hpp>
#include <asio/ts/buffer.hpp>
#include <asio/ts/internet.hpp>
#include <iostream>

using namespace asio::ip;

class FizzBuzzServer
{
public:
    FizzBuzzServer(asio::io_context &io_context,short port):
        tcp_acceptor(io_context, asio::ip::tcp::endpoint(asio::ip::tcp::v4(), port)),
        server_socket(io_context)
    {   
        run(io_context);   
    } 
    
private:
    void run(asio::io_context &io_context);
    void accept(asio::io_context &io_context);
    asio::ip::tcp::acceptor tcp_acceptor;  
    asio::ip::tcp::socket server_socket;
};