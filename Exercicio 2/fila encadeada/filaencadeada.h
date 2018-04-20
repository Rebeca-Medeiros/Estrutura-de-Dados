#ifndef FILAENCADEADA_H
#define FILAENCADEADA_H

typedef int tElemento;

typedef struct No{
    tElemento e;
    struct No *proximo;
} tNo;

tNo *inicio;
tNo *fim;
//operacoes essenciais
extern tNo *getNo(tElemento v);

extern void CriaFila(const tNo **fila);

extern int FilaVazia(const tNo *fila);

extern tElemento ElementoFrente(const tNo *fila);

extern void Acrescenta(tNo *fila, tElemento item);

extern tElemento Retira(tNo *fila);

#endif // FILAENCADEADA_H
