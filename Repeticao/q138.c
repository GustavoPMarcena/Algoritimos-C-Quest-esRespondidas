#include <stdio.h>
#include <math.h>
int main() {
  int num, k, soma = 0;
  printf("Insira um numero inteiro: ");
  scanf("%d",&num);
  k = num;
  while(k>0){
    soma += (k%10);
    k /= 10;
  }
  printf("A soma dos algarismos de %d eh %d",num,soma);

// getch();
}