#include <iostream>
#include <math.h>
#include <conio.h>

/* 01) Exibir todos os n�meros pares existentes entre os n�meros 1 e 20, pulando linha. */

int main()
{
	//Declara��o de vari�veis
	int contador;
	
	//Mensagem ao usu�rio
	printf("Programa que exibe os numeros pares de 1 a 20\n\n");

	//Teste l�gico / estrutura de repeti��o
	for (contador = 1 ; contador <= 20 ; contador++)
	{
		if(contador % 2 == 0)
		printf("Numero %d \n\n" , contador);
	}
	
	system ("pause");
	return 0;
}

