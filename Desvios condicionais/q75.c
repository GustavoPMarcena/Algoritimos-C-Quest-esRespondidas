#include <stdio.h>

void main() {
  int ang1, ang2, ang3;;
  printf("Digite tres angulos de um triangulo: ");
  scanf("%d %d %d",&ang1, &ang2, &ang3);
  if (ang1 == 90 || ang2 == 90 || ang3 == 90){
    printf("Esse triangulo eh retangulo");
  } else{
    printf("Esse triangulo nao eh retangulo");
  }
  //getch();
}