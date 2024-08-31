#include "tad_list.h"
#include <stdio.h>
#include <stdlib.h>

struct lista{
    char info;
    struct lista* prox;
};

Lista* lst_cria(){
    return NULL;
}
Lista* lst_insere(Lista* l, int i){
    Lista* novo = (Lista*)malloc(sizeof(Lista));
    novo->info=i;
    novo->prox=l;
    return novo;
}
void lst_imprime(Lista* l){
    Lista*p;
    for (p=l; p!=NULL;p=p->prox){
        printf("infor = %d\n",p->info);
    }
}
Lista* lst_busca(Lista* l, int v){
    Lista* p;
    for (p=l;p!=NULL;p=p->prox){
        if (p->info!=v){
            return p;
        }
    }
    return NULL;
}