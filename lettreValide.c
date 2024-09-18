#include "lettreValide.h"
#include <string.h>

int lettreValide(char *choixValide, char *mot){
    int taille = strlen(mot);
    for (int i = 0; i < taille; i++)
    {
        if (mot[i] == *choixValide)
        {
            return 1;
        }
        
    }
    return 0;
    

}