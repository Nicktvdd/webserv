#ifndef ListeningSocket_hpp
#define ListeningSocket_hpp

#include <stdio.h>

#include "bindingsocket.hpp"

namespace webserv {
    class ListeningSocket
{
    private:
        int m_backlog;
        int listening;
    public:
        // Constructor
        ListeningSocket(int domain, int service, int protocol, 
            int port, u_long interface, int backlog);
        void start_listening();
    };
}

#endif /* ListeningSocket_hpp */