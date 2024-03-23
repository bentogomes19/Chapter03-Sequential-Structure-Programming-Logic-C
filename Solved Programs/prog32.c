#include <stdio.h>
#include <stdlib.h>

/*7. Faça um programa que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado. */

int main() {
	float peso, engordar, emagrecer;

	printf("Digite o seu peso em quilos: ");
	scanf("%f", &peso);

	engordar = peso + (peso * 0.15);
	emagrecer = peso - (peso * 0.20);

	printf("O novo peso, se voce engordar 15 porcento sobre o peso digitado: %.2f kg\n", engordar);
	printf("O novo peso, se voce emagrecer 20 porcento sobre o peso digitado: %.2f kg\n", emagrecer);

	system("pause");
	return 0;
}