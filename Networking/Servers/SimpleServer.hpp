#ifndef SimpleServer_hpp
#define SimpleServer_hpp

#include <stdio.h>

#include "../webserv-networking.hpp"

namespace Webserv {
    class SimpleServer {
    private:
        ListeningSocket* socket;
        virtual void accepter() = 0;
        virtual void handler() = 0;
        virtual void responder() = 0;
    public:
        // Constructor
        SimpleServer(int domain, int service, int protocol, 
            int port, u_long interface, int backlog);
            virtual void launch() = 0;
            ListeningSocket* get_socket();
    };
}

#endif /* SimpleServer_hpp */