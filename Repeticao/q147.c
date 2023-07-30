#include <stdio.h>

const int quantidadeDigitos = 4;
void main(){
  int k, numAtual = 1000, palindromo;
  for(k=1000; k<=9999;k++){
    int num = k;
    int quartoDigito = num % 10;
    int terceiroDigito = (num/10) % 10;
    int segDigito = ((num/10) /10) % 10;
    int primDigito = ((num/10) /10) /10;
    palindromo = (quartoDigito * 1000) + (terceiroDigito * 100) + (segDigito * 10) + primDigito;
    if(palindromo == k){
      printf("%d ",k);
    }
  }
}