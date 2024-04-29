# Define the target executable
TARGET = test.exe

# Define the source files
SOURCES = Servers/test.cpp Servers/TestServer.cpp Servers/SimpleServer.cpp Sockets/SimpleSocket.cpp Sockets/BindingSocket.cpp Sockets/ListeningSocket.cpp

# Define the compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++11

# Define color codes
COLOR_RESET = \033[0m
COLOR_GREEN = \033[32m
COLOR_CYAN = \033[36m

# Default target
all: $(TARGET)

# Rule to build the target executable
$(TARGET): $(SOURCES)
	@echo "$(COLOR_CYAN)Building the target: $@$(COLOR_RESET)"
	@$(CXX) $(CXXFLAGS) $^ -o $@
	@echo "$(COLOR_GREEN)Build complete!$(COLOR_RESET)"

run: $(TARGET)
	@echo "$(COLOR_CYAN)Running the target: $<$(COLOR_RESET)"
	@echo "Visit $(COLOR_GREEN)http://localhost:8080/$(COLOR_RESET) to see the server in action"
	@./$<

# Rule to clean the build artifacts
clean:
	@echo "$(COLOR_CYAN)Cleaning the build artifacts$(COLOR_RESET)"
	@rm -f $(TARGET)