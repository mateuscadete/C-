#include <iostream>
#include <string.h>
#include <conio.h>

// 02) Criar um código que leia um nome armazenado em um vetor e exiba invertido. Exemplo, leia Wagner e exiba rengaW.

char vetorNome[]= "";

// Iniciar a função vetorNome
void funcao_nome()
{
	printf("Digite o nome: ");
	scanf("%s" ,&vetorNome);
	for(int contador = strlen(vetorNome) - 1 ; contador >=0 ;contador--)
	{	
		putchar(vetorNome[contador]);	
	}
	printf("\n\nO nome ao contrario e: \n\n" , vetorNome);
}


int main() 
{
	funcao_nome();
	
	return 0;
}
