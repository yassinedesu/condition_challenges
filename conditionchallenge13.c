//........................... Challenge 13 : Point sur un Segment  ...........................//

#include <stdio.h>

int main() {
    int x1, y1, x2, y2; // Coordonnes of extremites of segment
    int px, py;         // Coordonnees of the point

    // Lecture des coordonnées des extrémités du segment
    printf("Veuillez entrez les coordonnes de la premiere extremite du segment (x1 y1) : ");
    scanf("%d %d", &x1, &y1);

    printf("Veuillez entrez les coordonnees de la deuxieme extremite du segment (x2 y2) : ");
    scanf("%d %d", &x2, &y2);

    printf("Veuillez entrez les coordonnees du point (px py) : ");
    scanf("%d %d", &px, &py);

    // Vérification de la colinearite 
    if ((px - x1) * (y2 - y1) == (py - y1) * (x2 - x1)) {
        // Vérification si le point est entre les deux extremites du segment
        if ((px >= x1 && px <= x2 || px >= x2 && px <= x1) &&
            (py >= y1 && py <= y2 || py >= y2 && py <= y1)) {
            printf("Le point (%d, %d) est sur le segment.\n", px, py);
        } else {
            printf("Le point (%d, %d) n'est pas sur le segment.\n", px, py);
        }
    } else {
        printf("Le point (%d, %d) n'est pas sur le segment.\n", px, py);
    }

    return 0;
}