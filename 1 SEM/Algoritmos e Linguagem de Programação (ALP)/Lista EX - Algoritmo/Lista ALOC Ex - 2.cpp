#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int a, b, c;
	
	printf("Escreva o valor de um numero: ");
	scanf("%d", &a);
	printf("Escreva o valor de outro numero: ");
	scanf("%d", &b);
	
	c = a + b;
	
	printf("O valor da soma e: %d", c);
	
	return(0);
	
}
