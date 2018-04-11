#include <stdio.h>
#include <stdlib.h>

typedef struct ponto{
    int x, y; //coordenadas do ponto
    struct ponto *proximo;//ponteiro para o proximo elemento
} tPonto;

int main(){
    //na lista encadeada existem dois ponteiros
    // 1 - para o inicio da lista
    // 2 - para o proximo item
    //listas encadeadas usam alocação dinâmica de memória

    tPonto *iniponto;
    tPonto *proximoponto;
    int r;

    iniponto = (tPonto *) malloc(sizeof(tPonto));
    //malloc retorna NULL se não conseguir alocar
    //sizeof retorna o tamanho do tipo

    if(iniponto == NULL){
        exit(1);
    }

    proximoponto = iniponto;

    while(1){
        printf("Digite o valor de x: \n");
        scanf("%d", &proximoponto->x);
        //-> por ser ponteiro para estrutura
        //ponteiro para estrutura acessa váriavel com ->

        printf("Digite o valor de y: \n");
        scanf("%d", &proximoponto->y);

        printf("Deseja continuar? \n");
        printf(" 1 - Sim \n");
        printf(" 2 - Nao \n");
        scanf("%d", &r);

        //se for sim vai alocar memoria para o proximo elemento
        if(r == 1){
            proximoponto->proximo = (tPonto *) malloc(sizeof(tPonto));
            proximoponto = proximoponto->proximo;
        } else {
            break;
        }
    }
    //while encerrado
    //lista chega ao fim quando proximo e NULL
    proximoponto->proximo = NULL;
    proximoponto = iniponto;//comecar a percorrer a lista do inicio

    while(proximoponto != NULL){
        printf("x = %d | y = %d \n", proximoponto->x, proximoponto->y);
        proximoponto = proximoponto->proximo;
    }

    return 0;
}
