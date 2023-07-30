#include <stdio.h>

int main() {
  int k, num, g = 1, fatorial = 1;
  printf("Informe um numero inteiro: ");
  scanf("%d",&num);
  while(fatorial <= num){
    fatorial = 1;
    for(k=1; k<=g; k++){
      fatorial *= k;
    }
    g++;
  }
  printf("O primeiro numero cuja fatorial eh maior que %d eh %d",num,g-1);
}