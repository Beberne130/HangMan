#include <stdio.h>
#include <ctype.h>
#include "propositionJoueur.h"

char propositionJoueur(){
    char choixUtilisateur;
    static char tableauLettre[26];
    int dejaUtilise;
    static int compteur = 0;
    while(compteur < 26){
        dejaUtilise = 0;
        printf("Choisissez une lettre: ");
        scanf(" %c", &choixUtilisateur);
        choixUtilisateur = tolower(choixUtilisateur);

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
            printf("La lettre %c a bien etait mis dans le tableau\n", choixUtilisateur);
            return choixUtilisateur;
        }
    }
    return '\0';
}