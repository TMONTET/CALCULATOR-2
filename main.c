#include <stdio.h>
#include <stdlib.h>
#include <math.h> // pour la racine
#include "historique.h"

int main() {
    while(1) {

        printf("aX^2 + b X + c \n");

        int a = 0, b = 0, c = 0;
        double delta = 0; // le double c'est pour le sqrt (la racine)
        double x1 = 0, x2 = 0;

        printf("entrer a: \n");
        scanf("%d", &a); // ld pour long car double

        printf("entrer b: \n");
        scanf("%d", &b);

        printf("entrer c: \n");
        scanf("%d", &c);

        delta = pow(b, 2) - (4 * a * c);

        if (a==0 && b==0 && c==0) {
            printf("cette solution est impossible car on ne peut pas diviser par 0 \n");

        }

        if (delta < 0) {
            printf("Il n'y a pas de solution \n");
        }

        if (delta == 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            printf("Il y a une seule solution \n");
            printf("%lf", x1);
        }

        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            printf("Il y a deux solutions, x1 = %lf et x2 = %lf \n", x1, x2);
        }

        FILE* f1=NULL;
        f1 = fopen("historique.csv", "a+");
        if (f1!=NULL)
        {
            printf("oui\n");
            fprintf(f1, "%d %d %d %lf %lf %lf\n", a, b, c, delta, x1, x2);
            fclose(f1);
        } else {
            printf("non\n");
        }

        system("PAUSE"); // Tant que l'utilisateur ne tape pas sur 'ENTER' le programme ne continue pas
    }
}