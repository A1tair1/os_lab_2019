CC=gcc
CFLAGS=-I.

all: process_memory parallel_sum

parallel_sum: utils.o
	$(CC) -pthread -o parallel_sum utils.o parallel_sum.c $(CFLAGS)

process_memory: 
	$(CC) -o process_memory process_memory.c $(CFLAGS)

utils.o: 4.1/utils.h
	$(CC) -o utils.o -c 4.1/utils.c $(CFLAGS)

clean :
	rm *.o *.a process_memory parallel_sum