#include <iostream>
#include <math.h>

int main() 
{
/* 
===============================================================================================================================================================
03) Desenvolva um algoritmo que receba a base e altura de um ret�ngulo, calcule e mostre sua �rea. (A = b * h)
===============================================================================================================================================================
*/	
// Declara��o das vari�veis
	float base = 0.00 , altura = 0.00 , area = 0.00;
	
// Mensagem ao usu�rio
	printf ("Programa para calcular a area de um retangulo\n\n");
	
// Mensagem ao usu�rio
	printf ("Digite a base do retangulo: ");
	
// Armazena o valor da base
	scanf ("%f", &base);
	
// Mensagem ao usu�rio
	printf ("Digite a altura: ");
	
// Armazena o valor da altura
	scanf ("%f", &altura);
	
// F�rmula da �rea do ret�ngulo
	area = base * altura;
	
// Exibe o resultado final
	printf ("O resultado da area do retangulo e: %.2f", area);
	
// Mensagem ao usu�rio
	printf ("\n\nFim da execucao do programa");
	
	
	
	
	return 0;
}
