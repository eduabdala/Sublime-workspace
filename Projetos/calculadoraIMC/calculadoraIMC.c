#include <stdio.h>

void main()
{
    int peso;
    float altura, imc;

    printf("Digite seu peso: \n");
    scanf("%d", &peso);
    printf("Digite sua altura: \n");
    scanf("%f", &altura);
    imc = peso / (altura * altura);

    printf("Seu IMC é: %f \n", imc); 
}