//
// Created by MONTET Thomas on 05/12/2018.
//

#include <stdio.h>
#include "calcul.h"
#include <math.h>



void delta_inf_0(){
    printf("Il n'y a pas de solution \n");
}

void delta_egl_0(int b, int a, double *x1, double delta){
    *x1 = (-b + sqrt(delta)) / (2 * a);
    printf("Il y a une seule solution \n");
    printf("%lf \n", *x1);
}

void delta_sup_0(double *x1,double *x2,double delta, int a, int b){
    *x1 = (-b + sqrt(delta)) / (2 * a);
    *x2 = (-b - sqrt(delta)) / (2 * a);
    printf("Il y a deux solutions, x1 = %lf et x2 = %lf \n", *x1, *x2);
}