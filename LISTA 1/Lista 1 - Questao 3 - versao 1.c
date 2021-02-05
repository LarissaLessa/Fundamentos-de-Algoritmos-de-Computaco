/* QUEST�O 03: Construir um algoritmo que calcule o peso ideal de uma pessoa, 
de acordo com o seu sexo e altura, utilizando as seguintes f�rmulas:  
  para homens:  (72.7*h)-58 
  para mulheres:  (62.1*h)-44.7 
  */
  
#include<stdio.h>

int main ()
{
	//Declara��o de vari�veis
	float h, p;
	char sexo;
	
	//Obter dados
	printf("Digite a altura \n");
	scanf("%f", &h);
	
	fflush(stdin); //Importante para limpar o buffer do teclado, j� que a tecla "Enter" tamb�m conta como caracter.
	printf("Digite 'm' para masculino e 'f' para feminino\n");
	scanf("%c", &sexo);
	
	//Calculando resultado
	if(sexo=='m')
	{
		p=(72.7*h)-58;
	}
	
	else
	{
		p=(62.1*h)-44.7;
	}
	
	//Exibindo resultados
	printf("O peso ideal � %f \n", p);
}
