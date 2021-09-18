#include<stdio.h>

int main(){
	int n=1;
	int num;
	int pang;
	
	scanf("%d %d",&num,&pang);
	for(int i=1; i<=pang; i++){
		n = n*num;
	}
	printf("%d\n",n);
	
	
	return 0;
}
