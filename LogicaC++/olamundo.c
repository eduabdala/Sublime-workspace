#include <stdio.h>

int main(int argc, char** argv)
{
	int i;
	
	do{
		printf("\n Escolha um sabor \n");
		
		printf("\t (1) ...flocos \n");
		printf("\t (2) ...morango \n");
		printf("\t (3) ...chocolate \n");
		
		scanf("%d", &i);
		
	} while((i<1) || (i>3));
	
	switch(i){
		case 1:
			printf("\t\t Vc escolheu flocos");
			break;
		case 2:
			printf("\t\t Vc escolheu morango");
			break;
		case 3:
			printf("\t\t Vc escolheu chocolate");
			break;
	}
}
