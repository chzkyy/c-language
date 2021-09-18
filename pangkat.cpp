#include<stdio.h>

int main(){
	int num, pangkat,count;
	int hasil = 1;
	
	
	scanf("%d %d",&num,&pangkat);
	count = pangkat;
	
	while(count !=0){
		hasil *= num;
		count--;
	}
	printf("%d",hasil);
}
