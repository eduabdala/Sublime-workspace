#include <stdio.h>

int main(){
	int idade = 0;
	int peso = 0;

	printf("valor inicial da idade: %d. \n", idade);

	printf("Digite uma idade: \n");
	scanf("%d", &idade);

	printf("Digite um ano: \n");
	scanf("%d", &peso);

	printf("Idade informada: %d.\n", idade);
	printf("Ano informado: %d. \n", peso);
}