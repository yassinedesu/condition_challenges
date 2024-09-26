//........................... Challenge 7 : Alphabet Majuscule ...........................//

#include <stdio.h>

int main(){
    char lettre;
    printf("Veuillez entrer une lettre : ");
    scanf("%c",&lettre);
    if ( lettre>=65 && lettre <= 90)
    printf("L'alphabet %c est Majuscule",lettre);
    else if (lettre>=97 && lettre <= 122)
    printf("L'alphabet %c est Minuscule",lettre);
    else 
    printf("%c n'est pas un alphabet",lettre);
    return 0;

}
