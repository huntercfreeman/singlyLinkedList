CC=gcc
CFLAGS=-Wall -g

all: mainapp

mainapp: main.o singlyLinkedList.o
	$(CC) $(CFLAGS) main.o singlyLinkedList.o -o mainapp

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

singlyLinkedList.o: singlyLinkedList.c
	$(CC) $(CFLAGS) -c singlyLinkedList.c

clean:
	rm a.out *.o mainapp
