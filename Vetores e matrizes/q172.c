#include <stdio.h>
const int quantidade = 10;
void main() {
   int vet[quantidade], k,g, num, cont = 0, sequencias = 0;
   for(k=0;k<quantidade;k++){
     printf("Insira um valor: ");
     scanf("%d",&vet[k]);
   }
  printf("Insira outro numero inteiro: ");
  scanf("%d",&num);
  for(k=0;k<quantidade;k++){ //(0, 6, 8, 10, 4, 3, 5, 9, 2, 15) 
    if(k+num <= quantidade){
      for(g=k;g<k+num;g++){
        if(g == k+num-1){
          cont++;
        } else if(vet[g] < vet[g+1]){
          cont++;
        } else{
          break;
        } 
    }
    if(cont == num){
      sequencias++;
    }
    }
    cont = 0;
  }
  printf("Existem %d sequencias em ordem crescente", sequencias);
}
  