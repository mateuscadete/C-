#include <iostream>
#include <math.h>

/* 02) Escrever um programa para apresentar o nome do lanche do McDonalds conforme o nº da opção digitada pelo cliente (usuário):

1. BigMac

2. Quarteirão

3. MacChicken

4. Cheddar MacMelt

5. MacMax

O programa deverá apresentar ao usuário o menu de opções disponíveis e deverá informar caso seja digitada uma opção inválida.
*/


int main() 
{
	
	int opcao = 0 ;
	
	//Mensagem ao usuário
	printf("Qual lanche voce prefere?\n\n\n");
	
	printf("1. BigMac\n\n");
	
	printf("2. Quarteirao\n\n");
	
	printf("3. MacChicken\n\n");
	
	printf("4. MacMelt\n\n");
	
	printf("5. MacMax\n\n");
	
	printf("Digite a opcao desejada: ");
		//Armazenando a variavel no teclado
		scanf("%d" , &opcao);
	
	//Teste lógico 
	switch (opcao)
	{
		
		case 1:
			printf("BigMac");
			break;
			
		case 2:
			printf("Quarteirao");
			break;
		
		case 3:
			printf("MacChicken");
			break;
			
		case 4:
			printf("MacMelt");
			break;
			
		case 5:
			printf("MacMax");
			break;
			
		default:
			printf("Voce digitou uma opcao invalida\n\n");
			break;			
	}
	system ("pause");
	
	return 0;
}
