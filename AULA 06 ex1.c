#include<stdio.h>
#include<locale.h>
int main()

{
  setlocale(LC_CTYPE, "");
  char cpf[12];
  float preco, total_compra = 0;

  printf("Digite o CPF do cliente: ");
  scanf("%11s", &cpf);

  printf("Digite os preços dos produtos (0 para encerrar):\n");
  scanf("%f", &preco);

  while (preco != 0) {
    total_compra += preco;
    scanf("%f", &preco);
  }
   printf("\nCPF do cliente: %s\n", cpf);
    printf("Valor total da compra: R$ %.2f\n", total_compra);

    return 0;



}
