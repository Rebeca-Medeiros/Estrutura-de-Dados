#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

void ApresentaMenu(){
    printf("        MENU        "
           "\n\t 1 - Push"
           "\n\t 2 - Pop"
           "\n\t 3 - Exibir"
           "\n\t 4 - Sair");
}

int main()
{
    tPilha p;

    int op;
    int i;

    while(1){
        ApresentaMenu();

        printf("\n Escolha uma das opcoes: ");
        scanf("%d", &op);

        if(op == 4){
            break;
        }

        switch(op){
            case 1:
                printf("\n Digite o valor a ser adicionado: ");
                scanf("%d", &i);

                Push(&p, i);

                break;
            case 2:
                Pop(&p);

                break;
            case 3:
                Exibir();

                break;
            default:
                break;

        }

    }

    printf("\n Programa encerrado!")

    return 0;
}
