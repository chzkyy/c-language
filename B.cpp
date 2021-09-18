#include<stdio.h>


int main(){
 	int x1,v1,x2,v2,t;
 	int temp = 0;
 	scanf("%d %d %d %d %d",&x1,&v1,&x2,&v2,&t);
 	for(int i=0; i<t; i++){
 		x1 = x1+v1;
  		x2 = x2+v2;
  		if(x1 == x2){
   			printf("YA\n");
   			temp = 1;
   			break;
  		}
 	}
 	if(temp == 0 )
		printf("TIDAK\n");
		
 	return 0;
}
