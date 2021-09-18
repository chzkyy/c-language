#include<stdio.h>

int main(){
	int i=1;
	while(i <= 20){
		for(int a=0; a<5; a++){
			printf("%d ",i++);
		}
		printf("\n");
	}
	return 0;
}
