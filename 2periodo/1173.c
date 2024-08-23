#include <stdio.h>

int main(void){

    int valor, vetor[10], i;

    scanf("%d", &valor);

    for(i = 1; i < 10; i++){

        vetor[0] = valor;
        vetor[i] = vetor[i-1]*2;
    }
    for(i = 0; i < 10; i++){

        printf("N[%d] = %d\n", i,vetor[i]);
    }
    return 0;

}