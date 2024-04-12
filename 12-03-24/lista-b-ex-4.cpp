//
// 4.Faça um Programa que verifique se uma letra digitada é vogal ou consoante. 
//
#include <stdio.h>
#include <locale.h>

int main()
{
    char letra;
    bool vogal = false;
    
    setlocale(LC_ALL, "Portuguese");
    
    printf("EXERCÍCIO 4\n\n");
    
    printf("Digite Vogal ou Consoante: ");
    scanf("%s", &letra);

	switch (letra)
	{
	   case 'a':
	   case 'e':
	   case 'i':
	   case 'o':
	   case 'u':	   	   	   	
	   vogal = true;
	   break;
	}

    if (vogal)	
        printf("\nVogal!");		
    else
        printf("\nConsoante (ou outro caracter que não vogal)");
        
    return 0;
}

