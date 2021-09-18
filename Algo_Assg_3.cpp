#include <math.h>
#include <stdio.h>

long long convert(int n) {
    long long bin = 0;
    int rem, i = 1;
    while (n != 0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}

long long convert(int n);
int main() {
	int cs; //input jumlah case
    int n; //input bilangan yang akan di convert
    scanf("%d",&cs);
    for(int i=0; i<cs; i++){
    	scanf("%d",&n);
    	printf("case #%d: ",i+1);
		printf("%lld \n", convert(n));	
	}
    return 0;
}
