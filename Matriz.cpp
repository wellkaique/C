#include <stdio.h>
#include <stdlib.h>
#include <iostream>
int main (void){

	int linhas = 3;
	int colunas = 4;
	
	
	int Matriz[linhas][colunas];
	
	for(int i=0; i<linhas; i++){
		for(int j = 0; j<colunas; j++){
			Matriz[i][j] = i * colunas + j + 1; 
		}
	}
	
	printf("Matriz: \n");
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){
			printf("%d\t",Matriz[i][j]);
		}
	}	printf("\n");
}
