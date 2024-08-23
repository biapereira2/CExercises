#include <stdio.h>

int main(void){

    char operacao;
    float soma, media;
    int i, j;

    scanf("%c", &operacao);

    float matriz[12][12];

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f", &matriz[i][j]);

            if(i < j){
                soma = soma + matriz[i][j];
            }
        }
    }

    media = soma/66.0;

    if(operacao == 'S'){
        printf("%.1f\n", soma);
    }
    if(operacao == 'M'){
        printf("%.1f\n", media);
    }

    return 0;
}