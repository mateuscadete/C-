#include <iostream>
#include <math.h>
#include <conio.h>

/* 02) Exibir a tabuada (1 ao 10) do número informado pelo usuário.
Exemplo o usuário digitou 5...será exibido 1x5=5, 2x5=10 ... 10x5=50. */

int main()
{
	//Declaração de variáveis
	int numero , contador , resultado;
	
	numero = 1;
	resultado = 0;
	
	//Mensagem ao usuário
	printf("Programa que exibe o resultado de uma multiplicacao a partir da tabuada do 1 ao 5\n\n");
	
	//Mensagem ao usuário
	printf("Digite o numero desejado: ");
	
	//Armazena a variável
	scanf ("%d" , &numero);

	//Teste lógico / estrutura de repetição
	for (contador = 1 ; contador <= 10 ; contador++)
	{
		if(numero <= 5)
		{
		resultado = numero * contador;
		printf("O resultado e: %d x %d = %d\n" , numero , contador , resultado);
		}
	}
	
	system ("pause");

	return 0;
}
