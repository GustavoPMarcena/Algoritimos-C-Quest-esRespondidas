#include <stdio.h>
const int quantidade = 10;
void main() {
  int k = 0, num, termo = 1, termoAnterior = 0;
  printf("Informe um numero positivo: ");
  scanf("%d",&num);
  while(termo<=num){
    printf("%d ", termo);
    termo += termoAnterior;
    termoAnterior = termo - termoAnterior;
    
  }

  // getch();
}
