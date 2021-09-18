#include<stdio.h>
#include<stdlib.h>

struct mahasiswa{
    char name[50];
    char nim[10];
    float gpa;
} mhs;


void input(){
	int n,i, chars;
    FILE *fp = fopen("mhs.dat", "wb");

    if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    printf("Berapa jumlah data yang ingin di input: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nInput data ke-%d \n", i + 1);
        fflush(stdin);

        printf("Input Name: ");
        gets(mhs.name);

        printf("Input NIM: ");
        gets(mhs.nim);

        printf("Input GPA: ");
        scanf("%f", &mhs.gpa);
        
		chars = fwrite(&mhs, sizeof(mhs), n, fp);    
    }
    fclose(fp);
}

int main(){
	input();
    return 0;
}
