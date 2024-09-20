#include <stdio.h>
#include "propositionJoueur.h"

int propositionJoueur(){
    char choixUtilisateur;
    char tableauLettre[26];
    int dejaUtilise;
    int compteur = 0;
    while(compteur < 26){
        dejaUtilise = 0;
        printf("Choisissez une lettre: ");
        scanf(" %c", &choixUtilisateur);

        for(int i = 0; i < compteur; i++){
            if(tableauLettre[i] == choixUtilisateur){
                dejaUtilise = 1;
                break;
            }
        }
        if(dejaUtilise){
            printf("La lettre choisi par l'utilisateur a deja etait utilise: %c\n", choixUtilisateur);
        }
        else{
            tableauLettre[compteur] = choixUtilisateur;
            compteur++;
            printf("La lettre %c a bien etait rangé\n", choixUtilisateur);
        }
        }
}