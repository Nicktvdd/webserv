/* Listening socket is a child of BindingSocket, specifying that once bound, 
the socket is to listen to the network on the given port for incoming connections */

#include "ListeningSocket.hpp"

// Constructor
Webserv::ListeningSocket::ListeningSocket(int domain, int service, int protocol, int port, u_long interface, int backlog)
: BindingSocket(domain, service, protocol, port, interface) {
    m_backlog = backlog;
    start_listening();
    test_connection(listening);
}

// Mutator function to start listening
void Webserv::ListeningSocket::start_listening() {
    listening = listen(get_socket(), m_backlog);
}

// Getter function for listening
int Webserv::ListeningSocket::get_listening() {
    return listening;
}

int Webserv::ListeningSocket::get_backlog() {
    return m_backlog;
}

