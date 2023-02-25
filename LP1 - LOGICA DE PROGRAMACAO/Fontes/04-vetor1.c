/*Dado um vetor A contendo 10 elementos inteiros,
gerar e exibir um vetor B cujos elementos estão na ordem
inversa de A. */

#include <stdio.h>

int main(){

   int vetA[10], vetB[10], a,b;

   for (a=0;a<=9;a++){
     printf("Informe um numero: ");
     scanf("%i",&vetA[a]);
   }
   b=0;
   for (a=9;a>=0;a--){
      vetB[b]=vetA[a];
      b++;
   }
   for (b=0;b<=9;b++)
      printf("%i ",vetB[b]);
}

