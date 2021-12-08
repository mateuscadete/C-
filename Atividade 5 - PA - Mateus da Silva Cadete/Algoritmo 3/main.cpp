#include <iostream>
#include <math.h>
#include <conio.h>

/* 01) Exibir todos os números pares existentes entre os números 1 e 20, pulando linha. */

int main()
{
	//Declaração de variáveis
	int contador;
	
	//Mensagem ao usuário
	printf("Programa que exibe os numeros pares de 1 a 20\n\n");

	//Teste lógico / estrutura de repetição
	for (contador = 1 ; contador <= 20 ; contador++)
	{
		if(contador % 2 == 0)
		printf("Numero %d \n\n" , contador);
	}
	
	system ("pause");
	return 0;
}

