#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Faça um programa que calcule e mostre a área de um círculo. sabe-se que: Área = pi * R2 */

int main() {

	float pi, r, area;

	printf("Informe o raio do circulo: ");
	scanf("%f", &r);

	pi = 3.1415;

	area = pi * pow(r,2);

	printf("Area do circulo: %f\n", area);

	system("pause");
	return 0;
} 