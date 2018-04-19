#include "pilhaencadeada.h"
#include <stdio.h>
#include <stdlib.h>

void CriaPilha(tPilha *pilha){
    //Pilha->topo = NULL;

    pilha = (tPilha *) malloc(sizeof(tPilha));

    /*if(Pilha == NULL){
        printf("\n Hello World!");
    } else {
        Pilha->topo->proximo = NULL;
        printf("\n CBX");
    }*/
}

int PilhaVazia(const tPilha *pilha){
    if(pilha->topo == NULL){
        printf("\n A pilha esta vazia!");
    }
}

void Empilha(tPilha *pilha, tElemento item){
    tPilha *novo;

    novo = (tPilha*) malloc(sizeof(tPilha));
    novo->topo->e = item;

    if(pilha->topo == NULL){
        novo->topo->proximo = NULL;
    } else {
        novo->topo->proximo = novo->topo;
    }

    novo->topo = novo;
    printf("\n Empilhado");
}

tElemento Desempilha(tPilha *pilha){
    tPilha *tremovido;

    printf("\n Item removido: %d", tremovido->topo->e);

    pilha->topo = tremovido->topo->proximo;

    free(tremovido);
}


