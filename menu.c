//
// Created by ~Thomas Montet~ on 02/12/2018.
//

#include "menu.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "historique.h"



void menu(void)
{
    int choix;

        printf("\n\nMENU \n \n 1. Calculer les equations de second degree\n 2. historique \n 3. Quitter\n");
        scanf("%d",&choix);

        switch(choix)
        {
            case 1: printf("Entrer a, b et c afin de calculer les equations de second degree: \n \n");
                break;
            case 2:historique2();
                menu();
                break;
            case 3: printf("Fermeture du programme\n");
                exit(EXIT_SUCCESS);
            default: printf("Entrer 1 , 2 ou 3 : \n");
                menu();
                break;
        }
}