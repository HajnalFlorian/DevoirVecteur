#include <stdio.h>
#include <stdlib.h>
#include "head.h"

int main()
{
    int nChoix, nScal;
    tVecteur u,v;
    printf("entrer le premier coordonnée du vecteur.\n");
    scanf("%d",&u.nX);
    printf("entrer le deuxième coordonnée du vecteur.\n");
    scanf("%d",&u.nY);
    printf("entrer le premier coordonnée du vecteur.\n");
    scanf("%d",&v.nX);
    printf("entrer le premier coordonnée du vecteur.\n");
    scanf("%d",&v.nY);
    printf("Entrer un scalaire\n");
    scanf("%d", &nScal);
    printf("entrer 1 pour faire une addition, 2 pour une soustraction et 3 pour le produit scalaire\n");
    scanf("%d",&nChoix);
    if (nChoix=1)
        addition(&u,v);
    else if (nChoix=2)
        soust(&u,&v);
    else if (nChoix=3)
        Scalaire(&u,nScal);
    printf("%d %d", u.nX, u.nY);
    return 0;
}
