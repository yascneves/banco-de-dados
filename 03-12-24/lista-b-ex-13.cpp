/*
13.Fa�a um programa que pe�a para n pessoas a sua idade, 
ao final o programa devera verificar se a m�dia de idade da turma varia 
entre 0 e 25,26 e 60 e maior que 60; e ent�o, dizer se a turma � jovem, adulta ou idosa, 
conforme a m�dia calculada
*/
#include <stdio.h>
#include <locale.h>

int main()
{
	int idade = 0, contador = 0;
	double totalIdades = 0, media = 0;
		
	setlocale(LC_ALL, "Portuguese");
	printf("EXERC�CIO 13\n\n");
	
	while (idade <120)
	{
		contador++;
		
	    printf("Informe a %i� idade: ", contador);
	    scanf("%i", &idade);
	    
	    if (idade <120)
	    	totalIdades = totalIdades + idade;
	}
	
	contador--;
	
	media = (totalIdades / contador);

	if (media <=25)
		printf("\nM�dia de idades: Jovens");
	else if (media >25 && media <=60)
		printf("\nM�dia de idades: Adultos");	
	else
		printf("\nM�dia de idades: Idosos");	
			
	return 0;
}
