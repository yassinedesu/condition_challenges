//........................... Challenge 3 : Somme de Deux Valeurs ...........................//

#include <stdio.h>

int main(){
    int n,m,s;
    printf("Entrez le premier nombre : ");
    scanf("%d", &n);
    
    printf("Entrez le deuxieme nombre : ");
    scanf("%d", &m);
    
    if (n == m){
        s = (n + m) * 3;
        printf("La somme = %d",s);
    }
    else{
        s = n + m ;
        printf("La somme = %d",s);
    }
return 0;

}