#include <stdio.h>

void main() {
  int k, m, n, soma = 0;
  printf("Insira dois numeros inteiros: ");
  scanf("%d %d",&m, &n);
  for(k=m; k<=n; k++){
    soma+=k;
  }
  printf("A soma de todos os numeros no intervalo %d a %d eh %d", m,n,soma);
  // getch();
}
