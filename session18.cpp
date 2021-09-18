#include<stdio.h>

void print(){
	static int count = 0;
	printf("count = %d\n",count++);
}

int main(void){
	int i;
	for(i=0; i<5; i++) print();
	for(i=0; i<5; i++) print();
	return 0;
}
