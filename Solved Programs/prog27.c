#include <stdio.h>
#include <stdlib.h>

/*2. Faça um programa que receba três números, calcule e mostre a multiplicação desses números */

int main() {
	int n1, n2, n3, mult;

	printf("Digite um primeiro numero: ");
	scanf("%d", &n1);

	printf("Digite um segundo numero: ");
	scanf("%d", &n2);

	printf("Digite um terceiro numero: ");
	scanf("%d", &n3);

	mult = n1 * n2 * n3;

	printf(" A multiplicação entre %d x %d x %d = %d\n", n1, n2, n3, mult);


	system("pause");
	return 0;

}