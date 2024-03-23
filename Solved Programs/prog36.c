#include <stdio.h>
#include <stdlib.h>

/*11. Faça um programa que calcule e mostre a área de um losango. sabe-se que: A = (diagonal maior * diagonal menor)/2. */

int main() {
	float diagonal_maior, diagonal_menor, area;

	printf("Digite a diagonal maior do losango: ");
	scanf("%f", &diagonal_maior);

	printf("Digite a diagonal menor do losango: ");
	scanf("%f", &diagonal_menor);

	area = (diagonal_maior * diagonal_menor) / 2;

	printf("A area do losango = %.2f", area);

	system("pause");
	return 0;
}