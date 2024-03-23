#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*10. Faça um programa que calcule e mostre a área de um quadrado. sabe-se que: A = lado * lado. */

int main() {
	float lado, area;

	printf("Digite o lado do quadrado: ");
	scanf("%f", &lado);

	area = pow(lado, 2);

	printf("A area do quadrado e igual: %.2f\n", area);

	system("pause");
	return 0;
}