#include <stdio.h>

int main(void){

    int t, vetor[1000], cont = 0, i;

    scanf("%d", &t);

    for(i = 0; i < 1000; i++){

        vetor[i] = cont;
        cont++;

        if(cont == t){
            cont = 0;
        }
        
    
        printf("N[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}