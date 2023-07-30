#include <stdio.h>
const int quantidade = 10;
void main() {
  int vet[quantidade], num, k, m,n;
  for(k=0; k<quantidade; k++){
     printf("Insira um numero inteiro: ");
     scanf("%d",&num);
     vet[k] = num;
     
    
  }
  printf("Insira dois numeros m e n, de 1 a 10: ");
  scanf("%d %d", &m, &n);
  int aux = vet[m-1];
  vet[m-1] = vet[n-1];
  vet[n-1] = aux;
  for(k=0; k<quantidade; k++){
    printf("%d ",vet[k]);
  }
  
  
  //getch();
  
 }
