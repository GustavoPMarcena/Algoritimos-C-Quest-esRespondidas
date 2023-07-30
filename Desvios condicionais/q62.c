#include <stdio.h>

void main() {
  int m, n;
  printf("Digite dois numeros: ");
  scanf("%d %d",&m, &n);
  int resto = n % m;
  if ( resto == 0){
    printf("%d eh multiplo de %d", n, m);
  } else{
    printf("%d nao eh multiplo de %d", n, m);
  }
  //getch();
}