/*
 8.Faça um programa que peça uma nota, entre zero e dez. 
 Mostre uma mensagem caso o valor seja inválido e continue pedindo até que 
 o usuário informe um valor válido.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    int nota = -1;

	setlocale(LC_ALL, "Portuguese");
	
	printf("EXERCÍCIO 8\n\n");
	
    
	while (nota <0 || nota>10)
	{
		if (nota != -1)
		{
			printf("Nota inválida!\n\n");
		}
		
	    printf("Digite uma nota entre 0 e 10:\n ");
	    scanf("%i", &nota);
	}
	
    printf("Nota OK");
    
    return 0;
}

