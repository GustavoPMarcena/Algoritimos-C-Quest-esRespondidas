#include<stdio.h>
#include<math.h>
void main(){
  float real;
  printf("Informe o valor em reais: \n");
  scanf("%f",&real);
  float dolar = real*0.20;
  printf("%.2f reais equivale a %.2f dolares", real, dolar);
  //getch();
  
}