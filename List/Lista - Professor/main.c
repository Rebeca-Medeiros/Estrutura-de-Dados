#include <stdio.h>
#include <stdlib.h>
#include "listaInt.h"

int main()
{
    tNo *minhaLista = NULL;

    IniciaLista(&minhaLista);

    printf("Comprimento inicial: %d\n", Comprimento(minhaLista));

    AcrescentaElemento(&minhaLista, 10);
    AcrescentaElemento(&minhaLista, 12);
    InsereElemento(&minhaLista, 5, 0);
    AcrescentaElemento(&minhaLista, 15);
    InsereElemento(&minhaLista, 7, 2);
    AcrescentaElemento(&minhaLista, 20);
    RemoveElemento(&minhaLista, 1);

    ExibeLista(minhaLista);

    int e = 12;
    printf("Elemento %d na posicao #%d\n", e, BuscaElemento(minhaLista, e));

    int i;
    for (i = 0; i < Comprimento(minhaLista); i++){
        printf("#%d: %d\n", i, ObtemElemento(minhaLista, i));
    }

    return 0;
}
