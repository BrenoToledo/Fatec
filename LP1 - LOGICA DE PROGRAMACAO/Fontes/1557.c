#include <stdio.h>
#include <stdlib.h>


int main() {

    float matriz;
    int calculo;

    do {

        scanf("%f", &matriz);

        if (matriz >= 0 && matriz <= 15) {

            break;
        }

    } while (1);

        for (int l=1; l<=matriz; l++) {


            for (int c=1; c<=matriz; c++) {
                 //printf("\n%d - Linha: %d | Coluna: %d -> Informe o valor: ", pow(2,10), l, c);

                 
                 calculo = pow(1, (l*c)-1);

                 printf("%i   ",calculo );
            }

        printf("\n");
        }


    return 0;
}

// Development: Breno Toledo
// github.com/BrenoToledo
