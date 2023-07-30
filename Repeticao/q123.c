 #include <stdio.h>
 const int quantidade = 10;
 void main() {
   int k=1, n, m, g = 1, contador = 0, contprimo = 0;
   printf("Informe um numero m e n: ");
   scanf("%d %d", &m, &n);
   g = m;
   while(contador < n){
     for(k=1;k<=g;k++){
       if(g%k == 0){
         contprimo++;
       }
     }
     if(contprimo == 2){
       printf("%d ",g);
       contador++;
     }
     contprimo = 0;
     g++;
   }

   // getch();
}
