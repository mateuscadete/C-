#include <iostream>
#include <math.h>

int main() 
{
/* 	
======================================================================================================================================================================
04) Desenvolva um algoritmo que receba o raio de uma circunferência e exiba o comprimento desta circunferência e a área.  (C = 2 * p * R) (A = p * (R) ^ 2) (p = 3,14)	
======================================================================================================================================================================
*/
	float raio = 0.00 , comprimento = 0.00 , area = 0.00;

// Mensagem ao usuário
	printf("Programa para calcular o comprimento de uma circunferencia e a area\n\n");	
	
// Mensagem ao usuário
	printf ("Digite o raio: ");

// Armazena o valor do raio
	scanf ("%f", &raio);

// Fórmula para o comprimento da circunferência
	comprimento = 2 * 3.14 * raio;
	
// Mostra o resultado do comprimento
	printf ("\n\nO comprimento da circunferencia e: %.2f\n\n" , comprimento);
	
// Fórmula para a área da circunferência
	area = 3.14 * pow(raio , 2);
	
// Mostra o resultado da area da circunferência
	printf ("O resultado da area da circunferencia e: %.2f\n\n" , area);
	
// Mensagem ao usuário
	printf ("\n\nFim da execucao do programa");


	return 0;
}
