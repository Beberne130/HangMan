#include "lettreValide.h"
#include <string.h>
#include <ctype.h>

int lettreValide(char *choixValide, char *mot){
    int taille = strlen(mot);
    char lettre = tolower(*choixValide);
    for (int i = 0; i < taille; i++)
    {
        if (tolower(mot[i]) == lettre)
        {
            return 1;
        }
        
    }
    return 0;
    

}