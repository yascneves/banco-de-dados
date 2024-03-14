// O sistema deve solicitar o código do produto e a quantidade de cada item. A cada iteração, deve-se imprimir o preço parcial. O processamento deve ocorrer até que o usuário digite o código -1. Ao final, deve ser impresso o preço total da compra.
#include <stdio.h>

int codigo = 0;
int qtd;

void mostrarMenu()
{
  printf("Quantidade:\n");
  scanf("%d", &qtd);

  printf("Código:\n");
  scanf("%d", &codigo);
}

float calculoLapis()
{
  float preco;
  preco = qtd * 1;
  return preco;
}
float calculoBorracha()
{
  float preco;
  preco = qtd * 1.50;
  return preco;
}
float calculoCaneta()
{
  float preco;
  preco = qtd * 2.20;
  return preco;
}
float calculoCaderno()
{
  float preco;
  preco = qtd * 12.90;
  return preco;
}

int main()
{
  float precoTotal;

  while (codigo != -1)
  {
    mostrarMenu();

    if (codigo == 1)
    {
      precoTotal = precoTotal + calculoLapis();
      printf("Preço parcial:\n"
             "R$%2.f",
             precoTotal);
    }
    else if (codigo == 2)
    {
      precoTotal = precoTotal + calculoBorracha();
      printf("Preço parcial:\n"
             "R$%2.f",
             precoTotal);
    }
    else if (codigo == 3)
    {
      precoTotal = precoTotal + calculoCaneta();
      printf("Preço parcial:\n"
             "R$%2.f",
             precoTotal);
    }
    else if (codigo == 4)
    {
      precoTotal = precoTotal + calculoCaderno();
      printf("Preço parcial:\n"
             "R$%2.f",
             precoTotal);
    }
    else
    {
      printf("Opção inválida!\n"
             "Retornando ao menu inicial...\n");
    }
  }
  printf("Preço total:\n"
         "R$%2.f\n"
         "Finalizando. Obrigada!",
         precoTotal);
  return 0;
}
