#include <stdio.h>
#include <stdlib.h>

/*6. Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa
que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu
salário final. */

int main() {
	float sal_funcionario, vlr_vendas, comissao, sal_final;

	printf("Digite o seu salario fixo em reais: ");
	scanf("%f", &sal_funcionario);

	printf("Digite o valor de suas vendas: ");
	scanf("%f", &vlr_vendas);

	comissao = vlr_vendas * 0.04;
	sal_final = sal_funcionario + comissao;

	printf("A comissao a receber sera de: R$ %.2f\n", comissao);
	printf("O salario final do funcionario sera de : R$ %.2f\n", sal_final);

	system("pause");

	return 0;
}