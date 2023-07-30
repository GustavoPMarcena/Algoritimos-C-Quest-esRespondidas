#include <stdio.h>

void main() {
  int k, g, m, n;
  int soma = 0, contador = 0, primos = 0;
  printf("Insira dois numeros inteiros: ");
  scanf("%d %d",&m, &n);
  for(k=m; k<=n; k++){
    for(g=1;g<=k;g++){
      if(k%g == 0){
        contador++;
      }
    }
    if(contador == 2){
      soma+=k;
      primos++;
    }
    contador = 0;
  }
  int media = soma/primos;
  printf("A media da soma de todos os numeros primos no intervalo %d a %d eh %d", m,n,media);
  // getch();
}
