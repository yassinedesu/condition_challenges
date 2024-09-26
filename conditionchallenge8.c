//........................... Challenge 8 : Mention Obtenue ...........................//

#include <stdio.h>

int main(){
    float note;
    printf("Veuillez entrer votre moyenne : ");
    scanf("%f",&note);

    if ( note < 10 )
    printf("Recalé");
    else if (note >= 10 && note < 12)
    printf("Mention : Passable");
    else if (note >= 12 && note < 14)
    printf("Mention : Assez Bien");
    else if (note >= 14 && note < 16)
    printf("Mention : Bien");
    else
    printf("Mention : Tres Bien"); 

}
