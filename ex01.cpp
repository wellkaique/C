//Construa uma Matriz A de ordem dois e uma Matriz B de ordem 2, solicite a
//usuário que preencha as matrizes com valores inteiros, mostre o resultado da
//Matriz A e B, em seguida realize a soma da Matriz com a Matriz B, armazene
//o resultado da soma em uma matriz C
#include <stdio.h>

int main() {
    const int linhas = 2;
    const int colunas = 2;
    int matrizA[linhas][colunas], matrizB[linhas][colunas], matrizC[linhas][colunas];

    // Preenchendo a matriz A
    printf("Digite os valores da matriz A %dx%d:\n", linhas, colunas);
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("Elemento[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrizA[i][j]);
        }
    }

    // Preenchendo a matriz B
    printf("\nDigite os valores da matriz B %dx%d:\n", linhas, colunas);
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("Elemento[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrizB[i][j]);
        }
    }

    // Somando as matrizes A e B e armazenando o resultado em C
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    // Imprimindo as matrizes A, B e C
    printf("\nMatriz A:\n");
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("%d\t", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("%d\t", matrizB[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz C (soma de A e B):\n");
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("%d\t", matrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}

