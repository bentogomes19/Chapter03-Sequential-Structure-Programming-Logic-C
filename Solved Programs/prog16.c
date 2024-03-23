#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo, calcule e
mostre o salário a receber, seguindo estas regras:
a) a hora trabalhada vale a metade do salário mínimo.
b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada.
c) o imposto equivale a 3% do salário bruto.
d) o salário a receber equivale ao salário bruto menos o imposto. */

int main() {
	float numero_ht, ht, vlr_sal, sal_receber, sal_bruto, imp;

	printf("Informe o numero de horas trabalhadas: ");
	scanf("%f", &numero_ht);

	printf("Informe o valor do salario minimo atual (R$): ");
	scanf("%f", &vlr_sal);

	ht = vlr_sal / 2;
	sal_bruto = numero_ht * ht;
	imp = 0.03 * sal_bruto;
	sal_receber = sal_bruto - imp;

	printf("Salario a receber: R$ %.2f\n", sal_receber);
	printf("Imposto descontado: R$ %.2f\n", imp);
	printf("Salario bruto com as horas trabalhadas: R$ %.2f\n", sal_bruto);
	printf("Valor da hora trabalhada: R$ %.2f\n", ht); 

	system("pause");
	return 0;
}