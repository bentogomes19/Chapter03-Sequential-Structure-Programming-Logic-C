#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se
que este sofreu um aumento de 25%.*/

int main() {

	float sal, nsal;

	printf("Digite o salario do funcionario: ");
	scanf("%f", &sal);

	nsal = sal + (0.25 * sal);

	printf("O novo salario do funcionario e de: %.2f\n", nsal);

	system("pause");
	return 0;

}