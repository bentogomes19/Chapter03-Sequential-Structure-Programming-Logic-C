#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre
o valor do aumento e o novo salário. */
int main() {

	float sal, perc, aumento, nsal;

	printf("Informe o salario do funcionario: ");
	scanf("%f", &sal);

	printf("Informe o percentual de aumento: ");
	scanf("%f", &perc);

	aumento = perc / 100 * sal;

	nsal = sal + aumento;

	printf("O valor do aumento foi de: R$ %.2f\n", aumento);
	printf("O novo salario do funcionario foi de: R$ %.2f\n", nsal);


	system("pause");
	return 0;

}