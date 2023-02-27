#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "en_US.UTF-8"); // Configura a codificação UTF-8

    int linha, count = 0;
    float resultado = 0, tabela[144];
    char operacao;

    // Obtém a linha que será calculada
    //printf("Informe a linha que deseja calcular: ");
    scanf("%i", &linha);

    // Obtém a operação de cálculo
    do {
        //printf("Informe o calculo desejado:\n M -> Media | S -> Soma: ");
        scanf(" %c", &operacao);
        
        if (operacao == 77 || operacao == 83) {
            //printf("\n %c Entrou na logica \n",operacao);
            break;
        } 
        //else {
            //printf(" \n\n%c nao entrou na logica\n\n",operacao);
            // Mensagem para o usuário - Caractere Inválido
            //printf(" \n\n%c NAO E UM CARACTERE VALIDO,\n M ou S sao permitidos apenas! \n\n",operacao);   
        //}
    } while (1);

    // Obtém os valores da tabela
    for (int l=0; l<=11; l++) {
        for (int c=0; c<=11; c++) {
            //printf("\n%d - Linha: %d | Coluna: %d -> Informe o valor: ", count, l, c);
            scanf("%f", &tabela[count]);
            count++;
        }
    }

    // Calcula a soma ou a média da linha especificada pelo usuário
    int inicio = linha * 12;
    int fim = inicio + 11;
    for (int i=inicio; i<=fim; i++) {
        resultado += tabela[i];
    }
    if (operacao == 'M') {
        resultado /= 12.0;
    }

    // Exibe o resultado com uma casa decimal
    printf("%.1f\n", resultado);

    return 0;
}

// Development: Breno Toledo
// github.com/BrenoToledo