#include <iostream>
#include <math.h>

int main() 
{
/* 
===============================================================================================================================================================
03) Desenvolva um algoritmo que receba a base e altura de um retângulo, calcule e mostre sua área. (A = b * h)
===============================================================================================================================================================
*/	
// Declaração das variáveis
	float base = 0.00 , altura = 0.00 , area = 0.00;
	
// Mensagem ao usuário
	printf ("Programa para calcular a area de um retangulo\n\n");
	
// Mensagem ao usuário
	printf ("Digite a base do retangulo: ");
	
// Armazena o valor da base
	scanf ("%f", &base);
	
// Mensagem ao usuário
	printf ("Digite a altura: ");
	
// Armazena o valor da altura
	scanf ("%f", &altura);
	
// Fórmula da área do retângulo
	area = base * altura;
	
// Exibe o resultado final
	printf ("O resultado da area do retangulo e: %.2f", area);
	
// Mensagem ao usuário
	printf ("\n\nFim da execucao do programa");
	
	
	
	
	return 0;
}
