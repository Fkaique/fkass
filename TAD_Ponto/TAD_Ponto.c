#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "TAD_Ponto.h"
 struct ponto {
    float x;   
    float y;   
}; 

Ponto* cria_pnt(float x, float y){
    Ponto* p = (Ponto*)malloc(sizeof(Ponto));
    if (p==NULL){
        printf("Deu nao");
        exit(1);
    }else{
        printf("Deu");
    }
    p->x = x;
    p->y = y;
    return p;
}
void libera(Ponto* p){
    free(p);
}
void ponto_acess(Ponto* p, float* x, float* y){
    *x = p->x;
    *y = p->y;
}
void atribui_pnt(Ponto* p, float x, float y){
    p->x = x;
    p->y = y;
}
float distancia(Ponto* p1, Ponto* p2){
    float _x = p2->x - p1->x;
    float _y = p2->y - p1->y;
    return sqrt(_x*_x + _y*_y);
}