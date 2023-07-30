#include <stdio.h>
int main() {
  int k = 1, num1, num2, num3, mmc;
  printf("Informe 3 numeros inteiros: ");
  scanf("%d %d %d", &num1, &num2, &num3);
  while(k%num1 !=0 || k%num2 != 0 || k%num3 !=0){
    k++;
  }
  printf("O mmc de %d, %d e %d eh %d",num1,num2,num3,k);
// getch();
}