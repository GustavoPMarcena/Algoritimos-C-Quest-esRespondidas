#include <stdio.h>
const int quantidade = 10;
void main() {
  int k, g, num, fatorial = 1;
  for(g=0; g<quantidade; g++){
     printf("Insira um numero: ");
     scanf("%d",&num);
     for(k=1 ; k<=num ; k++){
       fatorial *= k;
     }
     printf("O fatorial de %d eh %d \n\n", num, fatorial); 
    fatorial = 1;
  }
  
  // getch();
}
