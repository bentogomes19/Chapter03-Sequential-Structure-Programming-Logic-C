#include <stdio.h>
#include <stdlib.h>

/*15. João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar
multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário de
João. */ 

int main() {
	float salario_joao, conta1, conta2, salario_joao2, multa1, multa2;

	printf("Joao: Digite o seu salario (R$): ");
	scanf("%f", &salario_joao);

	printf("Joao: Digite o valor da primeira conta atrasada (R$): ");
	scanf("%f", &conta1);
	
	printf("Joao: Digite o valor da segunda conta atrasada (R$): ");
	scanf("%f", &conta2);

	multa1 = conta1 * 0.02;
	multa2 = conta2 * 0.02;

	salario_joao2 = salario_joao - ((conta1 + multa1) + (conta2 + multa2));
	printf("Joao devera ter um salario restante de: R$ %.2f\n", salario_joao2);

	system("pause");
	return 0;
}