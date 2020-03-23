CC=gcc
CFLAGS=-Wall -g

all: mainapp

mainapp: main.o singlyLinkedList.o stringBuilder.o
	$(CC) $(CFLAGS) main.o singlyLinkedList.o stringBuilder.o -o mainapp

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

singlyLinkedList.o: singlyLinkedList.c
	$(CC) $(CFLAGS) -c singlyLinkedList.c

stringBuilder.o: stringBuilder.c
	$(CC) $(CFLAGS) -c stringBuilder.c

clean:
	rm a.out *.o mainapp
