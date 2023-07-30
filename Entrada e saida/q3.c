#include<stdio.h>
#include<math.h>
void main(){
  float lado;
  printf("Informe o valro do lado: \n");
  scanf("%f",&lado);
  float area = lado * lado;
  float perimetro = lado * 4;
  printf("Area: %.2f, Perimetro: %.2f", area, perimetro);
  //getch();
  
}