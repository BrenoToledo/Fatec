/*Dados dois vetores A e B contendo 20 elementos inteiros cada, gerar e
exibir um vetor C do mesmo tamanho cujos elementos sejam a soma dos
respectivos elementos de A e B.*/

#include <stdio.h>

int main(){

   int vetA[10]={10,20,30,40,50,60,70,80,90,100};
   int vetB[10]={1,2,3,4,5,6,7,8,9,10};
   int vetC[10];
   int i;

   for (i=0;i<=9;i++){
     vetC[i]=vetA[i]+vetB[i];
     printf("%i ",vetC[i]);
   }

}
