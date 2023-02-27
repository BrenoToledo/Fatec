#include <stdio.h>

int main(void){

    int mat[5][6];
    int vet[30];
    int i, j, k = 0;

    // Leitura da matriz
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 6; j++)
        {
            printf("Digite o valor da posicao (%i,%i): ", i, j);
            scanf("%i", &mat[i][j]);

            // Armazenamento do valor no vetor
            vet[k] = mat[i][j];
            k++;
        }
    }

    printf("\n\nVetor: ");
    // Exibição do vetor
    for(i = 0; i < 30; i++)
    {
        printf("%i ", vet[i]);
    }

    printf("\n\nDiagonal principal da matriz: ");
    // Exibição da diagonal principal
    for(i = 0; i < 5; i++)
    {
        printf("%i ", mat[i][i]);
    }

    return 0;
}
