#include<stdio.h>

int main(){
	int baris,kolom;
	int jumlah[4][4];
	int matrik1[4][4] = {3,4,6,5,
						 5,6,7,9,
						 1,7,11,10,
						 2,8,9,4};
						
	int matrik2[4][4] = {1,2,3,4,
						 8,7,6,5,
						 9,10,11,2,
						 6,5,4,3};
						 
	
	printf("Matrik 1 :");
	printf("\n");					
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			printf("%d	",matrik1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("Matrik 2 :");
	printf("\n");		
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			printf("%d	",matrik2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("Hasil :");
	printf("\n");
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			jumlah[i][j]=matrik1[i][j] + matrik2[i][j];
			printf("%d	",jumlah[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
