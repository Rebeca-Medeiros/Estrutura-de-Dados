/*
 * Pilha.c
 *
 *  Created on: 23/04/2018
 *      Author: rebeca
 */
#include "Pilha.h"
#include <stdio.h>
#include <stdlib.h>

static int PilhaCheia(const tPilha *pilha){
	if(pilha->topo <= MAX_ELEMENTOS - 1){
		return 1;
	} else {
		return 0;
	}
}

void CriarPilha(tPilha *pilha){
	pilha->topo = -1; //indice de elemento no fundo
}

int PilhaVazia(const tPilha *pilha){
	if(pilha->topo < 0){
		return 1;
	} else {
		return 0;
	}
}

tElemento ElementoTopo(const tPilha *pilha){
	return pilha->itens[pilha->topo];
}

void Empilha(tPilha *pilha, tElemento item){
	if(PilhaCheia(pilha)){
		printf("\n A pilha esta cheia");
		exit(1);
	}

	pilha->itens[++pilha->topo] = item;

	printf("\n A pilha possui um novo topo");
}

tElemento Desempilha(tPilha *pilha){
	if(PilhaVazia(pilha)){
		printf("\n A pilha esta vazia");
	}

	return pilha->itens[pilha->topo--];

}


