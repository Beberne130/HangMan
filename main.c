#include "choixMots.h"
#include "propositionJoueur.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
  char motChoisis[TAILLE_MAX_MOT] = choixMots();
  char proposition = propositionJoueur();

  if (verifierProposition(proposition, motChoisis)) {
    afficherLettre();
  } else {
    // ajouterPendu();
  }
  return 0;
}