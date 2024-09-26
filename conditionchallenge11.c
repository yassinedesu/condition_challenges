//........................... Challenge 11 : Jour de la Semaine  ...........................//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){ 
    //...................... initialisation de generateur de Nombre Aleatoire ......................//
    srand(time(NULL));
    //........................ generation de jours au nombre entre 1 et 7 ........................//
    int jour = rand() % 7 + 1;
    
    switch (jour) {
        case 1:
            printf("Lundi");
            break;
        case 2:
            printf("Mardi");
            break;
        case 3:
            printf("Mercredi");
            break;
        case 4:
            printf("Jeudi");
            break;
        case 5:
            printf("Vendredi");
            break;
        case 6:
            printf("Samedi");
            break;
        case 7:
            printf("Dimanche");
            break;
    }

    return 0;
}
