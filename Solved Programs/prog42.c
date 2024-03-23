#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*17. Faça um programa que receba o raio, calcule e mostre:
a) o comprimento de uma esfera; sabe-se que c = 2 * p R;
b) a área de uma esfera; sabe-se que A = p R2;
c) o volume de uma esfera; sabe-se que v = ¾ * p R3. */

int main() {
	float r, comp, area, vol, pi;
	pi = 3.141592;

	printf("Informe o raio da circunferencia (m): ");
	scanf("%f", &r);

	comp = 2 * pi * r;
	area = pi * pow(r, 2);
	vol = (4 * pi * pow(r, 3))/ 3;

	printf("a) o comprimento de uma esfera: %.2f m\n", comp);
	printf("b) a area de uma esfera: %.2f m2\n", area);
	printf("c) o volume de uma esfera: %.2f m3\n", vol);

	system("pause");
	return 0;
}