#include <iostream>
#include <math.h>

/* 01) Exibir todos os números pares existentes entre os números 1 e 20, pulando linha.*/

int main() 
{	
	// Declaração de variáveis
	int contador = 1;
	
	// Mensagem ao usuário
	printf ("Programa que exibe os pares existentes entre o numero 1 e 20\n\n");
	
	// Teste lógico
	while (contador <= 20)
	{
		
		if(contador % 2 == 0) 
		{
			printf ("Numero %d\n" , contador);
		}
		
		contador++;
		
	}
	
	system("pause");
	
	
	return 0;
}
