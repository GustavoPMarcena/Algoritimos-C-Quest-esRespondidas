#include<stdio.h>
#include<math.h>
void main(){
  float num;
  printf("Informe o número: \n");
  scanf("%f",&num);
  int dobro = num * 2;
  int triplo = num * 3;
  int quadrado = num * num;
  float raiz = sqrt(num);
  printf("dobro: %d, triplo: %d, quadrado: %d, raiz: %.2f", dobro, triplo, quadrado, raiz);
  //getch();
  
}