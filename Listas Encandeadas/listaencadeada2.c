#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//lista de livros

typedef struct livro{
    char nome[10];
    struct livro *prox;
} tLivro;

struct livro *aloca(){
    return malloc(sizeof(struct livro));
}

void adicionaLivro(struct livro *primeiro){
    struct livro *aux, *novo;

    aux = primeiro;

    //procurando proxima posição válida para inserir novo elemento
    while(aux->prox != NULL){
        aux = aux->prox;
    }

    novo = aloca();

    printf("Digite o nome: \n");
    scanf("%c", &novo->prox);
    novo->prox = NULL;

    aux->prox = novo;
}

int main(){
    struct livro acervo;//primeiro elemento da lista

    acervo.prox = NULL;

    adicionaLivro(&acervo);

    printf("%s \n", acervo.prox->nome);

    return 0;
}
