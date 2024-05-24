//Leia duas matrizes 3x3, e imprima a multiplicação das duas matrizes.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int linhas = 3;
    const int colunas = 3;
    int matrizA[linhas][colunas];
	int matrizB[linhas][colunas];
    int matrizmultiplicacao[linhas][colunas]={0};
	srand(time(NULL));

    // Preenchendo a matriz A com valores aleatorios
    for(int i = 0; i < linhas; i++){
    	for(int j=0; j < colunas; j++){
    		matrizA[i][j] = rand() %11;
		}
	}
	// Preenchendo a matriz B com valores aleatorios
    for(int  i = 0; i < linhas; i++){
    	for(int j=0; j < colunas; j++){
    		matrizB[i][j] = rand() %11;
		}
	}

    // Exibindo a matriz A
    printf("\nMatriz A:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matrizA[i][j]);
        }
        printf("\n");
    }
    
    // Exibindo a matriz B
    printf("\nMatriz B:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matrizB[i][j]);
        }
        printf("\n");
    }
    
    // Multiplicando as matrizes e armazenando em uma matriz
    for(int i=0; i < linhas; i++){
    		for(int j = 0; j < colunas; j++){
    			for(int k=0; k < colunas; k++){
    				matrizmultiplicacao[i][j] += matrizA[i][k]*matrizB[k][j];
		} 	
		}
	}
	//Imprimindo o resultado da multiplicação das matrizes
	printf("\nResultado da multiplicação das matrizes:\n");
	for(int i=0; i < linhas;i++){
		for(int j=0; j < colunas; j++){
			printf("%d\t", matrizmultiplicacao[i][j]);
		}
		printf("\n");
	}
	

    return 0;
}
