#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
a) o número digitado ao quadrado
b) o número digitado ao cubo;
c) a raiz quadrada do número digitado;
d) a raiz cúbica do número digitado */

int main() {

	float num, quad, cub, raiz2, raiz3;
	
	printf("Digite um numero positivo maior do que zero: ");
	scanf("%f", &num);

	if (num > 0) {
		quad = pow(num,2);
		cub = pow(num,3);
		raiz2 = sqrt(num);
		raiz3 = cbrt(num);

		printf("a) %.2f\n", quad);
		printf("b) %.2f\n", cub);
		printf("c) %.2f\n", raiz2);
		printf("c) %.2f\n", raiz3);
	}

	else {
		printf("O numero deve ser maior que zero e positivo!!\n");
	}


	system("pause");
	return 0;

}