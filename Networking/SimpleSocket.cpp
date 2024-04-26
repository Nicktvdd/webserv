#include "SimpleSocket.hpp"

// Default constructor

Webserv::SimpleSocket::SimpleSocket(int domain, int service, int protocol, int port, u_long interface)
{
	// Define address structure
	m_address.sin_family = domain; // AF_INET
	m_address.sin_port = htons(port); //htons converts the port number to network byte order
	m_address.sin_addr.s_addr =htonl(interface); // Accept any incoming messages, convert to network byte order
	
	// Create a socket
	m_socket = socket(domain, service, protocol);
	test_connection(m_socket);

	// Connect to network
	connection = connect_to_network(m_socket, m_address); // Connect to network
	test_connection(connection);
}

// Test connection virtual function

void Webserv::SimpleSocket::test_connection(int connection)
{
	// Confirms connection to network
	if (connection == -1)
	{
		perror("Error connecting to network");
		exit(EXIT_FAILURE);
		// Error handling
	}
}

// Getters

struct sockaddr_in Webserv::SimpleSocket::get_address()
{
	return m_address;
}

int Webserv::SimpleSocket::get_socket()
{
	return m_socket;
}

int Webserv::SimpleSocket::get_connection()
{
	return connection;
}