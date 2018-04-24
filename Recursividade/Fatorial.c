#include <stdlib.h>
#include <stdio.h>

int Fatorial(int n){
   if(n <= 1){
        return 1;
    } else {
        return n * Fatorial(n - 1);
    }
}

int main(){
    int i;

    printf("Digite um numero: ");
    scanf("%d", &i);

    Fatorial(i);

    return 0;
}
