#include <stdio.h>

int main(){
	int contador;
	int numero = 1;
	
	// (var; condição; ação)
	for (contador = 1; contador <= 10; contador = contador + 1){
		printf("Contador em %i\n",contador);
	}
	return 0;
}