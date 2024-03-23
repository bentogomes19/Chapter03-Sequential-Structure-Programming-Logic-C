/* Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber,
sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base.  */

#include <stdio.h>
#include <stdlib.h>

int main() {

	float sal, grat, imposto, salreceber;

	printf("Informe o salario do funcionario: ");
	scanf("%f", &sal);

	grat = 50;
	imposto = 0.10 * sal;
	salreceber = sal - imposto + grat;

	printf("O Salario a receber sera de: R$ %.2f\n", salreceber);
	system("pause");

	return 0;

}