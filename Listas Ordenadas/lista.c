#include "lista.h"
#include <stdio.h>
#include <stdlib.h>
// elementos - valores
//nelementos - tamanho e quantidade

void iniciaLista(tLista *lista){
    lista->nelementos = 0;//iniciando a lista
}

void Comprimento(const tLista *lista){
    return lista->nelementos; // numero de elementos da lista
}

tElemento ObtemElemento(const tLista *lista, int indice){
    //os elementos da lista estão contidos em um array
    if(indice < 0 || indice >= lista->nelementos){
        printf("O elemento procurado eh inexistente");
        printf("\n")
    }

    return lista->elementos[indice];
}

static int estaCheia(const tLista *lista){
    return lista->nelementos >= MAX_ELEMENTOS;
}

int insereElemento(tLista *lista, tElemento item, int indice){
    //precisa de uma função para verificar se a lista está cheia
    if(estaCheia(lista)){
        printf("A lista esta cheia. \n");
        printf("Para adicionar mais elementos escolha a opcao remover")/
    }

    if(indice < 0 || indice >= lista->nelementos){
        printf("A posicao desejada nao existe \n");
    }

    int i;

    for(i = lista->nelementos - 1; i >= indice; i--)
        lista->elementos[i + 1] = lista->elementos[i];

    lista->elementos[indice] = item; //novo elemento
    lista->nelementos++; //tamanho aumentou

    return 0;
}

tElemento removerElemento(tLista *lista, int indice){
    tElemento itemRemovido; //novo objeto para estrutura

    if(indice < 0 || indice >= lista->nelementos){
        printf("O elemento procurado eh inexistente");
        printf("\n")
        exit(1);
    }

    itemRemovido = lista->elementos[indice];

    //os elementos precisam ser movidos
    //modi
    int i;

    for(i = indice; i < lista->nelementos - 1; i++)
        lista->elementos[i + 1] = lista->elementos[i];

    --lista->nelementos;

    return itemRemovido;
}





