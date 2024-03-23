#include <stdlib.h>
#include <stdio.h>

/*8. Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas. */

int main() {
	float peso_kg, peso_g;

	printf("Digite o peso da pessoa em quilos:  ");
	scanf("%f", &peso_kg);

	peso_g = peso_kg * 1000;

	printf("O peso em gramas e de: %.2f\n", peso_g);


	system("pause");
	return 0;
}