#include <stdio.h>
const int quantidade = 10;
void main() {
  int k = 0, num, termo = 1, termoAnterior = 0, condicional = 0;
  printf("Informe um numero positivo: ");
  scanf("%d",&num);
  while(termo<=num){
    termo += termoAnterior;
    termoAnterior = termo - termoAnterior;
    if(termo == num){
      condicional = 1;
    }
  }
  if(condicional == 1){
    printf("O numero %d pertence a sequencia de fibonacci", num);
  } else{
    printf("O numero %d nao pertence a sequencia de fibonacci", num);
  }

  // getch();
}
