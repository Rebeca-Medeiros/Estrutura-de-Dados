#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;

    printf("TROCA DE VALORES \n");
    printf("i = %d | j = %d", *a, *b);
}


int main(){
    int i, j;

    printf("Digite os valores de i e j: ");
    scanf("%d %d", &i, &j);

    printf("\n");

    troca(&i, &j);

    return 0;
}
