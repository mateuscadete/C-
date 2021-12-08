/*
================================================================================
Declara��o de Bibliotecas
================================================================================
*/

#include <iostream>
#include <string.h>
#include <conio.h>

/*
================================================================================
Declara��o de Vari�veis Globais
================================================================================
*/

char nome[50];
	
char sobre_nome[50];

int idade;
	
float renda_media = 0.00;
/*
================================================================================
Fun��o armazenaNome()
================================================================================
*/

void armazenaNome()
{
	
	// Inicia o bloco "try...catch" para monitorar um erro;
	try
	{
		// Mensagem ao usu�rio;
		printf ("Digite o seu nome: ");
	
		// Armazena a entrada no teclado na vari�vel informada;
		gets (nome);

		// Monitora Exception neste ponto;
		// Testa se a vari�vel est� em branco, se sim, gera uma exce��o num�rica (int);
		if (strcmp (nome , "") == 0)
		{
			throw 1;	
		}
				
		// Mensagem ao usu�rio;
		printf ("Digite o seu sobrenome: ");
	
		// Armazena a entrada no teclado na vari�vel informada;
		gets (sobre_nome);	
	
		// Monitora Exception neste ponto;
		// Testa se a vari�vel est� em branco, se sim, gera uma exce��o num�rica (int);
		if (strcmp (sobre_nome , "") == 0)
		{
			throw 2;	
		}
	} 
	// Se alguma exce��o for gerada o bloco catch � executado...iniciando a tratativa;
	catch (int erro)
	{
		// Se o erro 1 for disparado;
		if (erro == 1) 
		{
			// Mensagem ao usu�rio;
			printf ("Erro ao armazenar nome...desculpe! :(\n");
			
			// Mensagem ao usu�rio;
			printf ("Nome esta em branco!\n");
			
			// Pausa o terminal para n�o fechar automaticamente, at� que o usu�rio aperte alguma tecla;
			system ("pause");
		
			// Encerra o programa;
			exit(1);
        }
		
		// Se o erro 2 for disparado;
		if (erro == 2) 
		{
			// Mensagem ao usu�rio;
			printf ("Erro ao armazenar sobre nome...desculpe! :(\n");
			
			// Mensagem ao usu�rio;
			printf ("Sobre Nome esta em branco!\n");
			
			// Pausa o terminal para n�o fechar automaticamente, at� que o usu�rio aperte alguma tecla;
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
		// Mensagem ao usu�rio;
		printf ("Digite a sua idade: ");
	
		// Armazena a entrada no teclado na vari�vel informada;
		scanf ("%d" , &idade);

		// Monitora Exception neste ponto;
		// Testa se a vari�vel est� em branco, se sim, gera uma exce��o num�rica (int);
		if ((idade) == 0)
		{
			throw 3;	
		}
				
		// Mensagem ao usu�rio;
		printf ("Digite a sua renda media: ");

  		// Armazena a entrada no teclado na vari�vel informada;
  		scanf ("%f" , &renda_media);	
	
		// Monitora Exception neste ponto;
		// Testa se a vari�vel est� em branco, se sim, gera uma exce��o num�rica (int);
		if ((renda_media) == 0)
		{
			throw 4;	
		}
	} 
	// Se alguma exce��o for gerada o bloco catch � executado...iniciando a tratativa;
	catch (int erro)
	{
		// Se o erro 1 for disparado;
		if (erro == 3) 
		{
			// Mensagem ao usu�rio;
			printf ("Erro ao armazenar idade desculpe! :(\n");
			
			// Mensagem ao usu�rio;
			printf ("Idade esta em branco!\n");
			
			// Pausa o terminal para n�o fechar automaticamente, at� que o usu�rio aperte alguma tecla;
			system ("pause");
		
			// Encerra o programa;
			exit(1);
        }
		
		// Se o erro 2 for disparado;
		if (erro == 4) 
		{
			// Mensagem ao usu�rio;
			printf ("Erro ao armazenar renda media desculpe! :(\n");
			
			// Mensagem ao usu�rio;
			printf ("Renda media esta em branco!\n");
			
			// Pausa o terminal para n�o fechar automaticamente, at� que o usu�rio aperte alguma tecla;
			system ("pause");
		
			// Encerra o programa;
			exit(1);
        }		
	}

}
/*
================================================================================
In�cio do Programa - Fun��o Main
================================================================================
*/

int main() 
{	
	// Mensagem ao usu�rio;
	printf ("Programa de cadastro...\a\n\n");
	
	// Executa a fun��o declarada;
	armazenaNome();
	
	// Executa a fun��o declarada;
	armazena_numero();
	
	// Detalhes do cadastro;
	printf ("\n\nDados Cadastrados...");	
	printf ("\nNome Completo: %s %s" , &nome , sobre_nome);
	printf ("\nIdade: %d\n\n" , idade );
	printf ("renda media: %.2f", renda_media);

	// Retorno obrigat�rio da fun��o Main;
  	return 0;
}

/*
================================================================================
Fim do Programa
================================================================================
*/
