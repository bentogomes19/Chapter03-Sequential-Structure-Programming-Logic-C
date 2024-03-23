#include <stdio.h>
#include <stdlib.h>

/*Um trabalhador recebeu seu salário e o depositou em sua conta bancária. Esse trabalhador emitiu dois
cheques e agora deseja saber seu saldo atual. sabe-se que cada operação bancária de retirada paga
CPMF de 0,38% e o saldo inicial da conta está zerado. */ 

int main() {
	float salario, ch1, ch2, cpmf, saldo;
	saldo = 0;
	cpmf = 0.0038;

	printf("Informe o seu salario que voce recebeu: ");
	scanf("%f", &salario);

	printf("Informe o valor do cheque 1: ");
	scanf("%f", &ch1);

	printf("Informe o valor do cheque 2: ");
	scanf("%f", &ch2);

	saldo = salario - (ch1 * cpmf) - (ch2 * cpmf) - ch1 - ch2;

	printf("O seu saldo atual e: R$ %.2f\n", saldo);

	system("pause");
	return 0;

}