//hello world

#include <stdio.h>
#include <stdlib.h>

int main ()

{
	// calcular valor de area de um triangulo
	int triangulo, base, altura;
	
	printf("Escreva o valor de base e altura para calculo da area de um triangulo: \n");
	scanf("%d %d", &base, &altura);
	
	triangulo = base * altura;
	
	printf("O valor de area e: %d\n", triangulo);
	
	return(0); 
}


