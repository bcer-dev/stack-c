CC=gcc

build:
	$(CC) src\main.c -c
	$(CC) src\stack.c -c
	$(CC) main.o stack.o -o bin\app
	rm *.o
