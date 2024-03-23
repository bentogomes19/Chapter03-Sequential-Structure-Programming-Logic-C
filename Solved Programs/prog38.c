#include <stdio.h>
#include <stdlib.h>

/*13. Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário.
Exemplo:
Digite um número: 5
5 × 0 = 0
5 × 1 = 5
5 × 2 = 10
5 × 3 = 15
5 × 4 = 20
5 × 5 = 25
5 × 6 = 30
5 × 7 = 35
5 × 8 = 40
5 × 9 = 45
5 × 10 = 50 */

int main() {
	int n, tab, i;

	printf("Digite um numero: ");
	scanf("%d", &n);

	for (i=0; i<=10; i++) {
		tab = n * i;
		printf("%d x %d = %d\n", n, i, tab);
	}

	system("pause");
	return 0;
}
