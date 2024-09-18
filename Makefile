# Variables
CC = gcc
CFLAGS = -Wall -g
OBJ = main.o choixMots.o lettreValide.o propositionJoueur.o
TARGET = hangman

# Règle par défaut
all: $(TARGET)

# Lien final
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Compilation des fichiers objets
main.o: main.c choixMots.h lettreValide.h propositionJoueur.h
	$(CC) $(CFLAGS) -c main.c

choixMots.o: choixMots.c choixMots.h
	$(CC) $(CFLAGS) -c choixMots.c

lettreValide.o: lettreValide.c lettreValide.h
	$(CC) $(CFLAGS) -c lettreValide.c

propositionJoueur.o: propositionJoueur.c propositionJoueur.h
	$(CC) $(CFLAGS) -c propositionJoueur.c

# Nettoyage des fichiers objets
clean:
	rm -f $(OBJ) $(TARGET)
