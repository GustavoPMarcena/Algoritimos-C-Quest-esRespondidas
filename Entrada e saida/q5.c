#include<stdio.h>
#include<math.h>
void main(){
  float raio;
  printf("Informe o valor do raio: \n");
  scanf("%f",&raio);
  float area = 3.14 * (raio*raio);
  float comp = 2 * 3.14 * raio;
  printf("Area: %.2f, Comprimento: %.2f", area, comp);
  //getch();
  
}