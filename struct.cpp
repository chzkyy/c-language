#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct studentScore{
	char nim[11];
	char nama[30];
	char subjectCode[5];
	int subjectScore;
	int sks;
	char grade[];
}mhs[10];


int inputData(int count){
	char nim[11];
	char nama[30];
	char subjectCode[5];
	int subjectScore,tc,sks;
	char grade;
	
	printf("Masukkan NIM : \n"); 
	scanf("%s",&nim); getchar(); fflush(stdin);
	printf("Masukkan Nama : \n"); 
	scanf("%s",&nama); getchar(); fflush(stdin);
	printf("Masukkan Subject Code : \n"); 
	scanf("%s",&subjectCode); getchar(); fflush(stdin);	
	printf("Berapa nilai yang ingin dimasukan : \n"); 
	scanf("%d",&tc); getchar(); fflush(stdin);	
	for(int i=1; i<=tc; i++){
		printf("Masukkan Nilai ke-%d [1-10]: \n",i); 
		scanf("%d",&subjectScore); getchar(); fflush(stdin);	
	}
	
	int hasil = subjectScore / tc ;
		
	if(hasil <= 0 ){
		grade = 'E';
	}
	else if(hasil <= 1){
		grade = 'D';
	}
	else if(hasil <= 2){
		grade = 'C';
	}
	else if(hasil <= 3){
		grade = 'B';
	}
	else{
		grade = 'A';
	}
	
	printf("Masukkan Sks : \n"); 
	scanf("%d",&sks); getchar(); fflush(stdin);
	
	
	printf("\n");
	strcpy(mhs[count].nim, nim);
	strcpy(mhs[count].nama, nama);
	strcpy(mhs[count].subjectCode,subjectCode);
	mhs[count].sks = sks;
	mhs[count].subjectScore = subjectScore;
	strcpy(mhs[count].grade, &grade);
	
}

int outputData(int count){
	printf("---------------------------------------------------------------------------\n");
	printf("| No |	Nim	|	Nama	|	Subject Code	|	SKS	|	Grade	| \n");
	printf("---------------------------------------------------------------------------\n");
	for(int i = 1; i <= count; i++){
		printf("| %-2d |	%s	|	%s	|	%s	|	%d	|	%s	|\n", i,
		 mhs[i-1].nim, mhs[i-1].nama, mhs[i-1].subjectCode, mhs[i-1].sks, mhs[i-1].grade );
	}
	printf("---------------------------------------------------------------------------\n");
	
	printf("\n		Press any key to menu!");
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
