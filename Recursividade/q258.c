#include<stdio.h>

void binario(int num){
   if(num == 1 || num == 0){
     printf("%d",num);
   }else{
     binario(num/2);
     printf("%d",num%2);
   }
}

void main(){
    int num;
    printf("Insira um numero inteiro: ");
    scanf("%d",&num);
    binario(num); 
}