#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*18. Faça um programa que receba uma temperatura em celsius, calcule e mostre essa temperatura em
Fahrenheit. sabe-se que F = 180*(c + 32)/100. */

int main(void) {
	setlocale(LC_ALL, "pt_BR.utf8");
	float celsius, f;

	printf("Informe a temperatura do seu local atual (C): ");
	scanf("%f", &celsius);

	f = (9 * celsius + 160) / 5;

	printf("A temperatura informada convertida para Fahrenheit = %.2f F\n", f);

	system("pause");
	return 0;
}