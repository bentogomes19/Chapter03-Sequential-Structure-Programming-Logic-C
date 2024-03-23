#include <stdio.h>
#include <stdlib.h>
//Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada
int main() {

	float nota1, nota2, nota3, mp;
	int p1, p2, p3, somap;

	printf("Digite a nota da prova 01: ");
	scanf("%f", &nota1);

	printf("Digite o peso da prova 01: ");
	scanf("%d", &p1);

	printf("Digite a nota da prova 02: ");
	scanf("%f", &nota2);

	printf("Digite o peso da prova 02: ");
	scanf("%d", &p2);

	printf("Digite a nota da prova 03: ");
	scanf("%f", &nota3);

	printf("Digite o peso da prova 03: ");
	scanf("%d", &p3);

	somap = p1 + p2 + p3;
	mp = (nota1*p1 + nota2*p2 + nota3*p3) / somap;

	printf("A media ponderada final e: %.2f\n", mp);

	system("pause");
	return 0;

}