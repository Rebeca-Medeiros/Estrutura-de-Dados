#ifndef LISTA_H
#define LISTA_H

#define MAX_ELEMENTOS 10

typedef int tElemento; //outra maneira de definir uma strutura

typedef struct{
    int nelementos; //numero de elementos da lista
    tElemento elementos[MAX_ELEMENTOS]; //elementos da lista, fazendo referencia a outra estrutura
} tLista;

//funções básicas para uma lista
//extern é usado para ligar convenções de outra linguagem

extern void iniciaLista(tLista *lista);//iniciando a lista
extern void Comprimento(const tLista *lista);//tamanho da lista
extern tElemento ObtemElemento(const tLista *lista, int indice);
extern int insereElemento(tLista *lista, tElemento item, int indice);
extern tElemento removerElemento(tLista *lista, int indice);

#endif // LISTA_H
