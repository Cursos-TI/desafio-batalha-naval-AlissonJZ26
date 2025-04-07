#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define L 11
#define C 10

int main(){
	int i, j, m[L][C], soma[C];
    printf("TABULEIRO NAVAL\n");
	for(i=0; i < L; i++){
		for (j=0; j < C; j++){
			//if(i==j || j==C-i-1){ 
			if(i+j==L-6){
				m[i][j] = 3;
			} else {
				m[i][j] = 0;
			} 
            if(i-j==C-4){
                m[i][j] = 3;
            }
		}
	}
	printf("\n\n  A B C D E F G H I J\n\n");
	for(i=1; i < L; i++){
		printf("  %i ", i);
		for (j=0; j < C; j++){
			soma[j] = soma[j]+(m[i][j]);
			printf("%i ", m[i][j]);
		}
		printf("\n");  
	}
	return 0;
}