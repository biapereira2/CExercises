#include <stdio.h>

int verifica_sete(int numero){
    int digito;
    while(numero != 0){
        digito = numero % 10;

        if(digito == 7){
            return 1;
        }
        
        numero /= 10;
    }
    return 0;
}

int main(void){

    int N = 1, M = 1, K = 1;
    scanf("%d %d %d", &N, &M, &K);

    while(N != 0 && M != 0 && K != 0){

        int bateu_palma = 0, i = 1, palmas = 0, valor = 1, incrementa = 1;
        while(!bateu_palma){
            //printf("Pessoa: %d | Valor: %d\n", i, valor);
            if (i == M && (valor % 7 == 0 || verifica_sete(valor))){
                palmas++;
                //printf("=== Palmas: %d ===\n", palmas);
            }
            if (palmas == K){
                printf("%d\n", valor);
                bateu_palma = 1;
            }
            if(incrementa){
                i++;
                if(i == N){
                    incrementa = 0;
                }
            } else{
                i--;
                if(i == 1){
                    incrementa = 1;
                }
            }
            valor++;
            
        }
        scanf("%d %d %d", &N, &M, &K);
    }

    return 0;
}