#include <iostream>
#include <string.h>
#include <conio.h>

/*
====================================================================================================

03) Criar um c�digo que leia um vetor de 5 n�meros inteiros distintos
e exiba qual o maior n�mero e sua posi��o no vetor e qual o menor n�mero e sua posi��o no vetor;

====================================================================================================
*/

// Declara��o das vari�veis globais
int vetorNumero[5] = {7, 4 , 6 , 2 , 9};
int auxiliar;

// Fun��o iniciar vetor + teste l�gico
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
