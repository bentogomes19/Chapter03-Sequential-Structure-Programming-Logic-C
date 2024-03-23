#include <stdio.h>
#include <stdlib.h>

/*24. Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela
vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libra esterlina. sabe-
-se que a cotação do dólar é de R$ 1,80; do marco alemão, de R$ 2,00; e da libra esterlina, de R$ 3,57. O
programa deve fazer as conversões e mostrá-las. */ 

int main() {
	float dolar, marco_alemao, libra, reais;

	printf("Digite a quantidade de dinheiro em reais (R$) >> ");
	scanf("%f", &reais);

	dolar = reais / 1.80;
	marco_alemao = reais / 2.00;
	libra = reais / 3.57;

	printf(" R$ %.2f >> Dolar: US$ %.2f >> Marco Alemao: %.2f DM >> Libras Esterlina: %.2f GDB\n", reais, dolar, marco_alemao, libra);

	system("pause");
	return 0;

}