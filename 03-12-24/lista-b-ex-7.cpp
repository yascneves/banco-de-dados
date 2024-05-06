/*
7.Faça um Programa que peça os 3 lados de um triângulo. 
O programa deverá informar se os valores podem ser um triângulo. 
Indique, caso os lados formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.
Dicas:
Três lados formam um triângulo quando a soma de quaisquer dois lados for maior que o terceiro;
Triângulo Equilátero: três lados iguais; Triângulo Isósceles: quaisquer dois lados iguais; Triângulo Escaleno: três lados diferentes;
*/
#include <stdio.h>
#include <locale.h>

int main()
{
    int primeiroNumero = 0, segundoNumero = 0, terceiroNumero = 0;
    int maiorNumero = 0, menorNumero = 0;

	setlocale(LC_ALL, "Portuguese");
	
	printf("EXERCÍCIO 7\n\n");
	
    printf("Digite valores para 3 lados de um triâgulo: ");
    scanf("%i%i%i", &primeiroNumero, &segundoNumero, &terceiroNumero);
    
    if ((primeiroNumero + segundoNumero < terceiroNumero) || (primeiroNumero + terceiroNumero < segundoNumero) || (segundoNumero + terceiroNumero < primeiroNumero))
        printf("Nao é um triângulo!");
    else if ((primeiroNumero == segundoNumero) && (primeiroNumero == terceiroNumero))
        printf("Equilatero");
    else if ((primeiroNumero==segundoNumero) || (primeiroNumero==terceiroNumero) || (segundoNumero==terceiroNumero))
        printf("Isósceles");
    else
        printf("Escaleno");
    
    return 0;
}

