#include <stdio.h>
#include <stdlib.h>

int verifica_maior(int n1, int n2){
    int maiorAB =  (n1 + n2 + abs(n1 - n2))/2;

    return maiorAB;
}

int main(void){

    int valor1, valor2, valor3;

    scanf("%d %d %d", &valor1, &valor2, &valor3);

    if (verifica_maior(valor1, valor2) > valor3){
        printf("%d eh o maior\n", verifica_maior(valor1, valor2));
    } else{
        printf("%d eh o maior\n", valor3);
    }

    return 0;
}