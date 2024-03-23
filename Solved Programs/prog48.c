#include <stdio.h>
#include <stdlib.h>

/*23. Faça um programa que receba a medida de dois ângulos de um triângulo, calcule e mostre a medida do
terceiro ângulo. sabe-se que a soma dos ângulos de um triângulo é 180 graus. */

int main() {
	float a1, a2, a3, soma;
	char nome[25];
	soma = 180;
	printf("Digite o nome de usuario >>> ");
	scanf("%s", &nome);

	printf("%s > Digite o valor do primeiro angulo: ", nome);
	scanf("%f", &a1);

	printf("%s > Digite o valor do segundo angulo: ", nome);
	scanf("%f", &a2);

	a3 = soma - a1 - a2;
	printf("%s > A medida do terceiro angulo e igual a: %.2f\n", nome, a3);

	system("pause");
	return 0;
}