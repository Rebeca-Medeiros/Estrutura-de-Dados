#include <stdlib.h>
#include <stdio.h>
#include "listaarray.h"

void IniciaLista(tArray *lista){
    lista->nElementos = 0; // Iniciando a lista com zero elementos
    // -> quando for um ponteiro, neste caso lista é um ponteiro para a estrutura tArray
}

int Comprimento(const tArray *lista){
    return lista->nElementos; // Retorna o número de elementos da lista
}

static int Estacheia(const tArray *lista){
    return lista->nElementos >= MAX_N; // Se o nElementos for maior que o máximo a lista esta cheia
}

int InsereElemento(tArray *lista, int valor, int indice){
    // Verificar se a lista está cheia

    if(Estacheia(lista)){
        printf("\n Lista esta cheia");
        return 1;
    }

    // Indice valido

    if(indice < 0 || indice > lista->nElementos){
        printf("\n Essa posicao nao existe");
        return 1;
    }

    // Adicionando o novo elemento

    int i;

    // Abrindo espaço no array
    for(i = lista->nElementos - 1; i >= indice; i--){
        lista->numeros[i + 1] = lista->numeros[i];
    }

    lista->numeros[indice] = valor;  // Insere o novo elemento

    lista->nElementos++; // Aumenta o tamanho da lista

}

int InsereEmOrdem(tArray *lista, tElementos elemento){
    int indice;

    // Procura a posição que o número vai estar no array
    for(indice = 0; indice < lista->nElementos; indice++){
        if(lista->numeros[indice] > elemento){
            break;
        }
    }

    // Usa InsereElemento para a posição que foi encontrada
    return InsereElemento(lista, elemento, indice);
}

tElementos RemoverElemento(tArray *lista, int indice){
    tElementos removido;

    if(indice < 0 || indice >= lista->nElementos){
        printf("\n Posicao nao existe");
        exit(1);
    }

    removido = lista->numeros[indice];

    int i;

    for(i = indice; i < lista->nElementos - 1; i++){
        lista->numeros[i] = lista->numeros[i + 1];
    }

    --lista->nElementos;

    return removido;
}

int ListaVazia(const tArray *lista){
    return lista->nElementos == 0; // Se for igual a zero lista esta vazia
}

tElementos ObtemElemento(const tArray *lista, int indice){
    if(indice < 0 || indice >= lista->nElementos){
        printf("\n O elemento nao existe");
        exit(1);
    }

    return lista->numeros[indice];
}


void ExibirLista(const tArray *lista){
    int i;

    for(i = 0; i < Comprimento(lista); i++){
        printf("\n [%d] = %d", i, ObtemElemento(lista, i));
    }
}
