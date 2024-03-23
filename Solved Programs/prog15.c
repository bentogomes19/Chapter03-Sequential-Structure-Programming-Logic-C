#include <stdio.h>
#include <stdlib.h>
/*O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do
distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fá-
brica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:
a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o preço final do veículo. */

int main() {

	float preco_fabrica, perc_lucro, perc_imposto, vlr_lucro, vlr_imposto, pf_veiculo;

	printf("Informe o preco de fabrica do veiculo [R$]: ");
	scanf("%f", &preco_fabrica);

	printf("Informe o percentual de lucro do distribuidor: ");
	scanf("%f", &perc_lucro);

	printf("Informe o percentual de imposto: ");
	scanf("%f", &perc_imposto);

	vlr_lucro = perc_lucro / 100 * preco_fabrica;
	vlr_imposto = perc_imposto / 100 * preco_fabrica;
	pf_veiculo = preco_fabrica + vlr_lucro + vlr_imposto;

	printf("O valor correspondente ao lucro do distribuidor: R$ %.2f\n", vlr_lucro);
	printf("O valor correspondente aos impostos: R$ %.2f\n", vlr_imposto);
	printf("O preco final do veiculo: R$ %.2f\n", pf_veiculo);

	system("pause");
	return 0;

}