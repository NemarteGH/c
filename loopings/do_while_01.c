#include <stdio.h>

int main (){
	int variavel = 0;
	
	// While testa os valores antes de executar
	while (variavel != 0){
		printf("While executado\n");
	}
	
	// do while executa o comando e depois testa
	do {
		printf("do executado\n");
	} while (variavel != 0);
}