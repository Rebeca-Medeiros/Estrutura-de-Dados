#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *proximo;
} tNode;

void Inserir(int x){
    tNode *link = (link*) malloc(sizeof(TNode));
    link->data = x;
    link->proximo = NULL;
    
    /*if(link != NULL){
      link->next =
    
    */
}

void ExibirLista();

int main(){
    tNode no;
    node = NULL;

    int i, n, valor;

    printf("Quantos numeros? \n");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
      printf("Digite os numeros: \n");
      scanf("%d", &valor);
      Inserir(valor);
      Exibir();
    }
  
  return 0;
}
