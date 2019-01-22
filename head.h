#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
typedef struct tVecteur{
 int nX;
 int nY;
}tVecteur;

//Prototype
extern int addition(tVecteur *u,tVecteur v);
extern int soust(tVecteur *u,tVecteur *v);
extern int Scalaire(tVecteur *u, int nScal);


#endif // HEAD_H_INCLUDED
