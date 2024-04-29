
#ifndef TESTSERVER_HPP
#define TESTSERVER_HPP

#include <stdio.h>
#include <unistd.h>
#include <cstring.h>

#include "SimpleServer.hpp"

namespace Webserv {
    class TestServer : public SimpleServer {
    private:
        char buffer[1024] = {0};
        int new_socket;

        void accepter();
        void handler();
        void responder();
    public:
        // Constructor
        TestServer(int domain, int service, int protocol, 
            int port, u_long interface, int backlog);
        void launch();
    };
}

#endif /* TESTSERVER_HPP */