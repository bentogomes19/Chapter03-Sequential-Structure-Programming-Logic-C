/*Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber,
sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também sobre o salário base. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	float sal, salreceber, grat, imposto;

	printf("Informe o salario do funcionario: ");
	scanf("%f", &sal);

	grat = 0.05 * sal;
	imposto = 0.07 * sal;
	salreceber = sal - imposto + grat;

	printf("O salario a receber sera de: R$ %.2f\n", salreceber);

	system("pause");

	return 0;
}