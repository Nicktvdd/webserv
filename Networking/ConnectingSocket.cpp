#include ConnectingSocket.hpp

// Constructor

Webserv::ConnectingSocket::ConnectingSocket(int domain, int service, int protocol, int port, u_long interface) {
    // Call the parent constructor
  //  SimpleSocket(domain, service, protocol, port, interface);
    // Set the connection
    set_connection(connect_to_network(get_socket(), get_address()));
    // Test the connection
    test_connection(get_connection());
}

// Definition of the connect_to_network virtual function
int Webserv::ConnectingSocket::connect_to_network(int sock, struct sockaddr_in address) {
    // Connect to the network
    return connect(sock, (struct sockaddr*)&address, sizeof(address));
}