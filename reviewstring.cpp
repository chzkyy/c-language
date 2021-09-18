#include<stdio.h>
#include<string.h>

int main(){
	char pertama[255];
	char kedua[255];
	int hasil;
	
	printf("Masukkan kata pertama: ");
	scanf("%s",&pertama);
	printf("Masukkan kata kedua: ");
	scanf("%s",&kedua);
	printf("\n");
	
	hasil = strcmp(pertama,kedua);
	if(hasil>0){
		printf("Jumlah Karakter kata pertama > kata kedua\n");
	} else if(hasil<0){
		printf("Jumlah Karakter kata pertama < kata kedua\n");
	}else{
		printf("Jumlah karakter sama\n");
	}
	
	
	return 0;
}
