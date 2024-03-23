#include <stdio.h>
#include <stdlib.h>

/*9. Faça um programa que calcule e mostre a área de um trapézio.
sabe-se que: A = ((base maior + base menor) * altura)/2 */

int main () {
	float base_maior, base_menor, altura, a;

	printf("Digite a base maior do trapezio: ");
	scanf("%f", &base_maior);

	printf("Digite a base menor do trapezio: ");
	scanf("%f", &base_menor);

	printf("Digite a altura do trapezio: ");
	scanf("%f", &altura);

	a = ((base_maior + base_menor) * altura) / 2;

	printf("A area do trapezio foi de: A = %.2f\n", a);

	system("pause");
	return 0;
}