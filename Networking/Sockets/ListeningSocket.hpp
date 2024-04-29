#ifndef ListeningSocket_hpp
#define ListeningSocket_hpp

#include <stdio.h>

#include "BindingSocket.hpp"

namespace Webserv {
    class ListeningSocket: public BindingSocket
{
    private:
        int m_backlog;
        int listening;
    public:
        // Constructor
        ListeningSocket(int domain, int service, int protocol, 
            int port, u_long interface, int backlog);
        void start_listening();
        int get_listening();
        int get_backlog();
    };
}

#endif /* ListeningSocket_hpp */