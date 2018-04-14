#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 1;
    int *p;

    p = &i;
    //*p = 12;
    //i e p ficam 12 com essa mudanca

    printf("i = %x \n", i);
    printf("p = %x \n", *p);

    return 0;
}
