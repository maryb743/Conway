CC = gcc
CFLAGS = -Wall -Wextra -std=c11

TARGET = conway
OBJS = main.o life.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: main.c life.h
	$(CC) $(CFLAGS) -c main.c

life.o: life.c life.h
	$(CC) $(CFLAGS) -c life.c

clean:
	rm -f $(OBJS) $(TARGET)

install: $(TARGET)
	install -m 755 $(TARGET) /usr/local/bin/$(TARGET)
