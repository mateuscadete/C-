#include <iostream>
#include <math.h>

int main() 
{
/* 	
======================================================================================================================================================================
04) Desenvolva um algoritmo que receba o raio de uma circunfer�ncia e exiba o comprimento desta circunfer�ncia e a �rea.  (C = 2 * p * R) (A = p * (R) ^ 2) (p = 3,14)	
======================================================================================================================================================================
*/
	float raio = 0.00 , comprimento = 0.00 , area = 0.00;

// Mensagem ao usu�rio
	printf("Programa para calcular o comprimento de uma circunferencia e a area\n\n");	
	
// Mensagem ao usu�rio
	printf ("Digite o raio: ");

// Armazena o valor do raio
	scanf ("%f", &raio);

// F�rmula para o comprimento da circunfer�ncia
	comprimento = 2 * 3.14 * raio;
	
// Mostra o resultado do comprimento
	printf ("\n\nO comprimento da circunferencia e: %.2f\n\n" , comprimento);
	
// F�rmula para a �rea da circunfer�ncia
	area = 3.14 * pow(raio , 2);
	
// Mostra o resultado da area da circunfer�ncia
	printf ("O resultado da area da circunferencia e: %.2f\n\n" , area);
	
// Mensagem ao usu�rio
	printf ("\n\nFim da execucao do programa");


	return 0;
}
