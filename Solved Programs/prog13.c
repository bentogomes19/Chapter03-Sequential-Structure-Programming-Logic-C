#include <stdio.h>
#include <stdlib.h>

/*sabe-se que:
pé = 12 polegadas
1 jarda = 3 pés
1 milha = 1,760 jarda
Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados.
a) polegadas;
b) jardas;
c) milhas. */

int main() {

	float pes, pol, jard, mil;

	printf("Informe um numero em pes: ");
	scanf("%f", &pes);

	pol = pes * 12;
	jard = pes / 3;
	mil = jard / 1760;

	printf("a) Polegadas = %.2f\n", pol);
	printf("b) Jardas = %.2f\n", jard);
	printf("a) Milhas = %.2f\n", mil);

	system("pause");
	return 0;

}