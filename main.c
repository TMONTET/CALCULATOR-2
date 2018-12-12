#include <stdio.h>
#include <stdlib.h>
#include <math.h> // pour la racine
#include "menu.h"
#include "historique.h"
#include "calcul.h"


int main() {
    while(1) {

        menu();

        printf("a X^2 + b X + c \n");

        int a = 0, b = 0, c = 0;
        double x1 = 0, x2 = 0, delta = 0; // le double c'est pour le sqrt (la racine) pour le delta

        printf("entrer a: \n");
        scanf("%d", &a); // ld pour long car double

        printf("entrer b: \n");
        scanf("%d", &b);

        printf("entrer c: \n");
        scanf("%d", &c);

        delta = pow(b, 2) - (4 * a * c);
        printf("delta = %lf \n", delta);

        if (a==0 && b==0 && c==0) {
            printf("0X a toute les solutions \n");
            menu();
        }

        if (delta < 0) {
            delta1();
        }

        if (delta == 0) {
            delta2(b, a, &x1,delta);
        }

        if (delta > 0) {
            delta3(&x1, &x2, delta, a, b);
        }

        historique1(a, b, c, x1, x2, delta);

        system("PAUSE"); // Tant que l'utilisateur ne tape pas sur 'ENTER' le programme ne continue pas
    }
}