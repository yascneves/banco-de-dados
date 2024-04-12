/* 
12.Desenvolva um gerador de tabuada, capaz de gerar a tabuada 
de qualquer número inteiro entre 1 a 10. 
O usuário deve informar de qual numero ele deseja ver a tabuada. 
A saída deve ser conforme o exemplo abaixo:
Tabuada de 5:
5 X 1 = 5
5 X 2 = 10
5 X 3 = 15
*/
#include <stdio.h>
#include <locale.h>
int main()
{
	int tabuada = 0;
	
	setlocale(LC_ALL, "Portuguese");
	printf("EXERCÍCIO 12\n\n");
	
    printf("Qual a tabuada desejada (1 - 10): ");
    scanf("%i", &tabuada);

	printf("\n\nTabuada de %i\n", tabuada);
	printf("=============\n");
	
	for (int i = 0; i<11; i++)
	{
		printf ("%i x %i = %i\n", tabuada, i, tabuada*i);
	}
	
	return 0;
}
