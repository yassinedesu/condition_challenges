//........................... Challenge 12 : Comparaison d'Instants  ...........................//

#include <stdio.h>


int main() {
    int h1,m1,s1,h2,s2,m2;
    printf("Veuillez entrez l'heure, minutes et puis les secondes :");
    scanf("%d %d %d",&h1,&m1,&s1);
    printf("Le premiere que vous avez entre temps est :%d:%d:%d\n",h1,m1,s1);
    printf("Veuillez encore entrez l'heure, minutes et puis les secondes, ils doivent etre differents de les premiers :");
    scanf("%d %d %d",&h2,&m2,&s2);
    printf("Le deuxieme temps que vous avez entre est :%d:%d:%d\n",h2,m2,s2);
    if (h1 > h2 || h1 < h2)
    {
        if (h1 > h2)
        printf("Le premier instant vient avant le deuxieme");
        else if (h1 < h2)
        printf("Le deuxième instant vient avant le premier");
        else 
        {
            if (m1 > m2 || m1 < m2)
            {
                if (m1 > m2)
                printf("Le premier instant vient avant le deuxieme");
                else if (m1 < m2)
                printf("Le deuxième instant vient avant le premier ");
                else 
                {
                    if (s1 > s2 || s1 < s2)
            {
                if (s1 > s2)
                printf("Le premier instant vient avant le deuxieme");
                else if (s1 < s2)
                printf("Le deuxième instant vient avant le premier ");
                else 
                printf("Il s'agit du même instant.");
                }
            }
            
        }
        
        
    }
}
    return 0;
}
