#include <stdio.h>

int main()
{
	printf("**************************************\n");
	printf("*Bem vindo ao meu jogo de adivinhação*\n");
	printf("**************************************\n");

	int numeroSecreto = 43;
	int chute;

	for(int i = 1; i <= 3; i++) {
		printf("Tentativa %d de 3\n", i);
		printf("Qual é o seu chute? \n");
		scanf("%d", &chute);

		if (chute == numeroSecreto) {
			printf("Parabens, voce acertou o Numero Secreto!, seu chute foi %d. \n", chute);
			break;
		} else if(chute != numeroSecreto && i < 3) {
			printf("Voce errou, tente novamente\n");
		} else {
			printf("Suas tentativas acaparam e voce nao acertou.\n");
		}

	}
}