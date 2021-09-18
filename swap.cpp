#include<stdio.h>

void swap (char *A, char *B){
	char C;
	C=*A;
	*A=*B;
	*B=C;
}

int main(){
	char X;
	char Y;
	X='S';
	Y='D';
	swap(&X,&Y);
	return 0;
}
