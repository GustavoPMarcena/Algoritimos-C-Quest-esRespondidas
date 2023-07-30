#include <stdio.h>

void main() {
  int x, y;
  printf("Digite as coodenadas x e y: ");
  scanf("%d %d",&x, &y);
  if (x > 0 && y > 0){
    printf("Os pontos %d e %d pertencem ao primeiro quadrante ", x, y);
  } else if(x < 0 && y > 0){
    printf("Os pontos %d e %d pertencem ao segundo quadrante ", x, y);
  } else if(x < 0 && y < 0){
    printf("Os pontos %d e %d pertencem ao terceiro quadrante ", x, y);
  } else if(x > 0 && y < 0){
    printf("Os pontos %d e %d pertencem ao quarto quadrante ", x, y);
  } else{
    printf("Os pontos não pertencem a nenhum quadrante");
  }
  //getch();
}