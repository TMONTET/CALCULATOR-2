#include <stdio.h>
#include <stdlib.h>
#include <math.h> // pour la racine
#include "menu.h"
#include "historique.h"
#include "calcul.h"


int main() {
    int condition = 1;
    while (condition = 1) {

        menu();

        printf("a X^2 + b X + c \n");


        struct Donnees struc;
        struc.a = 0;
        struc.b = 0,
        struc.c = 0;
        struc.x1 = 0,
        struc.x2 = 0,
        struc.delta = 0; // le double c'est pour le sqrt (la racine) pour le delta


        printf("entrer a: \n");
        scanf("%d", &struc.a); // ld pour long car double

        printf("entrer b: \n");
        scanf("%d", &struc.b);

        printf("entrer c: \n");
        scanf("%d", &struc.c);

        struc.delta = pow(struc.b, 2) - (4 * struc.a * struc.c);
        printf("delta = %lf \n", struc.delta);

        if (struc.a == 0 && struc.b == 0 && struc.c == 0) {
            printf("0X=0 a toutes les solutions \n");
            menu();
        }

        else if (struc.delta < 0) {
            delta1();
        }

        else if (struc.delta == 0) {
            delta2(struc.b, struc.a, &struc.x1, struc.delta);
        }

        if (struc.delta > 0) {
            delta3(&struc.x1, &struc.x2, struc.delta, struc.a, struc.b);
        }

        historique1(struc.a, struc.b, struc.c, struc.x1, struc.x2, struc.delta);

        system("PAUSE"); // Tant que l'utilisateur ne tape pas sur 'ENTER' le programme ne continue pas
    }
}