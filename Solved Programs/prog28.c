#include <stdio.h>
#include <stdlib.h>

/*3. Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo
segundo. sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar
com validações. */

int main() {
	float n1, n2, div;
	n2 != 0;

	printf("Digite um numero qualquer: ");
	scanf("%f", &n1);

	printf("Digite um segundo numero qualquer diferente de zero: ");
	scanf("%f", &n2);

	div = n1 / n2;
	printf("A divisao entre %.f / %.f = %.2f\n", n1, n2, div);

	system("pause");
	return 0;

}