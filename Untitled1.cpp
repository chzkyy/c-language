#include<stdio.h>
#include<string.h>
#include<ctype.h>


/* contoh 1 : membuat fungsi untuk menghitung luas lingkaran
	Luas : pi * r * r
	pi = 3.14 => konstanta
	
	return_type_fungsi(parameter){
		//statement fungsi
	}
	
	Note : return_type : tipe data dari nilai yang akan dikembalikan ke si pemanggil.
						 jika tidak ada nilai yang dikembalikan,
						 maka menggunakann void
			parameter  : Nilai yang dibutuhkan oleh fungsi
						 Nilai ini dikirim dari si pemanggil ke fungsi
						 bisa kosong, biasa 1 bisa lebih dari 1
			
*/
float luas_lingkaran(float r){
	const float pi=3.14;
	float hasil = pi * r * r;
	return hasil;
	//jika return type bukan void, maka wajib ada return
}

int hitungVokal(char kata[100]){
	int jum=0;
	int jumHuruf=strlen(kata);
	for(int i=0; i<jumHuruf; i++){
		if(tolower(kata[i])=='a'||
			tolower(kata[i])=='i'||
			tolower(kata[i])=='u'||
			tolower(kata[i])=='e'||
			tolower(kata[i])=='o'
			){
				jum++;
			}
	}
	return jum;
}

void tukar(int* nilai1, int* nilai2){
	int temp=*nilai1;
	*nilai1=*nilai2;
	*nilai2=temp;
}

int main(){
	float r=0;
	float hasil=0;
	char kalimat[100];
	int jumVokal=0;
	printf("Input Jari Jari Lingkaran : ");
	scanf("%f",&r); fflush (stdin);
	hasil=luas_lingkaran(r);
	printf("Luas : %.2f\n",hasil);
	
	printf("input kalimat : ");
	scanf("%[\n]",kalimat); fflush(stdin);
	jumVokal = hitungVokal(kalimat);
	printf("Jumlah Huruf Vokal : %d\n", jumVokal);
	
	int nilai1=100;
	int nilai2=50;
	tukar(&nilai1,&nilai2);
	printf("nilai 1 : %d\n",nilai1);
	printf("nilai 2 : %d\n",nilai2);
		
	
	return 0;
}
