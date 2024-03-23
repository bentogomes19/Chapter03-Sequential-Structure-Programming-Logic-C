#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) a idade dessa pessoa;
b) quantos anos ela terá em 2050. */

int main() {

	int nasc, atual, idade, idade_2050;

	printf("Informe o ano de nascimento: ");
	scanf("%d", &nasc);

	printf("Informe o ano atual: ");
	scanf("%d", &atual);

	idade = atual - nasc;
	idade_2050 = 2050 - nasc;

	printf("Sua idade atual e: %d\n", idade);
	printf("Sua idade no ano de 2050: %d\n", idade_2050);

	system("pause");
	return 0;

}