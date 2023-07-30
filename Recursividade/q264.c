#include<stdio.h>

int menorDivisor(int n1, int n2, int n3) {
    int fator = 2;
    // enquanto tal fator nao dividir nenhum dos 3 numeros
    while ( n1 % fator != 0 && n2 % fator != 0 && n3 % fator != 0 ) {
        fator++;
    }
    return fator;
}

int mmc(int n1, int n2, int n3) {
    if (n1 == 1 && n2 == 1 && n3 == 1) {
        return 1;
    }
    int menor = menorDivisor(n1, n2, n3);
    // se tal número for divisível pelo menor divisor encontrado, então divida-o
    if (n1 % menor == 0) {
        n1 /= menor;    
    }
    if (n2 % menor == 0) {
        n2 /= menor;
    }
    if (n3 % menor == 0) {
        n3 /= menor;
    } 
    return menor * mmc(n1, n2, n3);
}

void main(){
    int n1, n2, n3;
    printf("Insira 3 numeros inteiros: ");
    scanf("%d %d %d",&n1, &n2, &n3);
    int minmultc = mmc(n1, n2, n3);
    printf("O mmc eh igual a %d",minmultc);
}

