#include <stdio.h>
#include <stdlib.h>
#include "choixMots.h"
#include "lettreValide.h"
#include "propositionJoueur.h"

int main(int argc, char **argv){
    char* motChoisi= choixMots();
    printf("%s\n", motChoisi);
    char choix = propositionJoueur();
    int valideOuPas = lettreValide(&choix, motChoisi);
     if (valideOuPas)
     {
        printf("Oui la lettre %c est dans le mot : %s\n", choix, motChoisi);
     }
     else{
        printf("Non la lettre %c n'est pas dans le mot : %s\n", choix, motChoisi);
     }
         
    return 0;
}