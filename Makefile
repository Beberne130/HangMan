CC = gcc
CFLAGS = -Wall -g
all: hangman
hangman: main.o choixMots.o
	$(CC) $(CFLAGS) -o hangman main.o choixMots.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

choixMots.o: choixMots.c
	$(CC) $(CFLAGS) -c choixMots.c

clean:
	rm -f hangman *.o