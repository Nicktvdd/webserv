#include "SimpleSocket.hpp"

HDE::SimpleSocket::SimpleSocket(int domain, int service, int protocol, int port, u_long interface)
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

void HDE::SimpleSocket::test_connection(int connection)
{
	if (connection == -1)
	{
		perror("Error connecting to network");
		exit(EXIT_FAILURE);
		// Error handling
	}
}