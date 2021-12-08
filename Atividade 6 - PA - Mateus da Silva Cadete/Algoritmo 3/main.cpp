#include <iostream>
#include <math.h>
#include <conio.h>

/* Declara��o das vari�veis globais*/

float deposito_inicial, juros , montante_final;

int meses ; 

// Iniciando o tartamento de erros
void armazena_deposito_inicial()
{
	try
	{
		// Mensagem ao usu�rio
		printf ("Digite o deposito inicial: ");
	
		// Armazena o valor do deposito inicial
		scanf ("%f" , &deposito_inicial);
	
		// Monitora a exception 
		if (deposito_inicial ==0)
		{
			throw 1;
		}
	}
	
	// Se alguma exce��o for gerada o bloco catch � executado...iniciando a tratativa;
	catch (int erro)
	{
		// Se o erro 1 for disparado;
		if (erro == 1) 
		{
			// Mensagem ao usu�rio;
			printf ("Erro ao armazenar o valor do deposito inicial...desculpe! :(\n");
			
			// Mensagem ao usu�rio;
			printf ("O valor esta em branco!\n");
			
			// Pausa o terminal para n�o fechar automaticamente, at� que o usu�rio aperte alguma tecla;
			system ("pause");
		
			// Encerra o programa;
			exit(1);
        }
	}	
}

// Iniciando o tartamento de erros
void armazena_juros()
{
	try
	{
		// Mensagem ao usu�rio
	printf ("Digite a porcentagem de juros: ");

	// Armazena o valor do juros
	scanf ("%f" , &juros);

	// Converte o juros em decimal
	juros = juros / 100;
	
		// Monitora a exception 
		if (juros ==0)
		{
			throw 2;
		}
	}
	
	// Se alguma exce��o for gerada o bloco catch � executado...iniciando a tratativa;
	catch (int erro)
	{
		// Se o erro 1 for disparado;
		if (erro == 2) 
		{
			// Mensagem ao usu�rio;
			printf ("Erro ao armazenar o valor do juros...desculpe! :(\n");
			
			// Mensagem ao usu�rio;
			printf ("O valor esta em branco!\n");
			
			// Pausa o terminal para n�o fechar automaticamente, at� que o usu�rio aperte alguma tecla;
			system ("pause");
		
			// Encerra o programa;
			exit(1);
        }
	}	
}

// Iniciando o tartamento de erros
void armazena_meses()
{
	try
	{
	// Mensagem ao usu�rio
	printf ("Digite quantos meses: ");

	// Armazena a quantidade de meses
	scanf ("%d" , &meses);
	
		// Monitora a exception 
		if (meses ==0)
		{
			throw 3;
		}
	}
	
	// Se alguma exce��o for gerada o bloco catch � executado...iniciando a tratativa;
	catch (int erro)
	{
		// Se o erro 1 for disparado;
		if (erro == 3) 
		{
			// Mensagem ao usu�rio;
			printf ("Erro ao armazenar o valor do meses...desculpe! :(\n");
			
			// Mensagem ao usu�rio;
			printf ("O valor esta em branco!\n");
			
			// Pausa o terminal para n�o fechar automaticamente, at� que o usu�rio aperte alguma tecla;
			system ("pause");
		
			// Encerra o programa;
			exit(1);
        }
	}	
}

int main() 
{
/*
================================================================================================================================================================================================================================
02) Crie um algoritmo que controle uma conta poupan�a que foi aberta com um dep�sito inicial de R$500,00. Sendo a remunera��o de 1% ao m�s de juros. Apresente o saldo ap�s tr�s meses. Lembrando a formula de Juros composto �:
M = C * (1 + i) ^ t
Onde M � o montante final, C � o capital investido inicial, i � a taxa de juros e t o tempo de investimento em meses.
================================================================================================================================================================================================================================
*/
 		
	// Mensagem de boas vindas
	printf ("Aplicativo de calculo do montante final\n\n");
	
	// Executa a fun��o indicada
	armazena_deposito_inicial();	
	
	// Executa a fun��o indicada
	armazena_juros();
	
	// Executa a fun��o indicada
	armazena_meses();
	
	// F�rmula do resultado final
	montante_final = deposito_inicial * pow((1+juros) , meses);
	
	// Exibe o resultado final
	printf ("O resultado do montante final e: %.2f" , montante_final);
	
	// Mensagem ao usu�rio
	printf ("\n\nFim da execucao do programa");


	return 0;
}
