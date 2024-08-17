#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct ponto Ponto; 

Ponto* cria_pnt(float x, float y);
void libera_pnt(Ponto* p);
void acessa_pnt(Ponto* p, float* x, float* y);
void atribui_pnt(Ponto* p, float x, float y);
float distancia_pnt(Ponto* p1, Ponto* p2);

#include "TAD_Ponto.c"