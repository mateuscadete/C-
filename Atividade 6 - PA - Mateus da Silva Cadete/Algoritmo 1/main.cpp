/*
================================================================================
Declaração de Bibliotecas
================================================================================
*/

#include <iostream>
#include <string.h>
#include <conio.h>

/*
================================================================================
Declaração de Variáveis Globais
================================================================================
*/

char nome[50];
	
char sobre_nome[50];

int idade;
	
float renda_media = 0.00;
/*
================================================================================
Função armazenaNome()
================================================================================
*/

void armazenaNome()
{
	
	// Inicia o bloco "try...catch" para monitorar um erro;
	try
	{
		// Mensagem ao usuário;
		printf ("Digite o seu nome: ");
	
		// Armazena a entrada no teclado na variável informada;
		gets (nome);

		// Monitora Exception neste ponto;
		// Testa se a variável está em branco, se sim, gera uma exceção numérica (int);
		if (strcmp (nome , "") == 0)
		{
			throw 1;	
		}
				
		// Mensagem ao usuário;
		printf ("Digite o seu sobrenome: ");
	
		// Armazena a entrada no teclado na variável informada;
		gets (sobre_nome);	
	
		// Monitora Exception neste ponto;
		// Testa se a variável está em branco, se sim, gera uma exceção numérica (int);
		if (strcmp (sobre_nome , "") == 0)
		{
			throw 2;	
		}
	} 
	// Se alguma exceção for gerada o bloco catch é executado...iniciando a tratativa;
	catch (int erro)
	{
		// Se o erro 1 for disparado;
		if (erro == 1) 
		{
			// Mensagem ao usuário;
			printf ("Erro ao armazenar nome...desculpe! :(\n");
			
			// Mensagem ao usuário;
			printf ("Nome esta em branco!\n");
			
			// Pausa o terminal para não fechar automaticamente, até que o usuário aperte alguma tecla;
			system ("pause");
		
			// Encerra o programa;
			exit(1);
        }
		
		// Se o erro 2 for disparado;
		if (erro == 2) 
		{
			// Mensagem ao usuário;
			printf ("Erro ao armazenar sobre nome...desculpe! :(\n");
			
			// Mensagem ao usuário;
			printf ("Sobre Nome esta em branco!\n");
			
			// Pausa o terminal para não fechar automaticamente, até que o usuário aperte alguma tecla;
			system ("pause");
		
			// Encerra o programa;
			exit(1);
        }		
	}

}

void armazena_numero()
{
// Inicia o bloco "try...catch" para monitorar um erro;
	try
	{
		// Mensagem ao usuário;
		printf ("Digite a sua idade: ");
	
		// Armazena a entrada no teclado na variável informada;
		scanf ("%d" , &idade);

		// Monitora Exception neste ponto;
		// Testa se a variável está em branco, se sim, gera uma exceção numérica (int);
		if ((idade) == 0)
		{
			throw 3;	
		}
				
		// Mensagem ao usuário;
		printf ("Digite a sua renda media: ");

  		// Armazena a entrada no teclado na variável informada;
  		scanf ("%f" , &renda_media);	
	
		// Monitora Exception neste ponto;
		// Testa se a variável está em branco, se sim, gera uma exceção numérica (int);
		if ((renda_media) == 0)
		{
			throw 4;	
		}
	} 
	// Se alguma exceção for gerada o bloco catch é executado...iniciando a tratativa;
	catch (int erro)
	{
		// Se o erro 1 for disparado;
		if (erro == 3) 
		{
			// Mensagem ao usuário;
			printf ("Erro ao armazenar idade desculpe! :(\n");
			
			// Mensagem ao usuário;
			printf ("Idade esta em branco!\n");
			
			// Pausa o terminal para não fechar automaticamente, até que o usuário aperte alguma tecla;
			system ("pause");
		
			// Encerra o programa;
			exit(1);
        }
		
		// Se o erro 2 for disparado;
		if (erro == 4) 
		{
			// Mensagem ao usuário;
			printf ("Erro ao armazenar renda media desculpe! :(\n");
			
			// Mensagem ao usuário;
			printf ("Renda media esta em branco!\n");
			
			// Pausa o terminal para não fechar automaticamente, até que o usuário aperte alguma tecla;
			system ("pause");
		
			// Encerra o programa;
			exit(1);
        }		
	}

}
/*
================================================================================
Início do Programa - Função Main
================================================================================
*/

int main() 
{	
	// Mensagem ao usuário;
	printf ("Programa de cadastro...\a\n\n");
	
	// Executa a função declarada;
	armazenaNome();
	
	// Executa a função declarada;
	armazena_numero();
	
	// Detalhes do cadastro;
	printf ("\n\nDados Cadastrados...");	
	printf ("\nNome Completo: %s %s" , &nome , sobre_nome);
	printf ("\nIdade: %d\n\n" , idade );
	printf ("renda media: %.2f", renda_media);

	// Retorno obrigatório da função Main;
  	return 0;
}

/*
================================================================================
Fim do Programa
================================================================================
*/
