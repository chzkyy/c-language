#include<stdio.h>

int main(){
	int scan=10;
	float num, avg, min=100,max=0,value=0;
	
	for(int i=1; i<=scan; i++){
		printf("Masukkan Nilai ke-%d : ",i);
		scanf("%f",&num);
		
		while(num!=0){
			
			if(num>100 || num<0){
				printf("Data yang di masukkan salah");
				scanf("%f",&num);
				continue;	
			}
			if(num==100){
				break;
			}
			if(num<100){
				break;
			}
		}
		
		//rumus mencari nilai max
		if(num>max){
			max=num;
		}
		
		//rumus mencari nilai min
		if(num<min){
			min=num; 
		}
		
		//rumus mencari nilai rata rata
		value += num; 
		avg = value/i;
	}
	printf("\n=============================\n\n");
	printf("Nilai Maksimum	:	%.2f\n",max);
	printf("Nilai Minimum	:	%.2f\n",min);
	printf("Nilai Rata rata	:	%.2f\n",avg);
	return 0;
}
