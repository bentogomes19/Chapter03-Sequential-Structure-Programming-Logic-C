#include <stdio.h>
#include <stdlib.h>

 /*Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os quais fornece a
quantidade de ração em gramas. A quantidade diária de ração fornecida para cada gato é sempre a
mesma. Faça um programa que receba o peso do saco de ração e a quantidade de ração fornecida para
cada gato, calcule e mostre quanto restará de ração no saco após cinco dias. */ 

int main() {
	 float peso_racao, qtd_racao1, qtd_racao2, qtd_gr, qtd_kg, peso_racao_5d;

	 printf("Informe o peso do saco da racao em KG: ");
	 scanf("%f", &peso_racao);

	 printf("Informe a quantidade diaria de racao fornecida para o gato1 em gramas: ");
	 scanf("%f", &qtd_racao1);

	 printf("Informe a quantidade  diaria de racao fornecida para o gato2 em gramas: ");
	 scanf("%f", &qtd_racao2);

	 qtd_gr = qtd_racao1 + qtd_racao2;
	 qtd_kg = qtd_gr / 1000;

	 peso_racao_5d = peso_racao - (qtd_kg * 5);

	 printf("Restara de racao no saco apos cinco dias: %.2f kg\n", peso_racao_5d);

	system("pause");
	return 0;

}