// Faça um programa que verifique se uma letra digitada é F ou M. Conforme a letra escreves F Masculino Sexo invalido
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