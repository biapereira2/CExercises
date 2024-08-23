#include <stdio.h>

int main(void){

    int numero, htrabalho;
    float valor_hora, salario;
    
    scanf("%d", &numero);
    scanf("%d", &htrabalho);
    scanf("%f", &valor_hora);

    salario = htrabalho * valor_hora;

    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}