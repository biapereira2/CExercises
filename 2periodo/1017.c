#include <stdio.h>

int main(void){

    int tempo, vmedia, km;
    float litros;

    scanf("%d %d", &tempo, &vmedia);

    km = tempo * vmedia;
    litros = (float) km / 12;

    printf("%.3f\n", litros);

    return 0;
}