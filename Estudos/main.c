#include "TADs/Lista/tad_list.c"

int main(){
    Lista* lista; 
    lista=lst_cria();
    lista=lst_insere(lista,10);
    lista=lst_insere(lista,5);
    imprime(lista);
}