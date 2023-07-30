#include<stdio.h>

int somaIntervalo(int m, int n){
    if(m == n){
        return m;
    }
    return m + somaIntervalo(m+1, n);
}


void main(){
    int m, n;
    printf("Insira dois numeros inteiros: ");
    scanf("%d %d",&m, &n);
    int soma = somaIntervalo(m, n);
    printf("A soma do intervalo eh igual a %d",soma);    
}
