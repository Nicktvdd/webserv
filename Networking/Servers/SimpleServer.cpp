#include "SimpleServer.hpp"

Webserv::SimpleServer::SimpleServer(int domain, int service, int protocol, 
    int port, u_long interface, int backlog) {
    //delete m_socket; not needed. m_socket will exist while the program runs
    socket = new ListeningSocket(domain, service, protocol, port, interface, backlog);
}

Webserv::ListeningSocket* Webserv::SimpleServer::get_socket() {
    return socket;
}