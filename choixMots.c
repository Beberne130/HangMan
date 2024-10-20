#include "choixMots.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char choixMots() {

  srand(time(NULL));
  int index = rand() % 9;
  printf("index : %d\n", index);
  FILE *fichier = NULL;
  fichier = fopen("listeMots.txt", "r");
  char motChoisi[TAILLE_MAX_MOT] = "";

  if (fichier != NULL) {
    for (int i = 0; i <= index; i++) {
      fgets(motChoisi, TAILLE_MAX_MOT, fichier);
      if (i == index) {

        printf("Le mots choisi est : %s\n", motChoisi);
        return motChoisi;
      }
    }

  } else {
    printf("Erreur dans l'ouverture de fichier demandé\n");
  }
  return '\0';
}