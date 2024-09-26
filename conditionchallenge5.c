//........................... Challenge 5 : Convertion d'annee ...........................//

#include <stdio.h>

int main(){
    int annee;
    char menu;
    printf("Veuillez entrer une annee : ");
    scanf("%d", &annee); 
    while (annee <=0 ){
        printf("Veuillez entrer une annee < = 1 : ");
        scanf("%d", &annee); 
    }
    printf("1). Convertir annees en mois .\n");
    printf("2). Convertir annees en jours .\n");
    printf("3). Convertir annees en heures .\n");
    printf("4). Convertir annees en minutes .\n");
    printf("5). Convertir annees en secondes .\n");
    printf("Votre choix : ");
    scanf(" %c",&menu);

    switch (menu)
    {
        case '1' : printf("%d ans = %d mois",annee,annee*12);
        break;
        case '2' : printf("%d ans = %d jours",annee,annee*365);
        break;
        case '3' : printf("%d ans = %d heures",annee,annee*365*24);
        break;
        case '4' : printf("%d ans = %d minutes",annee,annee*365*24*60);
        break;
        case '5' : printf("%d ans = %d secondes",annee,annee*365*24*60*60);
        break;
        default  : printf("Veuillez entrer un de les choix disponibles :");
        break;
                 
    }
    
    return 0;

}