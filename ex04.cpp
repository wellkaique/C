//Crie uma Matriz de ordem 4 solicite que o usu�rio preencha a matriz, 
//insira o conte�do da diagonal principal dentro de um vetor.

#include <stdio.h>

int main() {
    const int linhas = 4;
    const int colunas = 4;
    int matriz[linhas][colunas];
    int vetor[4];

    // Preenchendo a matriz 
    printf("Digite os valores da matriz %dx%d:\n", linhas, colunas);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Elemento[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibindo a matriz
    printf("\nMatriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Preenchendo o vetor com os valores da diagonal principal
    for (int i = 0; i < linhas; i++) {
        vetor[i] = matriz[i][i];
    }

    // Exibindo os valores da diagonal principal
    printf("\nValores na diagonal principal: ");
    for (int i = 0; i < linhas; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

