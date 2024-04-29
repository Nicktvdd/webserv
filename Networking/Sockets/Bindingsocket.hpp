#ifndef BindingSocket_hpp
#define BindingSocket_hpp

#include <stdio.h>

#include "SimpleSocket.hpp"

// This class implements a call to the bind function of sockets as a definition of the connect_to_network virtual function from SimpleSocket.
// The bind function is used to bind a socket to an address and port number on the local machine.
// The class has a constructor that takes in the domain, service, protocol, port, and interface.
// The class has a function connect_to_network that binds the socket to the address.
// The class inherits from the SimpleSocket class.
// The class has a virtual function connect_to_network that is defined in the child class BindingSocket.

namespace Webserv {
	class BindingSocket: public SimpleSocket {
	public:
		// Constructor
		BindingSocket(int domain, int service, int protocol, 
			int port, u_long interface);
		// Virtual function to connect to network from parent
		int connect_to_network(int sock, struct sockaddr_in address);
	};
}

#endif /* BindingSocket_hpp */