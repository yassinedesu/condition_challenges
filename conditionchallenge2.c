//........................... Challenge  2 : Voyelle ou Non ...........................//

#include <stdio.h>

int main(){
    
    char lettre;
    printf("Veuillez entrez une lettre : ");
    scanf("%c", &lettre);
     switch (lettre){
        case 'a' : printf("La lettre %c est une voyelle .", lettre);
                   break;
        case 'u' : printf("La lettre %c est une voyelle .", lettre);
                   break;
        case 'i' : printf("La lettre %c est une voyelle .", lettre);
                   break;
        case 'e' : printf("La lettre %c est une voyelle .", lettre);
                   break;
        case 'o' : printf("La lettre %c est une voyelle .", lettre);
                   break;
        case 'y' : printf("La lettre %c est une voyelle .", lettre);
                   break;
        case 'A' : printf("La lettre %c est une voyelle .", lettre);
                   break;
        case 'U' : printf("La lettre %c est une voyelle .", lettre);
                   break;
        case 'I' : printf("La lettre %c est une voyelle .", lettre);
                   break;
        case 'E' : printf("La lettre %c est une voyelle .", lettre);
                   break;
        case 'O' : printf("La lettre %c est une voyelle .", lettre);
                   break;
        case 'Y' : printf("La lettre %c est une voyelle .", lettre);
                   break;
        default  : printf("La lettre %c n'est pas une voyelle .", lettre);
                   break;

     }
    return 0;

}