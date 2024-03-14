// Faça um programa que peça 2 numeros e imprima o maior deles
#include <stdio.h>

void menu()
{
  printf("Digite dois números:");
}

int main()
{
  float numeroUm, numeroDois;
  menu();
  scanf("%f%f", &numeroUm, &numeroDois);

  if (numeroUm > numeroDois)
  {
    printf("O maior número é o %.f.", numeroUm);
  }
  else
  {
    printf("O maior número é o %.f.", numeroDois);
  }
  printf("Fim do programa");
  return 0;
}