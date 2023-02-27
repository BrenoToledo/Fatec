#include <stdio.h> //standard input-output (biblioteca padrão de entrada/saída)
#include <stdlib.h> //standard library (biblioteca de propósito geral


//retorno  nome  parametros
int main ( )
{
   float valor = 1000.0 ;
   int cont = 0;

   while ( cont < 1000*10 )
   {
      valor -= 0.1 ;
	  // valor=valor-0.1;
      cont++ ;
	  //cont = cont + 1;
	  // cont +=1;

   }
   printf ( "\nValor: %f  %d\n", valor, cont ) ;
   //return 0;
}
