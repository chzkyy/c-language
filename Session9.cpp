#include<stdio.h>

int main(void){
	int i,j;
	
	printf("Source code 1\n");
	for(i=0, j=1; i<8; i++,j++){
		printf("%d + %d = %d \n",i,j,i+j);
	}
	
	printf("\n");
	printf("Source code 2\n");
	for(i=0, j=1; i<8; ++i,++j){
		printf("%d + %d = %d \n",i,j,i+j);
	}
	
	return 0;
}
