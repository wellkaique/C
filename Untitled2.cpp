#include <stdio.h>
int main (void)
{
	int Matriz[2][2];
	int L,C;
	
	for(L=0;L<=1;L++){
		for(C=0;C<=1;C++){
			printf("Digite um valor para a matriz na posiçãolinha %d e coluna %d:",L,C);
			scanf("%i", &Matriz[L][C]);
		}
	}
	
	for(L=0;L<=1;L++){
		for(C=0;C<=1;C++){
			printf("%i", Matriz[L][C]);
		}
	}
printf("\n");
}

