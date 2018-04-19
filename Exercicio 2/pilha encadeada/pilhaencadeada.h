#ifndef PILHAENCADEADA_H
#define PILHAENCADEADA_H

//incio das structs

typedef int tElemento;

typedef struct No{
    tElemento e;
    struct no *proximo;
} tNo;

typedef struct{
    tNo *topo;
} tPilha;

//fim das structs

//operações essenciais
extern void CriaPilha(tPilha *pilha);//ok

extern int PilhaVazia(const tPilha *pilha);//ok

extern tElemento ElementoTopo();

extern void Empilha(tPilha *pilha, tElemento item);

extern tElemento Desempilha(tPilha *pilha);

#endif // PILHAENCADEADA_H

