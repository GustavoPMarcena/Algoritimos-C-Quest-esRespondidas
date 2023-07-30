#include<stdio.h>

int Fibonacci(int n){
    if(n==1 || n==2){
        return 1;
    }
    return Fibonacci(n-2) + Fibonacci(n-1);
}

void main(){
    int n;
    printf("Insira um numero inteiro: ");
    scanf("%d",&n);
    int fibo = Fibonacci(n);
    printf("O %d termo da sequencia de fibonacci eh %d",n,fibo);
}