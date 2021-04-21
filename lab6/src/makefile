CC=gcc
FLAGS=-I.
.PHONY: all clean

all: server client

server: same.o same.h
	$(CC) same.o server.c -o server -lpthread $(FLAGS)

client: same.o same.h
	$(CC) same.o client.c -o client $(FLAGS)

same.o: same.h
	$(CC) -c same.c -o same.o $(FLAGS)

clean:
	rm *.o same