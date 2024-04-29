#include "ListeningSocket.hpp"

Webserv::ListeningSocket::ListeningSocket(int domain, int service, int protocol, int port, u_long interface, int backlog)
: BindingSocket(domain, service, protocol, port, interface) {
    m_backlog = backlog;
    start_listening();
    test_connection(listening);
}

void Webserv::ListeningSocket::start_listening() {
    listening = listen(get_connection(), m_backlog);
}