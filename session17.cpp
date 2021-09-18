#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct mhs{
	char nim[11];
	char name[30];
	float gpa;
}mahasiswa[10];


void sort(int count){
	mhs temp;
	for(int i=0; i<count-1; i++){
		for(int j=count-1; j>=(i+1); j--){
			if(mahasiswa[j].gpa < mahasiswa[j-1].gpa){
				temp = mahasiswa[j];
				mahasiswa[j] = mahasiswa[j-1];
				mahasiswa[j-1] = temp;
			}
		}
	}
}


int outputData(int count){
	
	printf("---------------------------------------------------------------------------\n");
	printf("| No |		Nim		|		Nama		|		GPA		| \n");
	printf("---------------------------------------------------------------------------\n");
	
	for(int i = 1; i <= count; i++){
			sort(count);
			printf("| %-2d |	%s		|		%s		|		%.2f		|\n", i, mahasiswa[i-1].nim, mahasiswa[i-1].name, mahasiswa[i-1].gpa );
		
	}
	printf("---------------------------------------------------------------------------\n");
	
	printf("\n		Press any key to menu!");
}

int inputData(int count){
	char nim[11];
	char name[30];
	float gpa;
	
	printf("Masukkan NIM : \n"); 
	scanf("%s",&nim); getchar(); fflush(stdin);
	printf("Masukkan Nama : \n"); 
	scanf("%s",&name); getchar(); fflush(stdin);
	printf("Masukkan GPA : \n"); 
	scanf("%f",&gpa); getchar(); fflush(stdin);
	printf("\n");
	
	strcpy(mahasiswa[count].nim, nim);
	strcpy(mahasiswa[count].name, name);
	mahasiswa[count].gpa = gpa;
}



int main(){
	int count, choose;
	do{
		system("CLS");
		printf("1. Insert Mahasiswa\n");
		printf("2. view Mahasiswa\n");
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
