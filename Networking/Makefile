# Define the target executable
TARGET = test.exe

# Define the source files
SOURCES = Servers/test.cpp Servers/TestServer.cpp Servers/SimpleServer.cpp Sockets/SimpleSocket.cpp Sockets/BindingSocket.cpp Sockets/ListeningSocket.cpp

# Define the compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic

# Default target
all: $(TARGET)

# Rule to build the target executable
$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Rule to clean the build artifacts
clean:
	rm -f $(TARGET)