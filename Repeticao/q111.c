#include <stdio.h>

void main() {
  int k, razao, numInicial, numPositivo, contador = 0;
  printf("Insira um numero inicial e a razao da progressao: ");
  scanf("%d %d",&numInicial, &razao);
  printf("Insira outro numero inteiro positivo: ");
  scanf("%d", &numPositivo);
  for(k=0; k<numPositivo; k++){
     printf("%d ", numInicial);
     numInicial += razao; 
  }
  
  //getch();
  
}
