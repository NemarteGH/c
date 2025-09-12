#include <stdio.h>
int main (){
	int idade;
	
	printf("Digite sua idade:\n");
	scanf("%i", &idade);
	
	if (idade < 18){
		printf("Bebidas alcoolicas [PROIBIDO]");
	} else {
		printf("Bebidas alcoolicas [LIBERADO]");
	}
	
	return 0;
}