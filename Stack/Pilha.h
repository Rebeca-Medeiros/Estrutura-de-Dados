/*
 * Pilha.h
 *
 *  Created on: 23/04/2018
 *      Author: rebeca
 */

#ifndef PILHA_H_
#define PILHA_H_
#define MAX_ELEMENTOS 10

typedef int tElemento;

typedef struct{
	tElemento itens[MAX_ELEMENTOS];
	int topo;
}tPilha;

extern void CriarPilha(tPilha *pilha);
extern tElemento ElementoTopo(const tPilha *pilha);
extern int PilhaVazia(const tPilha *pilha);
extern void Empilha(tPilha *pilha, tElemento item);
extern tElemento Desempilha(tPilha *pilha);




#endif /* PILHA_H_ */
