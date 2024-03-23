#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*16. Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa. */
 int main() {
 	float cat1, cat2, hip;

 	printf("Digite o valor do primeiro cateto (m): ");
 	scanf("%f", &cat1);

 	printf("Digite o valor do segundo cateto (m): ");
 	scanf("%f", &cat2);

 	hip = sqrt(pow(cat1, 2) + pow(cat2, 2));

 	printf("O valor da hipotenusa e igual a: %f\n", hip);

 	system("pause");
 	return 0;

 }