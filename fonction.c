#include <stdio.h>
#include <stdlib.h>
#include "head.h"

int addition(tVecteur *u,tVecteur v){
    (*u).nX= (*u).nX+v.nX;
    (*u).nY= (*u).nY+v.nY;
    return 0;
}

int soust(tVecteur *u,tVecteur *v){
    (*v).nX=((*v).nX*-1);
    (*v).nY=((*v).nY*-1);
    (*u).nX=((*u).nX+(*v).nX);
    (*u).nY=((*u).nY+(*v).nY);
    return 0;
}

int Scalaire(tVecteur *u, int nScal){

    (*u).nX = ((*u).nX * nScal);
    (*u).nY = ((*u).nY * nScal);
    return 0;

}
