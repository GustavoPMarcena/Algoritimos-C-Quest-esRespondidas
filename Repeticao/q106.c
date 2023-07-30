#include <stdio.h>

void main() {
  int k, m, n, soma = 0, contador = 0;
  printf("Insira dois numeros inteiros: ");
  scanf("%d %d",&m, &n);
  for(k=m; k<=n; k++){
    soma+=k;
    contador++;
  }
  float media = soma/contador;
  printf("A media da soma de todos os numeros no intervalo %d a %d eh %.2f", m,n,media);
  // getch();
}
