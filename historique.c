//
// Created by MONTET Thomas on 01/12/2018.
//

#include "historique.h"
#include<stdio.h>
#include<string.h>

int historique1(int a, int b, int c, double x1, double x2, double delta) {
    FILE *f1 = NULL;
    f1 = fopen("historique.csv", "a+");
    if (f1 != NULL) {
        printf("historique a jour\n");
        fprintf(f1, "%d;%d;%d;%lf;%lf;%lf\n", a, b, c, delta, x1, x2);
        fclose(f1);
    } else {
        printf("historique non trouvé\n");
    }
}

int historique2() {
    int a, b, c;
    double x1, x2, delta;
    FILE *f2 = NULL;
    f2 = fopen("historique.csv", "r");
    int p = 0;
    while (feof(f2) == 0) {
        fscanf(f2, "%d;%d;%d;%lf;%lf;%lf", &a, &b, &c, &delta, &x1, &x2);
        printf("%d %d %d %lf %lf %lf\n", a, b, c, delta, x1, x2);
        p++;
    }
    fclose(f2);
}