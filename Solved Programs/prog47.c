#include <stdio.h>
#include <stdlib.h>

/*22. Faça um programa que receba o número de lados de um polígono convexo, calcule e mostre o número
de diagonais desse polígono. sabe-se que ND = N * (N − 3)/2, em que N é o número de lados do
polígono. */

int main() {
	int n, nd;
	char nome[22];
	printf(">>>>>>>> Digite seu nome de usuario: ");
	scanf("%s", &nome);

	printf("%s --> Digite o numero de lados de um poligono convexo: ", nome);
	scanf("%d", &n);

	nd = (n * (n - 3)) / 2;

	printf("%s --> o numero de diagonais desse poligono e de: %d\n", nome, nd);

	system("pause");
	return 0;
}