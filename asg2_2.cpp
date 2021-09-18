#include<stdio.h>
#include<string.h>

int main(){
    FILE * fp = fopen("testdata.in","r");
    int testCase;
    fscanf(fp,"%d\n",&testCase);
    for(int a=0; a<testCase; a++){
    int jmlCase;
    char num[100][100];
    char temp[20];
    int i=0;
    fscanf(fp,"%d\n",&jmlCase);
    for(int j=1; j<=jmlCase; j++){
        fscanf(fp,"%[^\n]\n",&num[j]); 
    }
    for(int k=0;k<=jmlCase;k++){
        for(int y=0; y<=jmlCase-1; y++){
            if(strcmp(num[y],num[y+1])>0){
                strcpy(temp,num[y]);
                strcpy(num[y],num[y+1]);
                strcpy(num[y+1],temp);
            }
        }
    }
    printf("case #%d: \n",a+1);
	    for(int j=1;j<=jmlCase;j++){
	        printf("%s\n",num[j]);
	    }
    }
    fclose(fp);
}
