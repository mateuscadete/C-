#include <iostream>
#include <math.h>

/* 
============================================================================================================================

01) Crie um algoritmo que calcule a multa paga por um pescador que ultrapassar a quantidade de quilos estabelecida por lei. 
A saber: A quantidade de peixe por pessoa é 50 kg. A multa por quilo excedente é R$4,00.

============================================================================================================================
*/

int main ()
{
	float  peixe_kg = 0.00 , multa = 0.00;
	
	//Mensagem ao usuário
	printf("Calculo da multa\n\n\n");
	
	//Mensagem ao usuário
	printf("Digite quantos quilos de peixe: ");
	
		//Armazena a quantidade de peixe
		scanf ("%f", &peixe_kg);
	
	//Teste lógico 
	if (peixe_kg > 50)
	{
		multa = (peixe_kg - 50) * 4;
		
		printf("O valor da multa e: %.2f\n\n\n" , multa);
	}
		
	else
	{
		if (peixe_kg <= 50)
		{	
			multa = 0;
			
			printf("O valor da multa e: %.2f\n\n\n" , multa);
		}	
		
		else
		{
			printf("Voce digitou um valor invalido\n\n\n");
		}	
	
	system("pause");
	}
	
		
		
	
	
	
	
	
	
	
	
}

