#include <iostream>
#include <math.h>

/* 
03) Crie um algoritmo que receba 4 notas do aluno e verifique se o mesmo foi aprovado ou reprovado com um dos seguintes conceitos:

Aprovado - Nota A - maior igual à 9  

Aprovado - Nota B - maior igual à 7 e menor que 9

Aprovado - Nota C - maior igual à 5 e menor que 7

Reprovado - Nota D - maior igual à 2,5 e menor que 5 

Reprovado - Nota E - menor que 2,5
*/

int main() 
{
	float nota = 0.00;
	
	//Mensagem ao usuário
	printf("\n\nDigite qual e a nota do aluno: ");
	
		scanf("%f" , &nota);
		
	//Teste lógico
	if(nota < 2.5)
	{
		printf("\n\nAluno reprovado nota E\n\n");
	}
	
	else
	{
		if(nota >= 2.5 && nota < 5)
		{
			printf ("\n\nAluno reprovado nota D\n\n");
		}	
	
		else
		{
			if(nota >= 5 && nota < 7)
			{
					printf ("\n\nAluno aprovado nota C\n\n");
			
			}
	
			else
			{
				if(nota >= 7 && nota < 9)
				{
					printf("\n\nAluno aprovado nota B\n\n");
				}
			
				else
				{
					if(nota >= 9)
					{
						printf("\n\nAluno aprovado nota A\n\n");
					}	
				
					else
					{
						printf("\n\nVoce digitou um valor invalido\n\n");
					}
				}
			}
		}
	}

	system ("pause");
	
	return 0;
}
