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

// Registro = Variável Composta de Múltiplos Tipos;
struct cadastro
{
	char cpf[14];
	char data_de_nascimento[10];
	char endereco[50];
};

// Criação da função cadastro
const int dados_cliente = 3;

cadastro cliente [dados_cliente];

// Criação das funções para o cadastro do cliente
void cadastro_cliente()
{
	printf("Programa que faz o cadastro do cliente\n\n");
	
	printf("Digite seu CPF: ");
	
	gets(cliente[1].cpf);
	
	printf("Digite sua data de nascimento: ");
	
	gets(cliente[2].data_de_nascimento);
	
	printf("Digite seu endereco: ");
	
	gets(cliente[3].endereco);
}

int main() 
{
	cadastro_cliente();
	
	printf("\n\nOs dados do seu CPF e: %s\n\n" , cliente[1].cpf);
	
	printf("A sua data de nascimento e: %s\n\n" , cliente[2].data_de_nascimento );
	
	printf("O seu endereco e: %s\n\n" , cliente[3].endereco);
	
	
	return 0;
}
