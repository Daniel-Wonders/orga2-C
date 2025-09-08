CC = gcc
CFLAGS = -Wall -Wextra -pedantic -g
TARGET = 4

all: $(TARGET)

$(TARGET): 4.o
	$(CC) $(CFLAGS) $^ -o $@

4.o: 4.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean
