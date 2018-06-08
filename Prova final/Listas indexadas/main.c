#include <stdio.h>
#include <stdlib.h>
#include "listaarray.h"

void ApresentaMenu(){
    printf("\n\t    ***** Menu *****"
           "\n\t 1 - Inserir numero"
           "\n\t 2 - Exibir lista"
           "\n\t 3 - Sair");
}

int main()
{
    tArray novalista;

    IniciaLista(&novalista);

    int op, b;

    while(1){
        ApresentaMenu();

        printf("\n Escolha uma das opcoes: ");
        scanf("%d", &op);

        if(op == 3){
            break;
        }

        switch(op){
            case 1:
                printf("\n Digite o numero: ");
                scanf("%d", &b);

                InsereEmOrdem(&novalista, b);
                break;
            case 2:
                ExibirLista(&novalista);
                break;
            default:
                printf("\n Escolha invalida");
                break;
        }

    }

    printf("\n Programa encerrado");

    return 0;
}
