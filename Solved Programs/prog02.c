#include <stdio.h>
#include <stdlib.h>
//Faça um programa que receba três notas, calcule e mostre a média aritmética.

int main() {

	float nota1, nota2, nota3, ma;

	printf("Digite a nota da prova 01: ");
	scanf("%f", &nota1);

	printf("Digite a nota da prova 02: ");
	scanf("%f", &nota2);

	printf("Digite a nota da prova 02: ");
	scanf("%f", &nota3);

	ma = (nota1 + nota2 + nota3) / 3;

	printf("Sua media aritmetica foi de: %.2f\n", ma);

	system("pause");
	return 0;

}