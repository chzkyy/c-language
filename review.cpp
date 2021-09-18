#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct supermarket{
	char custName[30];
	char productName[20];
	char productCode[20];
	int quantity;
	float price;
}market[10];


int outputData(int count){
	FILE *fp = fopen("data.txt", "rb");
	
	if(fp == NULL)
	{
        printf("Error opening file\n");
        exit(1);
    }
	
	printf("---------------------------------------------------------------------------\n");
	printf("| No |		Customer Name		|\n");
	printf("---------------------------------------------------------------------------\n");
	
	for(int i = 1; i <= count; i++){
		while(fread(&market[count],sizeof(market[count]),count,fp) == 1){
			printf("| %-2d |		%s		|\n", i,  market[count].custName);	
		}
	}
	printf("---------------------------------------------------------------------------\n");
	
	printf("\n		Press any key to menu!");
	fclose(fp);
}

void inputData(int count){
	int chars;
	FILE *fp = fopen("data.txt", "wb");
	
	if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
	
	printf("Nama Customer[5-30 characters] : \n"); 
	gets(market[count].custName);
	
	printf("Nama Produk: \n"); 
	gets(market[count].productName);
	
	printf("Produk Code : \n"); 
	gets(market[count].productCode);
	
	printf("Quantity : \n"); 
	scanf("%d",&market[count].quantity);
	
	printf("Price : \n"); 
	scanf("%f",&market[count].price);
	
	printf("\n");
	
	
	chars = fwrite(&market[count], sizeof(market[count]),count, fp);
	fclose(fp);
}



int main(){
	int count, choose;
	do{
		system("CLS");
		printf("1. Insert Sales\n");
		printf("2. Finish Sales\n");
		printf("3. Exit\n");
		printf("Choose >> ");
		scanf("%d",&choose); getchar();
		system("CLS");
		switch(choose){
			case 1 :
				inputData(count);
				count++;
				break;
				
			case 2 :
				outputData(count);
				getchar();
				break;
				
			case 3 :
				printf("Thank U!") ;
				break;
		}
	}while(choose!=3);
	
	return 0;
}
