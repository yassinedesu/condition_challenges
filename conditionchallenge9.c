//........................... Challenge 9 : Vérification d'Alphabet ...........................//

#include <stdio.h>

int main(){
    char lettre;
    printf("Veuillez entrer une lettre : ");
    scanf("%c",&lettre);
    if ( (lettre >=65 && lettre <= 90 ) || (lettre >= 97 && lettre <= 122)){
        if (lettre>=97 && lettre <= 122)
        printf("L'alphabet %c est Minuscule",lettre);
        else
        printf("L'alphabet %c est Majuscule",lettre);
    }
    else 
    printf("%c n'est pas un alphabet",lettre);
    return 0;

}
