#include <stdio.h>

void main() {
  int contador=0, k, num;
  printf("Insira um numero inteiro: ");
  scanf("%d",&num);
  for(k=1; k<=num;k++){
    if (num%k == 0){
      printf("%d ",k);
    }
  }
  // getch();
}