#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*21. Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número
de horas extras trabalhadas, calcule e mostre o salário a receber, de acordo com as regras a seguir:
a) a hora trabalhada vale 1/8 do salário mínimo;
b) a hora extra vale 1/4 do salário mínimo;
c) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
d) a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor
da hora extra;
e) o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras.
 */

int main() {
	int hr_trabalhadas, hr_extra;
	float sal_minimo, vlr_hora, vlr_hora_extra, sal_receber;
	char nome[12];
	printf("-----------BEM VINDO--------------\n");
	printf("Digite o seu nome: ");
	scanf("%s", &nome);
	fflush(stdin);

	printf("Digite o numero de horas trabalhadas no mes: ");
	scanf("%d", &hr_trabalhadas);

	printf("Digite o valor do salario minimo (R$): ");
	scanf("%f", &sal_minimo);

	printf("Digite o numero de horas extras trabalhada no mes: ");
	scanf("%d", &hr_extra);

	vlr_hora = sal_minimo / 8;
	vlr_hora_extra = sal_minimo / 4;

	sal_receber = (hr_trabalhadas * vlr_hora) + (hr_extra * vlr_hora_extra);

	printf("Funcionario %s: voce trabalhou %d horas, com %d horas extra\n", nome, hr_trabalhadas, hr_extra);
	printf("Funcionario %s: Voce recebera um salario liquido de: R$ %.2f\n", nome, sal_receber);

	system("pause");
	return 0;
}