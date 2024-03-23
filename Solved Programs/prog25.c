#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*Faça um programa que receba o custo de um espetáculo teatral e o preço do convite desse espetáculo.
Esse programa deverá calcular e mostrar a quantidade de convites que devem ser vendidos para que,
pelo menos, o custo do espetáculo seja alcançado. */

int main() {

	float custo, preco, qtd;

	printf("Digite o custo do espetaculo em reais: ");
	scanf("%f", &custo);

	printf("Digite o preco do convite em reais: ");
	scanf("%f", &preco);

	qtd = custo / preco;

	printf("Quantidade de convites a serem vendidos devera ser de: %.f ingressos\n", qtd);

	system("pause");
	return 0;
}