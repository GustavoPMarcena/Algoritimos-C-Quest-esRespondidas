#include <stdio.h>

void main() {
  int k, m, n, x, num;
  printf("Insira dois numeros m e n: ");
  scanf("%d %d",&m, &n);
  printf("Insira um numero x: ");
  scanf("%d",&x);
  for(k=m; k<=n; k++){
    if(x % k == 0){
      printf("%d ",k);
    }
  }
   
  // getch();
}
