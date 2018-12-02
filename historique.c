//
// Created by MONTET Thomas on 01/12/2018.
//

#include "historique.h"
#include<stdio.h>
#include<string.h>
#include "main.h"

int main(int argc, char *argv[])
{
        FILE* f1=NULL;
        f1 = fopen("historique.csv", "a+");
        if (f1!=NULL)
        {
            printf("oui\n");
            fprintf(f1, "%d %d %d %lf %lf %lf", a, b, c, delta, x1, x2);
            fclose(f1);
        } else {
            printf("non\n");
        }
        return 0;
}
