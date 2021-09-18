#include<stdio.h>


int main(){
	int *zPtr;
	int *aPtr;
	void *sPtr;
	int number, i;
	int z[5] = {1,2,3,4,5};
	sPtr = z;
	
	//a
//	++zPtr;
	
	//b
//	zPtr = &z[0];
//	number = *zPtr;
	
	//c
//	zPtr = &z[2];
//	number = *zPtr;
	
	//d
	zPtr = &z[0];
	for(i=0; i<=5; i++){
		printf("%d",zPtr[i]);
	}
	number = *zPtr;
	
	//e
	number = *static_cast<int *> (sPtr);
	
//	printf("%d",*zPtr);
}
