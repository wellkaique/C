#include <iostream>

const int linhas = 3;
const int colunas = 3;

int main() {
    // Criando as matrizes
    int matrizA[linhas][colunas];
    int matrizB[linhas][colunas];
    int matrizC[linhas][colunas];

    // Preenchendo as matrizes A e B com valores fornecidos pelo usuário
    std::cout << "Digite os valores da matriz A " << linhas << "x" << colunas << ":\n";
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            std::cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            std::cin >> matrizA[i][j];
        }
    }

    std::cout << "Digite os valores da matriz B " << linhas << "x" << colunas << ":\n";
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            std::cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            std::cin >> matrizB[i][j];
        }
    }

    // Somando as matrizes A e B e armazenando o resultado em C
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    // Imprimindo as matrizes A, B e C
    std::cout << "\nMatriz A:\n";
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            std::cout << matrizA[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    std::cout << "\nMatriz B:\n";
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            std::cout << matrizB[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    std::cout << "\nMatriz resultante (C = A + B):\n";
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            std::cout << matrizC[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}

