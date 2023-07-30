#include <stdio.h>
const int quantidade = 5;
int main() {
  int k, g, num;
  printf("Insira um numero inteiro: ");
  scanf("%d",&num);
  for(k=num;k>=1;k--){
    for(g=1;g<=k;g++){
      printf("*");
    }
    printf("\n");
  }

  // getch();
}