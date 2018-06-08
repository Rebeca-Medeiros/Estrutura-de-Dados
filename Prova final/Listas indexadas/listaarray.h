#ifndef LISTAARRAY_H
#define LISTAARRAY_H

#define MAX_N 10

typedef int tElementos;

typedef struct {
    tElementos numeros[MAX_N];   // Elementos
    int nElementos; // Número de elementos da lista
} tArray;

extern void IniciaLista(tArray *lista);

extern int Comprimento(const tArray *lista);

extern int InsereElemento(tArray *lista, int valor, int indice);

extern int InsereEmOrdem(tArray *lista, tElementos elemento);

extern tElementos ObtemElemento(const tArray *lista, int indice);

extern tElementos RemoverElemento(tArray *lista, int indice);

extern int ListaVazia(const tArray *lista);

extern void ExibirLista(const tArray *lista);

#endif // LISTAARRAY_H
