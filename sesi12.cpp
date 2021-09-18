#include<stdio.h>
#include<stdlib.h>

int main(){
	int loop=100;
	printf("C :\t\tF : \n");
	for(int i=0; i<=loop; i++){
		int c=i;
		int f = (c*9/5)+32;
		printf("%d\t=\t",c);
		printf("%d\n",f);
	}
	
	printf("\n");
	printf("F :\t\tC : \n");
	for(int j=0; j<=loop; j++){
		int c=j;
		int f = (c*9/5)+32;
		printf("%d\t=\t",f);
		printf("%d\n",c);
	}
	return 0;
}
