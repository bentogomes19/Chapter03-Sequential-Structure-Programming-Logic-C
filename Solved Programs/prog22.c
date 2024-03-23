#include <stdio.h>
#include <stdlib.h>

/*sabe-se que o quilowatt de energia custa um quinto do salário mínimo. Faça um programa que receba o valor do salário mínimo 
e a quantidade de quilowatts consumida por uma residência. calcule e mostre:
a) o valor de cada quilowatt;
b) o valor a ser pago por essa residência;
c) o valor a ser pago com desconto de 15%. */

int main() {
	float sal_minimo, qtd_kw, vlr_res, vlr_desc, custo_kw;

	printf("Digite o valor do salario minimo atual (R$): ");
	scanf("%f", &sal_minimo);

	printf("Digite a quantidade de quilowatts consumida na sua residencia Kw: ");
	scanf("%f", &qtd_kw);

	custo_kw = sal_minimo / 5;
	vlr_res = custo_kw * qtd_kw;
	vlr_desc = vlr_res - (0.15 * vlr_res);

	printf("a) o valor de cada quilowatt: R$ %.2f\n", custo_kw);
	printf("b) O valor a ser pago por essa residencia: R$ %.2f\n", vlr_res);
	printf("c) O valor a ser pago com desconto de 15 porcento: R$ %.2f\n", vlr_desc);

	system("pause");
	return 0;
}
