#include <stdlib.h>
#include <stdio.h>

/*19. sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2, deve-se usar 18 W
de potência. Faça um programa que receba as duas dimensões de um cômodo (em metros), calcule e mostre
a sua área (em m2) e a potência de iluminação que deverá ser utilizada. */

int main() {
	float l1, l2, area, pot;

	printf("Digite o lado do primeiro comodo em metros: ");
	scanf("%f", &l1);

	printf("Digite o lado do segundo comodo em metros: ");
	scanf("%f", &l2);

	area = l1 * l2; // m2 --> 18w
	pot = 18 * area;

	printf("A area do comodo e de: %.2f m2\n", area);
	printf("A potencia de iluminacao que devera ser utilizada e de: %.2f Watts\n", pot);


	system("pause");
	return 0;
}