/*Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o
valor do rendimento e o valor total depois do rendimento. */ 

#include <stdio.h>
#include <stdlib.h>

int main() {

	float deposito, juros, vlr_rendimento, total;

	printf("Informe o valor do deposito (R$): ");
	scanf("%f", &deposito);

	printf("Informe o valor da taxa de juros (%): ");
	scanf("%f", &juros);

	vlr_rendimento = deposito * juros/100;
	total = deposito + vlr_rendimento;

	printf("O valor total depois do rendimento foi de: R$ %.2f\n", total);

	system("pause");
	return 0;

}