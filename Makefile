CC = gcc
CFLAGS = -Wall -g
all: hangman
hangman: main.o choixMots.o propositionJoueur.o
	$(CC) $(CFLAGS) -o hangman main.o choixMots.o propositionJoueur.o

main.o: main.c choixMots.h propositionJoueur.h
	$(CC) $(CFLAGS) -c main.c

choixMots.o: choixMots.c choixMots.h
	$(CC) $(CFLAGS) -c choixMots.c

propositionJoueur.o: propositionJoueur.c propositionJoueur.h
	$(CC) $(CFLAGS) -c propositionJoueur.c

clean:
	rm -f hangman *.o