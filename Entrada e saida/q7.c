#include<stdio.h>
#include<math.h>
void main(){
  float base, altura;
  printf("Informe a base e altura do triangulo: \n");
  scanf("%f %f",&base, &altura);
  float area = (base * altura)/2;
  printf("A area desse triagulo eh %.2f", area);
  //getch();
  
}