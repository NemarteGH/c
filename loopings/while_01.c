#include <stdio.h>
int main(){
	int contador = 1;
	
	// (condição) 
	while(contador <=10){
		printf("contador while em %i\n",contador);
		
		// impede um looping infinito
		++contador; 
	}
	return 0;
}