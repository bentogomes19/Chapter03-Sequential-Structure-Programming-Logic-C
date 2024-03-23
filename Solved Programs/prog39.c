#include <stdio.h>
#include <stdlib.h>

/*14. Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) a idade dessa pessoa em anos;
b) a idade dessa pessoa em meses;
c) a idade dessa pessoa em dias;
d) a idade dessa pessoa em semanas. */

int main() {
	int ano_nasc, ano_atual, id_anos, id_meses, id_dias;
	float id_semanas;

	printf("Digite o ano de nascimento: ");
	scanf("%d", &ano_nasc);

	printf("Digite o ano atual: ");
	scanf("%d", &ano_atual);

	id_anos = ano_atual - ano_nasc;
	id_meses = id_anos * 12;
	id_dias = id_anos * 365;
	id_semanas = id_dias / 7;

	printf("a) A idade dessa pessoa em anos: %d anos\n", id_anos);
	printf("b) A idade dessa pessoa em meses: %d meses\n", id_meses);
	printf("c) A idade dessa pessoa em dias: %d dias\n", id_dias);
	printf("d) A idade dessa pessoa em semanas: %.f semanas\n", id_semanas);
	printf("Voce tem %d anos, %d meses, %d dias e %.f semanas...\n", id_anos, id_meses, id_dias, id_semanas);

	system("pause");
	return 0;
}