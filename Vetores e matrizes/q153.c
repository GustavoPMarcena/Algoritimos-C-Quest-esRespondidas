#include <stdio.h>
const int quantidade = 10;
void main()
{
  int vet[quantidade], k;
  for (k = 0; k < quantidade; k++)
  {
    printf("Insira um numero inteiro: ");
    scanf("%d", &vet[k]);
  }
  for (k = 0; k < quantidade; k++)
  {
    printf("%d ", vet[k]);
  }
  // getch();
}
