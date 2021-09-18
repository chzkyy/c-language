#include<stdio.h>


int main(){
	float p,q,x,y;
	scanf("%f",&x);
	scanf("%f",&y);	
	p = x+y;
	if(p>=0){
		q = x*y;
	}else {
		q = x/y;
	}
	
	printf("%.1f",q);
	
}
