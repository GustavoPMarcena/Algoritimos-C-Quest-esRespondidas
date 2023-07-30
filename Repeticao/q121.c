#include <stdio.h>
const int quantidade = 10;
void main() {
  int termoInicial, razao, n, num;
  printf("Informe o termo inicial, a razão e um numero n: ");
  scanf("%d %d %d",&termoInicial, &razao, &n);
  num = termoInicial;
  if(razao > 0){
    while(num<=n){
      printf("%d ",num);
      num += razao;
     }
  } else if(razao < 0) {
      while(num>=n){
        printf("%d ",num);
        num += razao;
      }
  } else{
    printf("A razao nao pode ser 0");
  }
  
  // getch();
}
