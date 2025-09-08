CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = 3

all: $(TARGET)

$(TARGET): 3.o
	$(CC) $(CFLAGS) $^ -o $@

3.o: 3.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean
