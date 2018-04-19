#include <stdio.h>
#include <stdlib.h>
#include "filaencadeada.h"

/*void ApresentaMenu(){
    printf("\n          MENU        ");
    printf("\n\t 1 - Acrescenta"
           "\n\t 2 - Retira"
           "\n\t 3 - Sair");
}*/

int main()
{
    tFila f;

    CriaFila(&f);

    Acrescenta(&f, 0);
    Acrescenta(&f, 1);
    Acrescenta(&f, 4);
    Retira(&f);
    Acrescenta(&f, 8);
    Acrescenta(&f, 5);

    //ApresentaMenu();

    /*while(1){
        int op;
        int i;

        printf("\n Escolha uma das opcoes: ");
        scanf("%d", &op);

        if(op == 3){
            break;
        }

        switch(op){
            case 1:
                printf("\n Digite o numero a ser adicionado: ");
                scanf("%d", &i);

                Acrescenta(&f, i);
                 break;
            case 2:
                printf("\n O ultimo elemento da fila vai ser remvido.");

                Retira(&f);
            default:
                printf("\n Escolha invalida");
                break;
        }
    }*/

    printf("\n Programa encerrado");

    return 0;
}
