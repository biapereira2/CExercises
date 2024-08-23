#include <stdio.h>

int main(void){

    int num, i, j;
    float matriz[12][12], calculo;
    char operacao;

    scanf("%d", &num);
    scanf("\n%c", &operacao);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f", &matriz[i][j]);
            if(j == num){
                calculo += matriz[i][num];
            }
        }
    }
    
    if(operacao == 'S'){
        printf("%.1f\n", calculo);
    }
    else{
            calculo = (calculo + matriz[i][j]) / 12;

            printf("%.1f\n", calculo);
        }
    return 0;

}