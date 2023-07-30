#include <stdio.h>

void main() {
  int k, g, m, n, cont = 0;
  printf("Insira dois numeros m e n: ");
  scanf("%d %d", &m, &n);
  printf("Os numeros primos presentes no intervalo %d a %d eh \n", m, n);
  for(k=m;k<=n;k++){
    for(g=1; g<=k; g++){
      if(k%g == 0){
        cont++;
      }
    }
    if(cont == 2){
      printf("%d ",k);
    }
    cont = 0;
  }
  
  
  //getch();
  
}
