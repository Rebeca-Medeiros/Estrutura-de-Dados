#include "filaencadeada.h"
#include <stdio.h>
#include <stdlib.h>

tNo *getNo(tElemento v){
    tNo *n;

    n = malloc(sizeof(tNo));

    if(n != NULL){
        n->e = v;
        n->proximo;
    }

    return n;
}

void CriaFila(const tNo **fila){
    *fila = NULL;
}

tElemento ElementoFrente(const tNo *fila){
    printf("\n Primeiro elemento: %d", inicio->e);
}

int FilaVazia(const tNo *fila){
    return  fila->proximo == NULL;
}

void Acrescenta(tNo *fila, tElemento item){
    tNo *novoitem = getNo(item);

    if(FilaVazia(fila)){
        printf("\n A fila esta vazia");
    }

    if(inicio == NULL){
        inicio = fim = novoitem;
    } else {
        fim->proximo = novoitem;
        fim = novoitem;
    }


}

tElemento Retira(tNo *fila){
    if(FilaVazia(fila)){
        printf("\n A fila esta vazia");
    }

    tNo *primeiro;

    printf("\n Item removido: %d", *inicio);

    primeiro = inicio;

    inicio = inicio->proximo;

    if(inicio == NULL){
        fim = NULL;
    }

    free(primeiro);
}


