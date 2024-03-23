#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Uma pessoa deseja pregar um quadro em uma parede. Faça um programa para calcular e mostrar a
que distância a escada deve estar da parede. A pessoa deve fornecer o tamanho da escada e a altura em
que deseja pregar o quadro.
lembre-se de que o tamanho da escada deve ser maior que a altura que se deseja alcançar. */
/* x = altura do quadro
   y = distancia da escada em relacao a parede 
   z = medida da escada*/

int main() {
	float x, y, z;

	printf("Informe o tamanho da escada em metros: ");
	scanf("%f", &z);

	printf("Informe a altura que deseja pregar o quadro em metros: ");
	scanf("%f", &x);

	if (x > z) {
		printf("O valor da altura devera ser menor que o tamanho da escada!!!\n");
	}

	y = pow(z,2) - pow(x,2);
	y = sqrt(y);

	printf("A distancia que a escada devera estar da parede e de: %.2f m\n", y);
	system("pause");
	return 0;

}