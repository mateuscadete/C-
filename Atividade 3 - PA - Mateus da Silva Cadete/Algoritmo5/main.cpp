#include <iostream>
#include <math.h>

/* 
05) Crie um algoritmo para calcular a �rea do tri�ngulo, apresente o resultado. (A = b * h) / 2
*/

int main()
{
// Declara��o das vari�veis
	float base = 0.00 , altura = 0.00 , area = 0.00;
	
// Mensagem ao usu�rio
	printf("Calculo da area de um triangulo\n\n");
	
// Mensagem ao usu�rio
	printf ("Digite a base: ");

// Armazena o valor da base
	scanf ("%f", &base);

// Mensagem ao usu�rio
	printf ("Digite a altura: ");
	
// Armazena o valor da altura
	scanf ("%f", &altura);
	
// F�rmula para o c�lculo da �rea do triangulo
	area = (base * altura) / 2;
	 
// Exibe o resultado final
	printf("O resultado da area do triangulo e: %.2f" , area);
	
// Mensagem ao usu�rio
	printf("\n\nFim da execucao do programa");
	
	return 0;
}
