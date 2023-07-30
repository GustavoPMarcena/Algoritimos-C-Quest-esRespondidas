#include<stdio.h>
#include<math.h>
void main(){
  float cat1, cat2;
  printf("Informe o valor dos dois catetos: \n");
  scanf("%f %f",&cat1, &cat2);
  float hipotenusa = sqrt(pow(cat1, 2) + pow(cat2,2));
  printf("A hipotenusa eh %.2f", hipotenusa);
  //getch();
  
}