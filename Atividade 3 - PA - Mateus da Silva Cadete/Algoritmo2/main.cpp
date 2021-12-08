#include <iostream>
#include <math.h>

int main() 
{
/*
================================================================================================================================================================================================================================
02) Crie um algoritmo que controle uma conta poupan�a que foi aberta com um dep�sito inicial de R$500,00. Sendo a remunera��o de 1% ao m�s de juros. Apresente o saldo ap�s tr�s meses. Lembrando a formula de Juros composto �:
M = C * (1 + i) ^ t
Onde M � o montante final, C � o capital investido inicial, i � a taxa de juros e t o tempo de investimento em meses.
================================================================================================================================================================================================================================
*/
// Declara��o das vari�veis;
 	float deposito_inicial = 0.00 , juros = 0.00 , meses = 0.00 , montante_final = 0.00 ;
 	
// Mensagem de boas vindas
	printf ("Aplicativo de calculo do montante final\n\n");
	
// Mensagem ao usu�rio
	printf ("Digite o deposito inicial: ");
	
// Armazena o valor do deposito inicial
	scanf ("%f" , &deposito_inicial);
	
// Mensagem ao usu�rio
	printf ("Digite a porcentagem de juros: ");

// Armazena o valor do juros
	scanf ("%f" , &juros);

// Converte o juros em decimal
	juros = juros / 100;

// Mensagem ao usu�rio
	printf ("Digite quantos meses: ");

// Armazena a quantidade de meses
	scanf ("%f" , &meses);
	
// F�rmula do resultado final
	montante_final = deposito_inicial * pow((1+juros) , meses);
	
// Exibe o resultado final
	printf ("O resultado do montante final e: %.2f" , montante_final);
	
// Mensagem ao usu�rio
	printf ("\n\nFim da execucao do programa");
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
	return 0;
}
