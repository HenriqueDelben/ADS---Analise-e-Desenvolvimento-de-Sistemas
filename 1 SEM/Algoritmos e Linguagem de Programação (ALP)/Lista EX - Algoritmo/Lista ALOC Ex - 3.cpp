#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char nome[1000];
	int salariofixo, numerodevendas, salariofinal;

	printf("BANCO DE DADOS LOJAMULTIMARCAS\nVERSAO 1.0\nCARREGANDO DADOS...");
	printf("\n\nOla!\n\nDigite o nome do vendedor: ");
	fgets(nome, 1000, stdin);
	printf("Digite agora o salario fixo deste vendedor: ");
	scanf("%d", &salariofixo);
	printf("Por ultimo, digite o total de vendas realizadas por este vendedor (em dinheiro): ");
	scanf("%d", &numerodevendas);

	salariofinal = numerodevendas * 20 / 100 + salariofixo;
	printf("\nNOME: %sSALARIO FIXO: %d\nSALARIO NO FINAL DO MES: %d\n\n", nome, salariofixo, salariofinal);

	system("pause");

	return (0);
}