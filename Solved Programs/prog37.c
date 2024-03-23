#include <stdio.h>
#include <stdlib.h>

/*12. Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule
e mostre a quantidade de salários mínimos que esse funcionário ganha */

int main() {
	float sal_min, sal_funcionario, qtd_salmin;

	printf("Digite o valor do salario minimo(R$): ");
	scanf("%f", &sal_min);

	printf("Digite o valor do salario do funcionario(R$): ");
	scanf("%f", &sal_funcionario);

	qtd_salmin = sal_funcionario / sal_min;

	printf("A quantidade de salarios minimos equivale a: %.2f\n", qtd_salmin);

	system("pause");
	return 0;

}
