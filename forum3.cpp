#include<stdio.h>

int main(){
	int i,j,k,m;
	
	printf("%d", i == 1);
	printf("\n");
	printf("%d", j == 3);
	printf("\n");
	printf("%d", i>=1 && j<4);
	printf("\n");
	printf("%d", m<=99 && k<m);
	printf("\n");
	printf("%d", j>=i || k==m);
	printf("\n");
	printf("%d", k+m<j || 3-j>=k);
	printf("\n");
	printf("%d", !m);
	printf("\n");
	printf("%d", !(j-m));
	printf("\n");
	printf("%d", !(k>m));
	printf("\n");
	printf("%d", !(j<k));
}
