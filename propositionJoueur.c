#include <stdio.h>
#include "propositionJoueur.h"

char propositionJoueur(){
    char choix;
    printf("Choisir une lettre : ");
    scanf("%c", &choix);
    return choix;
}