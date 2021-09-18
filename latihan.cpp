#include <stdio.h>
int main(){
    int n; //untuk pangkat 2
    int m; //untuk pangkat 3
    int bil; //untuk input bilangan yang ingin di pangkatkan
    
    printf("Masukan bilangan :");
    scanf("%d",&bil);
    for(int i=0; i<bil; i++){
		n = i * i;
		m = i * i * i;
		printf("Number = %d\t",i);
		printf("Square = %d\t",n);
		printf("Cube = %d\n",m);
	}
    
    return 0;
}

