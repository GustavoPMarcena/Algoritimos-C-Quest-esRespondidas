#include <stdio.h>
#include <string.h>
const int quantidade = 8;
void main() {
  int num, k = 0, cont = 0, vet[quantidade];
  printf("Insira um numero inteiro entre 0 e 255: ");
  scanf("%d",&num); 
  printf("O numero %d em binario eh: ", num);
  while(num!=0){
    vet[k] = num%2;
    num /= 2;
    k++;
    cont++;
  }
 
  for(k=cont-1;k>=0;k--){
    printf("%d",vet[k]);
  }
}
