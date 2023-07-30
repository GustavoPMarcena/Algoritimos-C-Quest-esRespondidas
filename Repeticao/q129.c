#include <stdio.h>

int main() {
  int m,n,k,g;
  printf("Insira um numero m e n: ");
  scanf("%d %d",&m, &n);
  for(k=m;k<n;k++){
    for(g=k;g<n;g++){
      printf("(%d,%d)",k,g);
    }
  }
// getch();
}