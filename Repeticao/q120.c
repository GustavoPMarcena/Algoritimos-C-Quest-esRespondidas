#include <stdio.h>
const int quantidade = 10;
void main() {
  int k = 0,soma = 0, num, numSeguinte;
  printf("Informe um numero positivo: ");
  scanf("%d",&num);
  while(soma<=num){
    printf("%d ",k);
    k++;
    soma+=k;
  }
  // getch();
}