#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro. */

int main() {

	float num1, num2, x, y;

	printf("Insira um numero positivo maior que zero: ");
	scanf("%f", &num1);

	printf("Insira um segundo numero positivo maior que zero: ");
	scanf("%f", &num2);

	x = pow(num1,num2);
	y = pow(num2, num1);

	printf("resultado de x = %.f\n", x);
	printf("Resultado de y = %.f\n", y);



	system("pause");
	return 0;

}