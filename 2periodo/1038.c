#include <stdio.h>

int main(void){

    int codigo, quant;
    float preco;

    scanf("%d %d", &codigo, &quant);

    if (codigo == 1){

        preco = quant * 4.00;
    }
    else if (codigo == 2){

        preco = quant * 4.50;
    }
    else if (codigo == 3){

        preco = quant * 5.00;
    }
    else if (codigo == 4){

        preco = quant * 2.00;
    }
    else {

        preco = quant * 1.50;
    }

    printf("Total: R$ %.2f\n", preco);

    return 0;

}