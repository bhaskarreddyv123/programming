
# Compiler
CC = gcc

# Target executable
TARGET = thread_mutex

# Build target
all: $(TARGET)

# Compile the main.c file to create the executable
$(TARGET): thread.c
	$(CC) thread.c -o $(TARGET)

# Run the program
run: clean $(TARGET)
	./$(TARGET)

# Clean up the generated executable
clean:
	rm -f $(TARGET)  
