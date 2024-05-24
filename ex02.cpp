//Crie uma Matriz 4x4 do tipo inteiro com valores 
//informados pelo usuário em seguida mostre somente os elementos da Matriz que são pares.

#include <stdio.h>

int main() {
    const int linhas = 4;
    const int colunas = 4;
    int matriz[linhas][colunas];

    // Preenchendo a matriz 
    printf("Digite os valores da matriz %dx%d:\n", linhas, colunas);
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("Elemento[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
	//imprimindo os valores  
    printf("\nValores pares:\n");
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
           if (matriz[i][j] % 2 ==0){
           	 printf("%d\t", matriz[i][j]);
		   }else{
        	printf("\t");
        } 
		}
        printf("\n");
    }

    return 0;
}
