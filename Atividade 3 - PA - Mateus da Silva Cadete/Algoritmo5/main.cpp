#include <iostream>
#include <math.h>

/* 
05) Crie um algoritmo para calcular a área do triângulo, apresente o resultado. (A = b * h) / 2
*/

int main()
{
// Declaração das variáveis
	float base = 0.00 , altura = 0.00 , area = 0.00;
	
// Mensagem ao usuário
	printf("Calculo da area de um triangulo\n\n");
	
// Mensagem ao usuário
	printf ("Digite a base: ");

// Armazena o valor da base
	scanf ("%f", &base);

// Mensagem ao usuário
	printf ("Digite a altura: ");
	
// Armazena o valor da altura
	scanf ("%f", &altura);
	
// Fórmula para o cálculo da área do triangulo
	area = (base * altura) / 2;
	 
// Exibe o resultado final
	printf("O resultado da area do triangulo e: %.2f" , area);
	
// Mensagem ao usuário
	printf("\n\nFim da execucao do programa");
	
	return 0;
}
