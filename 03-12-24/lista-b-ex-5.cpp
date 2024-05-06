//
// 5. Faça um Programa que leia três números e mostre o maior deles.
//
#include <stdio.h>
#include <locale.h>
int main()
{
    int primeiroNumero = 0, segundoNumero = 0, terceiroNumero = 0;
    int maiorNumero = 0;
    
    setlocale(LC_ALL, "Portuguese");
    printf("EXERCÍCIO 5\n\n");
    
    printf("Entre com 3 números: ");
    scanf("%i%i%i", &primeiroNumero, &segundoNumero, &terceiroNumero);

	if ((primeiroNumero > segundoNumero) && (primeiroNumero > terceiroNumero))
	{
		maiorNumero = primeiroNumero;
	}
	else if ((segundoNumero > primeiroNumero) && (segundoNumero > terceiroNumero))
	{
		maiorNumero = segundoNumero;
	}
	else if ((terceiroNumero > primeiroNumero) && (terceiroNumero > segundoNumero))
	{
		maiorNumero = terceiroNumero;
	}

    printf("\nO maior número é: %i\n", maiorNumero);
    
    return 0;
}

