#include<stdio.h>
#include<string.h>

//struct untuk reverse
int rev(char num[100]){
	char temp;
	int i=0,j;
	j=strlen(num)-1;
	while(i<j){
		temp=num[i];
		num[i]=num[j];
		num[j]=temp;
		i++;
		j--;
	}
	printf("%s\n",num);
}

int main(){
	int cs; // untuk input jumlah case
	char num[100];
	scanf("%d",&cs);getchar();
	for(int i=0; i<cs; i++){
		scanf("%s",&num);getchar();
		printf("case #%d : ",i+1);
		rev(num);
	}
	getchar();
	return 0;
}
