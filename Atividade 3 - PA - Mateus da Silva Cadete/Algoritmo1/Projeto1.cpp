#include <iostream>
#include <math.h>

/*
================================================================================================================================
Início do Programa - Função main
================================================================================================================================

01) Crie um algoritmo que receba o nome  do aluno e suas 4 notas bimestrais, calcule e apresente o nome do aluno e a média anual desse aluno.

*/

int main() 
{
 // Declaração das variáveis;
 	char aluno[50];
 	float nota1 = 0.00 , nota2 = 0.00 , nota3 = 0.00 , nota4 = 0.00 , media = 0.00;
 	
// Mensagem de boas vindas;
	printf ("Aplicativo do calculo da media do aluno\n\n");

// Mensagem ao usuário;
	printf ("Digite o nome do aluno: ");

// Armazena a entrada da variável informada
	gets (aluno);

// Mensagem ao usuário
	printf ("Digite a primeira nota (nota1): ");

// Armazena a entrada da variável informada;
	scanf ("%f" , &nota1);

// Mensagem ao usuário;
	printf ("Digite a segunda nota (nota2): ");

// Armazena a entrada da variável informada;
	scanf ("%f" , &nota2);

// Mensagem ao usuário;
	printf ("Digite a segunda nota (nota3): ");
 	
 // Armazena a entrada da variável informada;
	scanf ("%f" , &nota3);	

// Mensagem ao usuário;
	printf ("Digite a segunda nota (nota4): ");

// Armazena a entrada da variável informada;
	scanf ("%f" , &nota4);	

// Realiza o cálculo da média do aluno;
	media = (nota1 + nota2 + nota3 + nota4) / 4;

// Exibe o resultado;
	printf ("O resultado da media do aluno %s e: %.2f" , aluno , media);

// Mensagem ao usuário;
	printf ("\n\n Fim da execucao do programa");

// Retorno obrigarório da função main;
	return 0;
}
