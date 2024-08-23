#include <stdio.h>

int main(void){

    int vetor_par[5], vetor_impar[5], valor, i = 0, t, contimp = 0, contpar = 0;

    while(i < 15){

        scanf("%d", &valor);

        if (valor % 2 == 0){

            vetor_par[contpar] = valor;
            contpar++;
        
            if (contpar == 5){
                
                for(t = 0; t < 5; t++){
                    printf("par[%d] = %d\n", t, vetor_par[t]);
                }
                contpar = 0;
            }

        }else{

            vetor_impar[contimp] = valor;
            contimp++;

            if(contimp == 5){

                for(t = 0; t < 5; t++){
                    printf("impar[%d] = %d\n", t, vetor_impar[t]);
                }
                contimp = 0;
            }
        }

        i++;
    }


    if(contimp > 0){
        for(t = 0; t < contimp; t++){

            printf("impar[%d] = %d\n", t, vetor_impar[t]);

        }
    }
    if(contpar > 0){
        for(t = 0; t < contpar; t++){

            printf("par[%d] = %d\n", t, vetor_par[t]);
            
        }
    }

    return 0;
}