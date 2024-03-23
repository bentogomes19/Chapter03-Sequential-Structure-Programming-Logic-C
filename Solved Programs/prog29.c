#include <stdlib.h>
#include <stdio.h>

/*4. Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas,
 considerando peso 2 para a primeira e peso 3 para a segunda. */

int main() {
	float n1, n2, media_ponderada;

	printf("Digite a primeira nota da prova: ");
	scanf("%f", &n1);

	printf("Digite a segunda nota da prova: ");
	scanf("%f", &n2);

	media_ponderada = (n1 * 2 + n2 * 3) / 5;
	printf("A media ponderada da nota1: %.2f e da nota2: %.2f e de: %.2f\n", n1, n2, media_ponderada);

	system("pause");
	return 0;
}