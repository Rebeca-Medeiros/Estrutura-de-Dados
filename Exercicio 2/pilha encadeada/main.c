#include <stdio.h>
#include <stdlib.h>
#include "pilhaencadeada.h"

void ApresentaMenu(){
    printf("        MENU        "
           "\n\t 1 - Empilhar"
           "\n\t 2 - Desempilhar"
           //"\n\t 3 - Exibir pilha"
           "\n\t 4 - Sair");
}

int main()
{
    tPilha p;

    ApresentaMenu();

    CriaPilha(&p);

    while(1){
        int op;
        int n;

        printf("\n Escolha uma das opcoes: ");
        scanf("%d", &op);

        if(op == 4){
            printf("\n Encerrado");
            break;
        }

        switch(op){
            case 1:
                printf("\n Digite o valor a ser adicionado:");
                scanf("%d", &n);

                Empilha(&p, n);

                break;
            case 2:
                printf("\n Desempilhando");

                Desempilha(&p);

                break;
            case 3:
                //Exibe

                break;
            default:
                printf("\n Opcao invalida");
                break;
        }

    }

    return 0;
}
