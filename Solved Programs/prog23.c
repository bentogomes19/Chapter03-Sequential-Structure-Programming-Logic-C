#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Faça um programa que receba um número real, encontre e mostre:
a) a parte inteira desse número;
b) a parte fracionária desse número;
c) o arredondamento desse número. */ 

int main() {
	float n1, inteiro, frac, arred;
	int prog;


	printf("Digite um numero real qualquer: ");
	scanf("%f", &n1);

	// a parte inteira desse numero
	inteiro = (int)n1; // (int)n1 = exibe o numero inteiro, ou seja, se for um numero real com 14,24 ele nos mostrara 14.
	printf("a) A parte inteira desse numero: %.f\n", inteiro);

	//a parte fracionária desse número
	frac = n1 - inteiro;
	printf("b) a parte fracionaria desse numero: %.2f\n", frac);
	//o arredondamento desse número.
	arred = round(n1);
	printf("c) o arredondamento desse numero: %.2f\n", arred);

	printf("Deseja encerrar o programa? Digite 1: ");
	scanf("%d", &prog);

	if (prog == 1) {

		printf("Encerrando programa!!\n");
		exit(0);
	}

	system("pause");
	return 0;

}