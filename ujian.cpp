#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int arr[] = {9,2,1,4,10,6,7,3,8,5};
int findSomething(int idx, int x){
	if (idx<0)return x;
	return findSomething(idx-1, (arr[idx]>x)? arr[idx]: x);
}

int main(){
	int arr[] = {9,2,1,4,10,6,7,3,8,5};
	findSomething(9,arr[2]);
	
	return 0;
}
