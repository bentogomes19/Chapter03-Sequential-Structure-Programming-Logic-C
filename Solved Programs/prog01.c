#include <stdio.h>
#include <stdlib.h>
//Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.
int main() {

	int a, b, c, d, soma;

	printf("Digite um numero inteiro: ");
	scanf("%d", &a);

	printf("Digite um segundo numero inteiro: ");
	scanf("%d", &b);

	printf("Digite um terceiro numero inteiro: ");
	scanf("%d", &c);

	printf("Digite um quarto numero inteiro: ");
	scanf("%d", &d);

	soma = a + b + c + d;

	printf("A SOMA DOS QUATRO NUMEROS INFORMADOS E: %d\n", soma);
	system("pause");
	return 0;

}