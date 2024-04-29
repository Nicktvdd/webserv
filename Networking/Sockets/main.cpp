#include "ListeningSocket.hpp"

int main()
{
    std::cout << "Starting..." << std::endl;
    std::cout << "Binding Socket..." << std::endl;
    Webserv::BindingSocket bs(AF_INET, SOCK_STREAM, 0, 8080, INADDR_ANY);
    std::cout << "Listening Socket..." << std::endl;
    Webserv::ListeningSocket ls(AF_INET, SOCK_STREAM, 0, 8080, INADDR_ANY, 5);
    std::cout << "Success!" << std::endl;
}