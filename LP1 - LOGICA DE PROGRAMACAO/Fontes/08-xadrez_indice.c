#include <stdio.h>

int main(void){

    int tab[8][8];
    int vetSoma[7] = {0,0,0,0,0,0,0};
    int i,j;

    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
        {
            printf("Digite o valor da lin: %i | Col: %i \n", i, j);
            scanf("%i", &tab[i][j]);

            // Incrementa o contador do número na posição correspondente no vetor
            vetSoma[tab[i][j]]++;
        }
    }

    //Exibindo o resultado
    printf("\nAUSENCIA DE PEDRAS : %i", vetSoma[0]);
    printf("\nPEAO : %i", vetSoma[1]);
    printf("\nCAVALO : %i", vetSoma[2]);
    printf("\nTORRES : %i", vetSoma[3]);
    printf("\nBISPOS : %i", vetSoma[4]);
    printf("\nREIS : %i", vetSoma[5]);
    printf("\nRAINHAS : %i", vetSoma[6]);

}
