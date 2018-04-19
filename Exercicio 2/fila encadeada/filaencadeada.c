#include "filaencadeada.h"
#include <stdio.h>
#include <stdlib.h>

void CriaFila(tFila *fila){
    fila->inicio = NULL;
}

int FilaVazia(const tFila *fila){
    return fila->inicio == fila->fim;
}

void Acrescenta(tFila *fila, tElemento item){
    tFila *novo;

    novo = (tFila *) malloc(sizeof(tFila));

    novo->fim->e = item;

    fila->fim->proximo = NULL;

    if(novo->inicio == NULL){
        novo->inicio = novo->fim;
        novo->fim = novo;
    } else {
        novo->fim->proximo = novo;
        fila->fim = novo;
    }

    printf("\n Acrescentado com sucesso");
}

tElemento Retira(tFila *fila){
    tFila *tremovido;

    if(FilaVazia(fila)){
        printf("\n Fila e vazia");
    }

    while(tremovido->inicio->proximo != NULL){
        printf("\n %d", tremovido->fim->e);
        tremovido = tremovido->fim->proximo;
    }

    free(tremovido);
}




