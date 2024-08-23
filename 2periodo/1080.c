#include <stdio.h>

int main(void){

    int i, maior = 0, numero[100], posicao;

    for (i = 0; i <= 100; i++){
        scanf("%d", &numero[i]);

        if(numero[i] > maior){
            maior = numero[i];
            posicao = i;
        }
    }

    printf("%d\n", maior);
    printf("%d\n", posicao + 1);

    return 0;

}