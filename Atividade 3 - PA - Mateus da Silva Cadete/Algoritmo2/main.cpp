#include <iostream>
#include <math.h>

int main() 
{
/*
================================================================================================================================================================================================================================
02) Crie um algoritmo que controle uma conta poupança que foi aberta com um depósito inicial de R$500,00. Sendo a remuneração de 1% ao mês de juros. Apresente o saldo após três meses. Lembrando a formula de Juros composto é:
M = C * (1 + i) ^ t
Onde M é o montante final, C é o capital investido inicial, i é a taxa de juros e t o tempo de investimento em meses.
================================================================================================================================================================================================================================
*/
// Declaração das variáveis;
 	float deposito_inicial = 0.00 , juros = 0.00 , meses = 0.00 , montante_final = 0.00 ;
 	
// Mensagem de boas vindas
	printf ("Aplicativo de calculo do montante final\n\n");
	
// Mensagem ao usuário
	printf ("Digite o deposito inicial: ");
	
// Armazena o valor do deposito inicial
	scanf ("%f" , &deposito_inicial);
	
// Mensagem ao usuário
	printf ("Digite a porcentagem de juros: ");

// Armazena o valor do juros
	scanf ("%f" , &juros);

// Converte o juros em decimal
	juros = juros / 100;

// Mensagem ao usuário
	printf ("Digite quantos meses: ");

// Armazena a quantidade de meses
	scanf ("%f" , &meses);
	
// Fórmula do resultado final
	montante_final = deposito_inicial * pow((1+juros) , meses);
	
// Exibe o resultado final
	printf ("O resultado do montante final e: %.2f" , montante_final);
	
// Mensagem ao usuário
	printf ("\n\nFim da execucao do programa");
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
	return 0;
}
