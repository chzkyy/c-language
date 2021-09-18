#include<stdio.h>

int isPrime(int x) {
    if(x==2) {
        return 1;
    }
    if(x<2) {
        return 0;
    }
    for(int i=2; i*i<=x; i++) {
        if (x%i==0) {
			return 0;
        }
	}
    return 1;
}

int main(){
	int testCase;
	int num;
	scanf("%d",&testCase);
	for(int i=0; i<testCase; i++){
		scanf("%d",&num);
		int hasil = isPrime(num);
		if(hasil==1){
			printf("case #%d : Prime Number\n",i+1);
		}else{
			printf("case #%d : Not Prime Number\n",i+1);
		}
	}
	
	return 0;
}
