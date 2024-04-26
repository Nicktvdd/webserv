#ifndef SimpleSocket_hpp
#define SimpleSocket_hpp

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>

namespace Webserv
{
	class SimpleSocket
	{
	private:
		struct sockaddr_in m_address;
		int m_socket;
		int connection;
	public:
		SimpleSocket(int domain, int service, int protocol, int port, 
		u_long interface);
		virtual int connect_to_network(int sock, struct sockaddr_in address) = 0;
		void test_connection(int);

		// Getters
		struct sockaddr_in get_address() { return m_address; }
		int get_socket() { return m_socket; }
		int get_connection() { return connection; }
	};
} // namespace HDE

#endif /* SimpleSocket_hpp */