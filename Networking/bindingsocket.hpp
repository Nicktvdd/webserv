#ifndef BindingSocket_hpp
#define BindingSocket_hpp

#include <stdio.h>

#include "SimpleSocket.hpp"

namespace Webserv {
	class BindingSocket: public SimpleSocket {
	public:
	// Constructor
		BindingSocket(int domain, int service, int protocol, 
			int port, u_long interface) 
			: SimpleSocket(domain, service, protocol, port, interface) {};
		
		// Function to connect to network
		int connect_to_network(int sock, struct sockaddr_in address);
		~BindingSocket();
		void bindSocket();
		void closeSocket();
	private:
		int socket;
	};
}

#endif /* BindingSocket_hpp */