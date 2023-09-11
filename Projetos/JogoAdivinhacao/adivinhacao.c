#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	printf("**************************************\n");
	printf("*Bem vindo ao meu jogo de adivinhação*\n");
	printf("**************************************\n");

	srand(time(NULL));
	int numeroSecreto = rand() % 100;
	int chute;

	for(int i = 1; i <= 3; i++) {
		printf("Tentativa %d de 3\n", i);
		printf("Qual é o seu chute? \n");
		scanf("%d", &chute);

		if (chute == numeroSecreto) {
			printf("Parabens! voce acertou, o numero secreto era:  %d. \n", numeroSecreto) ;
			break;
		} else if(chute > numeroSecreto && i <= 2) {
			printf("Voce errou, sou chute foi maior que o numero secreto.\n\n");
		} else if(chute < numeroSecreto && i <= 2) {
			printf("Voce errou, sou chute foi menor que o numero secreto.\n \n");
		} 
		if(chute != numeroSecreto && i == 3) {
			printf("Que pena parece que suas tentativas acaparam, o numero secreto era %d. \n", numeroSecreto);
		}

	}
}