//........................... Challenge 1 : Paire ou Impaire ...........................//

#include <stdio.h>

int main(){

    int n;
    printf("Entrez un nombre : ");
    scanf("%d", &n);
    
    if (n % 2 == 0)
        printf("Le nombre que vous avez entre est pair .");
    else
        printf("Le nombre que vous avez entre est impair .");
    return 0;
}
    
