#ifndef ConnectingSocket_hpp
#define ConnectingSocket_hpp

#include <stdio.h>

#include "SimpleSocket.hpp"

namespace Webserv {
    class ConnectingSocket: public SimpleSocket {
    public:
        // Constructor
        ConnectingSocket(int domain, int service, int protocol, 
            int port, u_long interface);
        // Virtual function to connect to network from parent
        int connect_to_network(int sock, struct sockaddr_in address);
    };
}

#endif /* ConnectingSocket_hpp */