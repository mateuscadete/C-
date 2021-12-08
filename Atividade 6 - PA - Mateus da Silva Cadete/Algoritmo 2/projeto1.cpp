#include <iostream>
#include <math.h>
#include <conio.h>

/* 
============================================================================================================================

Alterar o código do exercício abaixo, feito anteriormente em outra atividade, para que use os conceitos de Função e Tratamento de Erros, conforme orientações e exemplos da aula.
Deve haver uma função para realizar o cálculo e retornar o valor da multa, possuindo tratamento de erros;
Crie um código que calcule a multa paga por um pescador que ultrapassar a quantidade de quilos estabelecida por lei.
A saber:
A quantidade de peixe por pessoa é 50 kg.
A multa por quilo excedente é R$4,00.

============================================================================================================================
*/

/*
================================================================================
Declaração de Variáveis Globais
================================================================================
*/

float peixe_kg = 0.00;

float multa = 0.00;

/*
================================================================================
Função armazena_peixe_kg()
================================================================================
*/

void armazena_peixe_kg()
{
	// Inicia o bloco "try...catch" para monitorar um erro;
	try
	{
		// Mensagem ao usuário
		printf("Digite quantos quilos de peixe: ");
	
		//Armazena a quantidade de peixe
		scanf ("%f", &peixe_kg);

		// Monitora Exception neste ponto;
		// Testa se a variável está em branco, se sim, gera uma exceção numérica (int);
		if (peixe_kg == 0)
		{
			throw 1;	
		}
		
	}
		
	// Se alguma exceção for gerada o bloco catch é executado...iniciando a tratativa;
	catch (int erro)
	{
		// Se o erro 1 for disparado;
		if (erro == 1) 
		{
			// Mensagem ao usuário;
			printf ("Erro ao armazenar o valor do kg...desculpe! :(\n");
			
			// Mensagem ao usuário;
			printf ("O valor esta em branco!\n");
			
			// Pausa o terminal para não fechar automaticamente, até que o usuário aperte alguma tecla;
			system ("pause");
		
			// Encerra o programa;
			exit(1);
        }
	}
}

void teste_logico()
{
	// Teste lógico 
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
	// Mensagem ao usuário
	printf("Calculo da multa\n\n\n");
	
	// Executa a função declarada
	armazena_peixe_kg();
	
	// Executa a função declarada
	teste_logico();
	
	system("pause");
	
	return 0;
}
	
		
		
	
	
	
	
	
	
	
	


