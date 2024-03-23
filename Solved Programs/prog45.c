#include <stdio.h>
#include <stdlib.h>

/*20. Faça um programa que receba a medida do ângulo formado por uma escada apoiada no chão
 e a distância em que a escada está da parede, calcule e mostre a medida da escada para que
 se possa alcançar sua ponta. */

int main() {
	float angulo, dist, x, pi, convert_rad;

	printf("Digite a medida do angulo da escada e a parede: ");
	scanf("%f", &angulo);

	printf("Digite a distancia em que a escada esta da parede: ");
	scanf("%f", &dist);

	pi = 3.141592;
	convert_rad = (angulo * pi) / 180;
	x = dist / convert_rad;

	printf("A medida da escada devera ser de: %.2f m\n", x);




	system("pause");
	return 0;
}