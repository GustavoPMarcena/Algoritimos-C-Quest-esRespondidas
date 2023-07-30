#include <stdio.h>

void main() {
  int k, num, fatorial = 1;
  printf("Insira um numero: ");
  scanf("%d",&num);
  for(k=1 ; k<=num ; k++){
    fatorial *= k;
  }
  printf("O fatorial de %d eh %d", num, fatorial);
  // getch();
}
