#include <stdio.h>
#include <stdlib.h>

/*5. Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se
que este sofreu um desconto de 10% */

int main() {
	float produto, novo_preco, desc;
	desc = 0.1;

	printf("Digite o preco do produto R$: ");
	scanf("%f", &produto);

	novo_preco = produto + (produto * 0.1) - desc;
	printf("O novo preco do produto sera de: R$ %.2f\n", novo_preco);

	system("pause");
	return 0;
}