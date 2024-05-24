#include <iostream>

int main(){
	
	const int linhas = 3;
	const int colunas = 3;
	
	int matriz[linhas][colunas];
	
	std::cout << "Digite os valores da matriz " << linhas << "x" << colunas << ":\n";
	for(int i =0 ; i < linhas; i++){
		for(int j=0; j<colunas; j++){
			std::cout<<"Elemento["<< i + 1 << "]["<< j + 1 <<"]: ";
			std::cin >> matriz[i][j];
		}
		
	}
	// imprimindo a matriz
	std::cout << "\nMatriz digitada:\n";
	for (int i=0; i < linhas; i++){
		for (int j=0; j < colunas; j++){
			std::cout <<matriz[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	
	return 0;
}
