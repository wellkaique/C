#include <iostream>

int main() {
    // Definindo as dimensões da matriz
    int linhas = 3;
    int colunas = 3;

    // Criando a matriz
    int matriz[linhas][colunas];

    // Preenchendo a matriz com alguns valores
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = i * colunas + j + 1;
        }
    }

    // Acessando e imprimindo os valores da matriz
    std::cout << "Matriz:\n";
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            std::cout << matriz[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}

