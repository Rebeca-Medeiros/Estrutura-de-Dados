#include <stdio.h>
#include <stdlib.h>

int main(){
    int meuInteiro;
    int *ponteiroParaInteiro; // Vai apontar para a variavel int

    ponteiroParaInteiro = &meuInteiro; // Ponteiro iniciado com endereço da variavel

    float meuFloat = 3.14;
    float *ponteiroParaFloat = &meuFloat;

    printf("%f", meuFloat);

    puts("");

    *ponteiroParaFloat = 1.6;

    printf("%f", meuFloat);

    puts("");

    return 0;
}
