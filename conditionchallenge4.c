//........................... Challenge 4 : Equation du Deuxième Degré ...........................//

#include <stdio.h>
#include <math.h>

int main(){
    int delta,a,b,c;
    float x,x1,x2;
    // .............................la partie de output et input.........................
    printf("Veuillez donner la valeur de a :");
    scanf("%d",&a);
    while (a == 0){
        printf("Veuillez donner une valeur different de 0 a a :");
        scanf("%d",&a);
    }
    printf("Veuillez donner la valeur de b :");
    scanf("%d",&b);
    printf("Veuillez donner la valeur de c :");
    scanf("%d",&c);

    delta = pow(b,2) - (4*a*c);
    if (delta == 0){
        x = -b/(2*a);
        printf(" x = %.2f",x);
    }
    else if (delta > 0 ){
        x1 = ((- b + sqrt(delta)) / (2*a));
        x2 = ((- b - sqrt(delta)) / (2*a));
        printf("x1 = %.2f ; x2 = %.2f",x1,x2);
    }
    else{
        printf("L'équation n'a pas de solutions dans R.");
    }
    
    


}