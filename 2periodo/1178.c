#include <stdio.h>

int main(void){

    double x, vetor[100];
    int i;

    scanf("%lf", &x);

    for(i = 0; i < 100; i++){
        if(i == 0){
            vetor[0] = x;

        }else{
        vetor[i] = (vetor[i-1])/2;
        
        }
        printf("N[%d] = %.4lf\n", i, vetor[i]);
    }
    return 0;
}