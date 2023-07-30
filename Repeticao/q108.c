#include <stdio.h>
const int numeros = 20;
void main() {
  int k, g, num, pt=0, ptb=0, pmdb=0, dem=0, psdb=0, pcdob=0;
  for(k=0; k<numeros; k++){
    printf("Insira um numero: ");
    scanf("%d",&num);
    int numpartido = num/1000;
    if (numpartido == 13){
      pt++;
    } else if(numpartido == 14){
      ptb++;
    } else if(numpartido == 15){
      pmdb++;
    } else if(numpartido == 25){
      dem++;
    } else if(numpartido == 45){
      psdb++;
    } else if(numpartido == 65){
      pcdob++;
    } 
  }
  printf("A quantidade de candidatos elegidos foram: \nPt: %d\nPtb: %d\nPmdb: %d\nDem: %d\nPsdb: %d\nPcdob: %d",pt,ptb,pmdb,dem,psdb,pcdob);
  // getch();
}
