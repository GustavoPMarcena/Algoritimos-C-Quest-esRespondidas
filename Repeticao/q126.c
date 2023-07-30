#include <stdio.h>

void main() {
  int termoInicial, razao, n, k, num, condicao = 0;
  printf("Insira um termo inicial, uma razao e um numero n: ");
  scanf("%d %d %d",&termoInicial, &razao, &n);
  num = termoInicial;
  while(num<=n){
    num += razao;
    if(num == n){
      condicao++;
    }
  }

  if(condicao != 0){
    printf("%d faz parte da progressao", n);
  } else{
    printf("%d nao faz parte da progressao", n);
  }
 
  // getch();
}