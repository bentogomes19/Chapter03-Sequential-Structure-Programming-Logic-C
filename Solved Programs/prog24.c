#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba uma hora formada por hora e minutos (um número real), calcule e
mostre a hora digitada apenas em minutos. lembre-se de que:
■■ para quatro e meia, deve-se digitar 4.30;
■■ os minutos vão de 0 a 59. */

int main() {

	float hora, min, convert, h;

	printf("Digite o horario atual: ");
	scanf("%f", &hora);

	h = (int)hora;
	min = hora - h;

	convert = (60 * h) + (100*min);
	printf("%.f minutos\n", convert);


	system("pause");
	return 0;
}