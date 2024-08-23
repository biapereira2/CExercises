#include <stdio.h>
#include <string.h>

int main(void){

    int N, pares_iguais = 0, feminino = 0, masculino = 0, teste = 0, valor;
    char str[1500], sexo, num[3];
    
    while (scanf("%d%*c", &N)!= EOF){
        //printf("%d\n", N); 
        scanf("%[^\n]", str);
        //printf("str: %s", str);


        for(unsigned int j = 0; j <= strlen(str); j += 5){
            num[0] = str[j];
            num[1] = str[j+1];
            sexo = str[j+3];
            //printf("%d", tam);

            valor = atoi(num);
        
            if (valor == N){
                pares_iguais++;
                //printf("%d\n", pares_iguais);
                if (sexo == 'F'){
                    feminino++;
                    //printf("%d\n", feminino);
                } else{
                    masculino++;
                    //printf("%d\n", masculino);
                }
            }
        }
    teste++; 
    
    if(teste > 1){
        printf("\n");
    }
    printf("Caso %d:\n", teste);
    printf("Pares Iguais: %d\nF: %d\nM: %d\n", pares_iguais, feminino, masculino);
    masculino = 0;
    feminino = 0;
    pares_iguais = 0;
    }
    return 0;
}