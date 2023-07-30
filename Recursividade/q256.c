#include<stdio.h>
const int ordem = 5;

void diagonal(int mat[ordem][ordem], int n){
    if(n != 0){
        diagonal(mat, n-1);
        printf("%d ",mat[n-1][n-1]);
    }
}


void main(){
    int mat[ordem][ordem], num, k, g;
    for(k=0;k<ordem;k++){
        for(g=0;g<ordem;g++){
            printf("Insira um numero inteiro: ");
            scanf("%d", &mat[k][g]);
        }
    }
    printf("Insira outro numero inteiro n: ");
    scanf("%d",&num);
    diagonal(mat, num);
}