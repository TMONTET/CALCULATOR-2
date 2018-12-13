//
// Created by MONTET Thomas on 05/12/2018.
//

#ifndef UNTITLED24_CALCUL_H
#define UNTITLED24_CALCUL_H

void delta_inf_0();
void delta_egl_0(int b, int a, double *x1, double delta);
void delta_sup_0(double *x1,double *x2,double delta, int a, int b);

struct Donnees{
    int a, b, c;
    double x1, x2, delta;
};


#endif //UNTITLED24_CALCUL_H
