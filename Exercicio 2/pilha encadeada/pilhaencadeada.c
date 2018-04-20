#include "pilhaencadeada.h"
#include <stdio.h>
#include <stdlib.h>

tNo *getNO(tElemento v){
    tNo *n;

    n = malloc(sizeof(tNo));

    if(n != NULL){
        n->e = v;
        n->proximo = NULL;
    }

    return n;
}

void CriaPilha(tNo **pilha){
    *pilha = NULL;
}

tElemento ElementoTopo(const tNo *pilha){
    const tNo *topo = pilha;

    printf("\n Primeiro elemento: %d", topo->e);

}

int PilhaVazia(const tNo *pilha){
    if(pilha->proximo == NULL){
        printf("\n A pilha esta vazia!");
        return 1;
    }
}

void Empilha(tNo *pilha, tElemento item){
    tNo *newtopo = getNO(item);

    if(newtopo == NULL){
        newtopo->proximo = NULL;
    } else {
        newtopo->proximo = pilha;
    }

    pilha = newtopo;

}

tElemento Desempilha(tNo *pilha){
    tNo *topo;

    printf("\n Item removido: %d", topo->e);

    pilha = topo->proximo;

    free(topo);
}


