#include <iostream>
#include <string.h>
#include <conio.h>

/*
====================================================================================================

03) Criar um código que leia um vetor de 5 números inteiros distintos
e exiba qual o maior número e sua posição no vetor e qual o menor número e sua posição no vetor;

====================================================================================================
*/

// Declaração das variáveis globais
int vetorNumero[5] = {7, 4 , 6 , 2 , 9};
int auxiliar;

// Função iniciar vetor + teste lógico
void iniciarVetor()
{
	for(int cont1 = 0 ; cont1 < sizeof(vetorNumero) / sizeof(vetorNumero[0]) ; cont1++)
	{
		for(int cont2 = cont1 + 1 ; cont2 < sizeof(vetorNumero) / sizeof(vetorNumero[0]) ; cont2++)
		{
			if(vetorNumero[cont1] < vetorNumero[cont2])
			{
				auxiliar = vetorNumero[cont1];
				vetorNumero[cont1] = vetorNumero[cont2];
				vetorNumero[cont2] = auxiliar;
			}
		}
	}

	printf("O primeiro numero e: %d , o ultimo numero e: %d" , vetorNumero[0] ,vetorNumero[4]);
}
	
int main() 
{
	iniciarVetor();
		
	return 0;
}
