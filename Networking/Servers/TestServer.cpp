#include "TestServer.hpp"

Webserv::TestServer::TestServer() : SimpleServer(AF_INET, SOCK_STREAM, 0, 8080, INADDR_ANY, 3){
    launch();
} 

void Webserv::TestServer::accepter() {
    struct sockaddr_in address = get_socket()->get_address();
    int addrlen = sizeof(address);
    // Accept a connection
    new_socket = accept(get_socket()->get_socket(), (struct sockaddr * )&address, (socklen_t*)&addrlen); 
    if (new_socket < 0) {
        perror("accept");
        exit(EXIT_FAILURE);
    }
    read(new_socket, buffer, 1024);
}

void Webserv::TestServer::handler() {
    std::cout << "Received: " << buffer << std::endl;
}

void Webserv::TestServer::responder() {
    char *hello = "Hello from server";
    write(new_socket, hello, strlen(hello));
    close(new_socket);
   // send(new_socket, buffer, strlen(buffer), 0);
}

void Webserv::TestServer::launch() {
    while (1) {
        std::cout << "Listening on port " << get_socket()->get_address().sin_port << std::endl;
        accepter();
        handler();
        responder();
        std::cout << "Message sent" << std::endl;
    }
}
