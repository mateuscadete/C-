#include <iostream>
#include <math.h>

/* 02) Exibir a tabuada (1 ao 10) do n?mero informado pelo usu?rio.
Exemplo o usu?rio digitou 5...ser? exibido 1x5=5, 2x5=10 ... 10x5=50. */

int main() 
{	
	// Declara??o de vari?veis
	int numero = 0 , contador = 1 , resultado = 0;
	
	// Mensagem ao usu?rio
	printf ("Programa que exibe o resultado de uma multiplicacao a partir da tabuada do 1 ao 5\n\n");
	
	// Mensagem ao usu?rio
	printf ("Digite o numero desejado: ");
	
	//Armazena a vari?vel
	scanf ("%d" , & numero);
	
	// Teste l?gico / estrutura de repeti??o
	while (contador <= 10)
	{
		
		if(numero <= 5) 
		{
			resultado = numero * contador;
			printf ("O resultado e: %d x %d = %d\n" , numero , contador , resultado);
		}
		
		contador++;
		
	}
	
	system("pause");
	
	
	return 0;
}
