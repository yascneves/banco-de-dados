/*
13.Faça um programa que peça para n pessoas a sua idade, 
ao final o programa devera verificar se a média de idade da turma varia 
entre 0 e 25,26 e 60 e maior que 60; e então, dizer se a turma é jovem, adulta ou idosa, 
conforme a média calculada
*/
#include <stdio.h>
#include <locale.h>

int main()
{
	int idade = 0, contador = 0;
	double totalIdades = 0, media = 0;
		
	setlocale(LC_ALL, "Portuguese");
	printf("EXERCÍCIO 13\n\n");
	
	while (idade <120)
	{
		contador++;
		
	    printf("Informe a %iª idade: ", contador);
	    scanf("%i", &idade);
	    
	    if (idade <120)
	    	totalIdades = totalIdades + idade;
	}
	
	contador--;
	
	media = (totalIdades / contador);

	if (media <=25)
		printf("\nMédia de idades: Jovens");
	else if (media >25 && media <=60)
		printf("\nMédia de idades: Adultos");	
	else
		printf("\nMédia de idades: Idosos");	
			
	return 0;
}
