#include <stdio.h>
#include <stdlib.h>

/*cada degrau de uma escada tem X de altura. Faça um programa que receba essa altura e a altura que
o usuário deseja alcançar subindo a escada, calcule e mostre quantos degraus ele deverá subir para
atingir seu objetivo, sem se preocupar com a altura do usuário. Todas as medidas fornecidas devem
estar em metros. */ 

int main() {

	float x_altura_degrau, x_altura_usuario, degraus;


	printf("Informe a altura do degrau da escada em metros: ");
	scanf("%f", &x_altura_degrau);

	printf("Informe a altura que voce deseja alcancar subindo a escada em metros: ");
	scanf("%f", &x_altura_usuario);

	degraus = x_altura_usuario / x_altura_degrau;
	printf("Voce devera subir: %.f degraus para atingir seu objetivo\n", degraus);

	system("pause");
	return 0;

}