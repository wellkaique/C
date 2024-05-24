//Crie uma Matriz X de terceira ordem, inicialize a matriz como na tabela abaixo, 
//some os elementos da primeira e mostre o resultado, some os elementos da terceira 
//linha e mostre o resultado, some os elementos da primeira coluna e mostre o resultado.

#include <stdio.h>

int main() {
    const int linhas = 3;
    const int colunas = 3;
    int matriz[linhas][colunas];
    int somaprimeiralinha = 0;
	int somasegundalinha = 0;
	int somaterceiralinha = 0;
	int somaprimeiracoluna = 0;
	int somasegundacoluna = 0;
	int somaterceiracoluna = 0;
	
    // Preenchendo a matriz 
    printf("Digite os valores da matriz %dx%d:\n", linhas, colunas);
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("Elemento[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
	//Exibindo a matriz
	printf("\nMatriz:\n");
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }	
	//Somando os elementos da primeira coluna
    for(int j = 0; j < linhas; j++) {
       somaprimeiralinha += matriz[0][j];
    }
    printf("\nSoma da primeira linha: %d\n", somaprimeiralinha);
    
    //Somando os elementes da segunda coluna
    for(int j = 0; j < linhas; j++) {
       somasegundalinha += matriz[1][j];
    }
    printf("\nSoma da segunda linha: %d\n", somasegundalinha);
    
	//Somando os elementos da segunda coluna
    for(int j = 0; j < linhas; j++){
    	somaterceiralinha += matriz[2][j];
	}
	printf("\nSoma da terceira linha: %d\n", somaterceiralinha);
	
	//Somando os elementos da primeira coluna
	for(int i = 0; i < colunas; i++){
		somaprimeiracoluna += matriz[i][0];
	}
	printf("\nSoma da primeira coluna: %d\n", somaprimeiracoluna);
	
	
	//Somando os elementos da segunda coluna
	for(int i = 0; i < colunas; i++){
		somasegundacoluna += matriz[i][1];
	}
	printf("\nSoma da segunda coluna: %d\n", somasegundacoluna);
	
	//Somando os elementos da terceira coluna
	for(int i = 0; i < colunas; i++){
		somaterceiracoluna += matriz[i][2];
	}
	printf("\nSoma da terceira coluna: %d\n", somaterceiracoluna);
	
	
	return 0;
}
  
   
