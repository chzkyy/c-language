#include<stdio.h>
#include<string.h>
#define MAX 100

int get_index(char str[][MAX],char kata[],int n){
	for(int i=0;i<n;i++){
		if(strcmp(str[i],kata)==0)
		return i+1;
	}
	return -1;
}

void view(){
	FILE *file=fopen("testdata2.in","r");
	
	int m;
	fscanf(file,"%d",&m);

	for(int i=0;i<m;i++){
		int n;
	    fscanf(file,"%d",&n);
	    char str[n][MAX];
	    char kata[MAX];
	   	for(int j=0;j<n;j++){
			fscanf(file,"%s",str[j]);
		}
	
		fscanf(file,"%s",kata);
		int index = get_index(str,kata,n);
		printf("Case #%d: ",i+1);
		
		if(index==-1){
			printf("Not found\n");
		}
		else{
			printf("%d\n",index);	
		}
	}
	fclose(file);
}

int main(){
	FILE *file=fopen("testdata2.in","r");
	if(file==NULL){
		printf("File not found\n");
		return 0;
	}
	view();
	
	fclose(file);
	return 0;
}
