#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
/*Faça um programa que receba a medida do ângulo (em graus) formado por uma escada apoiada no
chão e encostada na parede e a altura da parede onde está a ponta da escada. calcule e mostre a medida dessa escada.
Observação: as funções trigonométricas implementadas nas linguagens de programação trabalham
com medidas de ângulos em radianos. */

int main() {

	float ang, alt, escada, radiano;

	printf("Informe a medida do angulo (em graus): ");
	scanf("%f", &ang);

	printf("Informe a altura da parede em metros: ");
	scanf("%f", &alt);

	radiano = ang * 3.14 / 180;
	escada = alt / sin(radiano);

	printf("A medida dessa escada e: %.2f m\n", escada);

	system("pause");
	return 0;

}