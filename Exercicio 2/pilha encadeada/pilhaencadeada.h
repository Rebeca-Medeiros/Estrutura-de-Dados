#ifndef PILHAENCADEADA_H
#define PILHAENCADEADA_H

//incio das structs

typedef int tElemento;

typedef struct No{
    tElemento e;
    struct no *proximo;
} tNo;
//fim das structs
extern tNo *getNO(tElemento v);

//operações essenciais
extern void CriaPilha(tNo **pilha);

extern int PilhaVazia(const tNo *pilha);

extern tElemento ElementoTopo(const tNo *pilha);

extern void Empilha(tNo *pilha, tElemento item);

extern tElemento Desempilha(tNo *pilha);

#endif // PILHAENCADEADA_H

