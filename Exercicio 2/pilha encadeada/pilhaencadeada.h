#ifndef PILHAENCADEADA_H
#define PILHAENCADEADA_H

//incio das structs

typedef struct int tElemento;

typedef struct No{
    tElemento e;
    struct no *proximo;
} tNo;

typedef struct{
    tNo *topo;
} tPilha;

//fim das structs

