#include<stdio.h>

int media(int n1, int n2, int n3){
    return (n1+n2+n3)/3;
}

void main(){
    int n1,n2,n3;
    printf("Insira tres numeros inteiros: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    int med = media(n1, n2, n3);
    printf("A media dos 3 numeros inteiros eh %d", med);    
}
