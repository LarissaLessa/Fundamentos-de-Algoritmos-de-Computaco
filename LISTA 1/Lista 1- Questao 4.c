/* QUEST�O 04: Um banco conceder� um cr�dito especial aos seus clientes, 
vari�vel com o saldo m�dio no �ltimo ano. Fa�a um algoritmo que calcule 
o valor do cr�dito de acordo com a tabela abaixo.   
Saldo M�dio Percentual Inferior a R$ 1000,00 nenhum cr�dito 
De R$ 1000,00 a  R$ 1499,99 20% do saldo m�dio 
De R$ 1500,00 a  R$ 2499,99 30% do saldo m�dio 
R$ 2500,00 ou mais 40% do saldo m�dio  */

#include<stdio.h>

int main ()
{
	//Declara��o de vari�veis
	float saldo_medio;
	
	//Obter dados
	printf("Digite o saldo medio\n");
	scanf("%f", &saldo_medio);
	
	//De acordo com as condi��es exigidas na quest�o, exibir resultados
	if(saldo_medio<=1000)
	{
		printf("Nenhum Credito\n");
	}
	
	else
	{
		if(saldo_medio<=1499.99)
		{
			printf("Credito de 20%% do saldo medio\n");
		}
		
		else
		{
			if(saldo_medio<=2499.99)
			{
				printf("Credito de 30%% do saldo medio\n");
			}
			
			else
			{
				printf("Credito de 40%% do saldo medio\n");
			}
		}
	}
}
