#include <iostream>
#include <string.h>
#include <conio.h>


/*
====================================================================================================

01) Criar um código para ler 4 notas bimestrais, em um vetor, calcular e exibir a média deste aluno;

====================================================================================================
*/

// Declaração das variáveis globais
int vetorNotas[4];
int resultado;

// Função inciciar vetor
void iniciarVetor()
{
	for(int contador = 0 ; contador < sizeof(vetorNotas) / sizeof(vetorNotas[0]) ; contador++)
	{
		printf("Digite a nota: ");
		scanf("%d" , &vetorNotas[contador]);	
	}
	resultado = (vetorNotas[0] + vetorNotas[1] + vetorNotas[2] + vetorNotas[3]) / 4 ;
	printf("O resultado da media e: %d" , resultado);
}

int main()
{
	iniciarVetor();
	
	system("pause");
	
	return 0;
}
