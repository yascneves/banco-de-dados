// Faça um programa que peça um valor e mostre na tela se o valor é positivo ou negativo
#include <stdio.h>

int main()
{
  float numero;
  printf("Digite um numero:");
  scanf("%f", &numero);

  if (numero > 0)
  {
    printf("Número positivo");
  }
  else
  {
    printf("Número negativo");
  }
  printf("fim do programa");
  return 0;
}