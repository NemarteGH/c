#include <stdio.h>
int main (){
	
	int fatorial = 5;
	int resposta = 1;
	
	// fatorial de 5 = 5 x 4 x 3 x 2 x 1
	for (;fatorial >= 1; --fatorial){
		resposta *= fatorial;
	}
	printf("Resposta do fatorial: %i\n", resposta);
	return 0;
}