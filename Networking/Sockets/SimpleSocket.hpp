#ifndef SimpleSocket_hpp
#define SimpleSocket_hpp

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>

// This class is a simple socket class that creates a socket and connects to a network.	
// The class has a constructor that takes in the domain, service, protocol, port, and interface.
// The class has a virtual function connect_to_network that is defined in the child class BindingSocket.
// The class has a function test_connection that tests the connection to the network.
// The class has getters and setters for the address, socket, and connection.

namespace Webserv
{
	class SimpleSocket
	{
	private:
		struct sockaddr_in m_address;
		int m_socket;
		int connection;
	public:
	// Constructor
		SimpleSocket(int domain, int service, int protocol, int port, 
		u_long interface);
		
		// Virtual function to connect to network
		virtual int connect_to_network(int sock, struct sockaddr_in address) = 0;
		
		// Function to test connection
		void test_connection(int);

		// Getters
		struct sockaddr_in get_address() { return m_address; }
		int get_socket() { return m_socket; }
		int get_connection() { return connection; }
	
		// Setters
		void set_connection(int connection) { connection = connection; }
		
	};
} // namespace HDE

#endif /* SimpleSocket_hpp */