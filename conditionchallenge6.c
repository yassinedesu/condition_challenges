//........................... Challenge 6 : Positif, Négatif ou Nul ...........................//

#include <stdio.h>

int main(){
    int n;
    printf("Veuillez entrer un nombre : ");
    scanf("%d",&n);

    if (n<0)
    printf("Le nombre %d est negatif. ",n);
    else if (n>0)
    printf("Le nombre %d est positif. ",n);
    else 
    printf("%d est un nombre null . ",n);
}