#include <stdio.h>
#include <stdlib.h>
#include "filaencadeada.h"

void ApresentaMenu(){
    printf("\n          MENU        ");
    printf("\n\t 1 - Acrescenta"
           "\n\t 2 - Retira"
           "\n\t 3 - Elemento frente"
           "\n\t 4 - Sair");
}

int main()
{
    tNo f;

    CriaFila(&f);

    ApresentaMenu();

    while(1){
        int op;
        int i;

        printf("\n Escolha uma das opcoes: ");
        scanf("%d", &op);

        if(op == 4){
            break;
        }

        switch(op){
            case 1:
                printf("\n Digite o elemento a ser adicionado:");
                scanf("%d", &i);

                Acrescenta(&f, i);

                break;
            case 2:
                Retira(&f);

                break;
            case 3:
                ElementoFrente(&f);
            default:
                //printf("\n Escolha invalida");
                break;

        }

    }



    printf("\n Programa encerrado");

    return 0;
}
