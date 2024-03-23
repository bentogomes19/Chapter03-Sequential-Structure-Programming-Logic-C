#include <stdlib.h>
#include <stdio.h>

/*25. Faça um programa que receba uma hora (uma variável para hora e outra para minutos), calcule e
mostre:
a) a hora digitada convertida em minutos;
b) o total dos minutos, ou seja, os minutos digitados mais a conversão anterior;
c) o total dos minutos convertidos em segundos. */ 

int main() {
	int hora, min, total_min, seg, convert_min;

	printf("Digite a hora: ");
	scanf("%d", &hora);

	printf("Digite os minutos: ");
	scanf("%d", &min);

	convert_min = hora * 60;
	total_min = min + convert_min;
	seg = total_min * 60;

	printf("A hora digitada convertida em minutos: %d min\n", convert_min);
	printf("O total dos minutos, ou seja, os minutos digitados mais a conversao anterior: %d min\n", total_min);
	printf("O total dos minutos convertidos em segundos.: %d seg\n", seg);





	system("pause");
	return 0;
}