//........................... Challenge 10 : Formatage de la Date ...........................//

#include <stdio.h>

int main(){
    int jour,mois,annee;
    printf("Entrez le jour : ");
    scanf("%d",&jour);
    while (jour <= 0 || jour > 31 )
    {
        printf("Le jour que vous avez entre est invalide, svp entrez le jour entre 1 et 31 : ");
        scanf("%d",&jour);
    }
    
    printf("Entrez le mois : ");
    scanf("%d",&mois);
    while (mois <= 0 || mois > 12 )
    {
        printf("Le mois que vous avez entre est invalide, svp entrez le jour entre 1 et 31 : ");
        scanf("%d",&mois);
    }
    printf("Entrez l'annee : ");
    scanf("%d",&annee);
    while (annee <= 0 )
    {
        printf("Veuillez entrer une annee superieur ou egale a 1 :");
        scanf("%d",&annee);
    }
    printf("%d/%d/%d\n",jour,mois,annee);
    switch (mois)
    {
    case 1 : printf("%d Janvier %d",jour,annee);
             break;
    case 2 : printf("%d Fevrier %d",jour,annee);
             break;
    case 3 : printf("%d Mars %d",jour,annee);
             break;
    case 4 : printf("%d Avril %d",jour,annee);
             break;
    case 5 : printf("%d Mai %d",jour,annee);
             break;
    case 6 : printf("%d Juin %d",jour,annee);
             break;
    case 7 : printf("%d Juillet %d",jour,annee);
             break;
    case 8 : printf("%d Aout %d",jour,annee);
             break;
    case 9 : printf("%d Septembre %d",jour,annee);
             break;
    case 10 : printf("%d Octobre %d",jour,annee);
             break;
    case 11 : printf("%d Novembre %d",jour,annee);
             break;
    case 12 : printf("%d Decembre %d",jour,annee);
             break;
    }

    return 0;

}
