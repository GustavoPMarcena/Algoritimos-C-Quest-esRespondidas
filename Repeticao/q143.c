#include <stdio.h>
const int quantidade = 5;
int main() {
  int num,k,maiorNum = 0, segundoMaior= 0, condicional = 1;
  for(k=1;k<=quantidade;k++){
    printf("Insira um numero inteiro: ");
    scanf("%d",&num);
    if(num > maiorNum){
      segundoMaior=maiorNum;
      maiorNum = num;
    } else if(num > segundoMaior && num < maiorNum){
        segundoMaior = num;
    }
  }
  int diferenca = maiorNum - segundoMaior;
  printf("A diferença entre o maior numero %d e o segundo maior numero %d eh %d",maiorNum, segundoMaior, diferenca);
  // getch();
}