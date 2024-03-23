#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que calcule e mostre a área de um triângulo. sabe-se que: Área = (base * altura)/2 */

int main() {

	float area, base, altura;

	printf("Informe a base do triangulo: ");
	scanf("%f", &base);

	printf("Informe a altura do triangulo: ");
	scanf("%f", &altura);

	area = (base * altura) / 2;

	printf("A area do triangulo e de: %.2f\n", area);
	
	system("pause");
	return 0;

}