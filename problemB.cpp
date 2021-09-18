#include<stdio.h>


int main(){
	int x1,v1;
	int x2,v2;
	
	scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
	if(x2>x1){
		if(v2<v1){
			if((x2-x1)%(v1-v2)==0)
				printf("YA");
			else
				printf("TIDAK");
		}
		else
			printf("TIDAK");
	}
	else{
		if(v1>v2){
			if((x1-x2)%(v2-v1)==0)
				printf("YA");
			else
				printf("TIDAK");
		}
	else if(x1==x2 && v1==v2)
		printf("YA");
	else
		printf("TIDAK");
	}
	return 0;
}
