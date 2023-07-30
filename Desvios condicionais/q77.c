#include <stdio.h>

void main() {
  int x, y;
  printf("Digite as coodenadas x e y: ");
  scanf("%d %d",&x, &y);
  int equacao = (2 * x) + 1;
  if (y == equacao){
    printf("O ponto (%d , %d) pertence a reta y = 2x + 1", x, y);
  } else {
    printf("O ponto (%d , %d) nao pertence a reta y = 2x + 1", x, y);
  }
  //getch();
}