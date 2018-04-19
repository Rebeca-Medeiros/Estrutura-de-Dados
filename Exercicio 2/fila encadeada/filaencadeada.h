#ifndef FILAENCADEADA_H
#define FILAENCADEADA_H

typedef int tElemento;

typedef struct No{
    tElemento e;
    struct No *proximo;
} tNo;

typedef struct{
    tNo *inicio;
    tNo *fim;
} tFila;

//operacoes essenciais

extern void CriaFila(tFila *fila);

extern int FilaVazia(const tFila *fila);

//extern tElemento ElementoFrente(const tFila *fila);

extern void Acrescenta(tFila *fila, tElemento item);

extern tElemento Retira(tFila *fila);

#endif // FILAENCADEADA_H
