#include <stdio.h>
#include <stdlib.h>

/*1. Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo
segundo. */

int main() {
	int n1, n2, sub;

	printf("Digite um numero inteiro qualquer: ");
	scanf("%d", &n1);

	printf("Digite um segundo numero inteiro qualquer: ");
	scanf("%d", &n2);

	sub = n1 - n2;

	printf("%d\n", sub);

	system("pause");
	return 0;
	
}