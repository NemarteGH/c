#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int base;
	int altura;
	int area;
	
	printf("Digite o valor de base:");
	// Aceita o input de numero inteiro e atribui o valor recebido a variávl base.
	scanf("%i", &base);
	
	printf("Digite o valor de altura:");
	// Aceita o input de numero inteiro e atribui o valor recebido a variávl altura.
	scanf("%i", &altura);
	
	area = base * altura;
	
	printf("O valor da area do retangulo e %i\n",area);
	system("pause");
	return 0;
}