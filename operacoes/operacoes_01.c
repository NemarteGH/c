#include <stdio.h>
#include <stdlib.h>

int main(){  

	int anoAtual = 2025;
	int anoNasc = 2000;
	
	// Calculo da idade com base no ano atual e ano de nascimento.
	int idade = anoAtual - anoNasc;
	
	printf("Sua idade e %i\n\n", idade);
	
	system("pause");
	return 0;
}