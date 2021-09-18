#include<stdio.h>
#include<string.h>

//buat template struct


struct mahasiswa{
	char nim[12];
	char nama[100];
	int umur;
	float GPA;
};

int main(){
	//deklarasi
	
//	struct mahasiswa mhs1;
//	printf("Input Student Id : ");
//	scanf("%s",&mhs1.nim); fflush(stdin);
//	printf("Input Studen Name : ");
//	scanf("%s",&mhs1.nama); fflush(stdin);
//	printf("Input Studen Age : ");
//	scanf("%s",&mhs1.umur); fflush(stdin);
//	printf("Input Studen GPA : ");
//	scanf("%s",&mhs1.GPA); fflush(stdin);
	
	mahasiswa mhs[10];
	//baca data
	FILE *f;
	f=fopen("data.txt","r");
	if(f==NULL){	//jika fopen error maka akan mengembalikan ke null
		printf("Error open file\n");
	}
	else{
		int i=0;
		while(!feof(f)){//selama bukan akhir dari file
			fscanf(f,"%[^\"]\"%[^\"]\"%d#%f\n",&mhs[i].nim,&mhs[i].nama,&mhs[i].umur,&mhs[i].GPA);
			i++;
		}
		
		for(int i=0;i<10;i++){
			printf("%-11s %-15s %-2d %-4.2f\n",mhs[i].nim,mhs[i].nama,mhs[i].umur,mhs[i].GPA);
		}
	}
	fclose(f);
	/*
	strcpy(mhs[0].nim,"2301941901");
	strcpy(mhs[0].nama,"Tono");
	mhs[0].umur=18;
	mhs[0].GPA=4;
	
	strcpy(mhs[1].nim,"2343827849");
	strcpy(mhs[1].nama,"Tini");
	mhs[1].umur=19;
	mhs[1].GPA=3.9;
	
	strcpy(mhs[2].nim,"2398320844");
	strcpy(mhs[2].nama,"Tunu");
	mhs[2].umur=20;
	mhs[2].GPA=3.95;
	
	*/
	
	
	//for(int i=0;i<10;i++){
	//	printf("%-11s %-15s %-2d %-4.2f\n",mhs[i].nim,mhs[i].nama,mhs[i].umur,mhs[i].GPA);
	//}
	
	/*	1. Buat variable file
	 	2. Open file
	 	3. Baca atau tulis file
		4. 	
	*/
	/*
	FILE *r;
	r = fopen("data.txt","w");
	for(int i=0;i<3;i++){
		fprintf(r,"%s#%s#%d#%f\n",mhs[i].nim,mhs[i].nama,mhs[i].umur,mhs[i].GPA);
	}
	fclose(r);
	*/
	
	return 0;	
}
