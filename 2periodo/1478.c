#include <stdio.h>

int main(void){

    int N, i, j;

    do{
        scanf("%d", &N);

        if(N == 0){
            break;
        }

        int matriz[N][N];

        for(i = 0; i < N; i++){
            for(j = 0; j < N; j++){
                if(i == j){
                    matriz[i][j] = 1;
                }
                if(i < j){
                    matriz[i][j] = j - i + 1;
                }
                if(i > j){
                    matriz[i][j] = i - j + 1;
                }

                
            }
        }

        for(i = 0; i < N; i++){
            for(j = 0; j < N; j++){
                if(j == 0){
                printf("%3d", matriz[i][j]);
                }else{
                    printf(" %3d", matriz[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }while(1);

    return 0;
}