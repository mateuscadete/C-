#include <iostream>
#include <math.h>

/* 01) Exibir todos os n�meros pares existentes entre os n�meros 1 e 20, pulando linha. */

int main() 
{	
	// Declara��o de vari�veis
	int contador = 1;
	
	// Mensagem ao usu�rio
	printf ("Programa que exibe os pares existentes entre o numero 1 e 20\n\n");
	
	// Teste l�gico
	do 
	{
		
		if(contador % 2 == 0) 
		{
			printf ("Numero %d\n" , contador);
		}
		
		contador++;
		
	} while (contador <= 20);
	
	system ("pause");
	
	
	return 0;
}
