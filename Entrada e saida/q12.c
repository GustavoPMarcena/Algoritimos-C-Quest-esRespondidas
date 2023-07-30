#include<stdio.h>
#include<math.h>
void main(){
  float pol;
  printf("Informe o valor em polegadas: \n");
  scanf("%f",&pol);
  float cent = pol * 2.54;
  printf("%.2f polegadas equivale a %.2f centimetro", pol, cent);
  //getch();
  
}