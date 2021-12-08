#include <iostream>
#include <math.h>

/* 02) Exibir a tabuada (1 ao 10) do número informado pelo usuário.
Exemplo o usuário digitou 5...será exibido 1x5=5, 2x5=10 ... 10x5=50. */

int main()
{
	// Declaração de variáveis
	int numero = 0 , contador = 1 , resultado = 0;
	
	// Mensagem ao usuário
	printf ("Programa que exibe a tabuada do numero informado, desde que seja do 1 ao 5\n\n");
	
	// Mensagem ao usuário
	printf ("Digite o numero desejado: ");
	
	// Armazena a variável
	scanf ("%d" , &numero );
	
	// Teste lógico
	do 
	{
		
		if(numero <= 5) 
		{
			resultado = numero * contador;
			printf ("O resultado e: %d x %d = %d\n" , numero , contador , resultado);
		}
		
		contador++;
		
	} while (contador <= 10);
	
	system ("pause");
	
	
	
	
	
	
	
	
	return 0;
}
