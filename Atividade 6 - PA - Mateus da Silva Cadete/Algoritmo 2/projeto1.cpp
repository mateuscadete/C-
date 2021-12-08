#include <iostream>
#include <math.h>
#include <conio.h>

/* 
============================================================================================================================

Alterar o c�digo do exerc�cio abaixo, feito anteriormente em outra atividade, para que use os conceitos de Fun��o e Tratamento de Erros, conforme orienta��es e exemplos da aula.
Deve haver uma fun��o para realizar o c�lculo e retornar o valor da multa, possuindo tratamento de erros;
Crie um c�digo que calcule a multa paga por um pescador que ultrapassar a quantidade de quilos estabelecida por lei.
A saber:
A quantidade de peixe por pessoa � 50 kg.
A multa por quilo excedente � R$4,00.

============================================================================================================================
*/

/*
================================================================================
Declara��o de Vari�veis Globais
================================================================================
*/

float peixe_kg = 0.00;

float multa = 0.00;

/*
================================================================================
Fun��o armazena_peixe_kg()
================================================================================
*/

void armazena_peixe_kg()
{
	// Inicia o bloco "try...catch" para monitorar um erro;
	try
	{
		// Mensagem ao usu�rio
		printf("Digite quantos quilos de peixe: ");
	
		//Armazena a quantidade de peixe
		scanf ("%f", &peixe_kg);

		// Monitora Exception neste ponto;
		// Testa se a vari�vel est� em branco, se sim, gera uma exce��o num�rica (int);
		if (peixe_kg == 0)
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
			printf ("Erro ao armazenar o valor do kg...desculpe! :(\n");
			
			// Mensagem ao usu�rio;
			printf ("O valor esta em branco!\n");
			
			// Pausa o terminal para n�o fechar automaticamente, at� que o usu�rio aperte alguma tecla;
			system ("pause");
		
			// Encerra o programa;
			exit(1);
        }
	}
}

void teste_logico()
{
	// Teste l�gico 
	if (peixe_kg > 50)
	{
		multa = (peixe_kg - 50) * 4;
		
		printf("O valor da multa e: %.2f\n\n\n" , multa);
	}
		
	else
	{
		if (peixe_kg <= 50)
		{	
			printf("O valor da multa e: 0\n\n\n" , multa);
		}	
		
		else
		{
			printf("Voce digitou um valor invalido\n\n\n");
		}
	}
}
	
int main ()
{
	// Mensagem ao usu�rio
	printf("Calculo da multa\n\n\n");
	
	// Executa a fun��o declarada
	armazena_peixe_kg();
	
	// Executa a fun��o declarada
	teste_logico();
	
	system("pause");
	
	return 0;
}
	
		
		
	
	
	
	
	
	
	
	


