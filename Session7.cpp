#include<stdio.h>
#include<string.h>
#include<ctype.h>

/*Contoh 1: Membuat fungsi untuk 
menghitung luas lingkaran
Luas = pi * r * r
pi = 3.14 -> konstansta

return_type nama_fungsi(parameter){
	//statement fungsi
}
Note :
- Return_type : tipe data dari nilai yang akan 
				dikembalikan ke si pemanggil.
				Jika tidak ada nilai yang dikembalikan,
				maka menggunakan void
- Parameter	  : Nilai yang dibutuhkan oleh Fungsi.
				Nilai ini dikirim dari si pemanggil ke fungsi.
				bisa kosong, bisa 1, bisa lebih dari 1
*/

float luasLingkaran(float r){
	const float pi=3.14;
	float hasil = pi * r * r;
	return hasil;
	//jika return type bukan void, maka wajib ada return
}

/*
Contoh 2: Membuat fungsi untuk menghitung 
jumlah huruf vokal didalam sebuah kalimat
return_type : int
param : kalimat
*/

int hitungVokal(char kata[100]){
	int jum=0;
	int jumHuruf = strlen(kata);
	for(int i=0;i<jumHuruf;i++){
		if(tolower(kata[i])=='a' ||
			tolower(kata[i])=='i' ||
			tolower(kata[i])=='u' ||
			tolower(kata[i])=='e' ||
			tolower(kata[i])=='o'
		){
			jum++;
		}
	}
	return jum;
}

/*
1. Passing parameter by Value
2. Passing parameter by Address
*/

/*
Membuat fungsi untuk menukar 2 buah bilangan
*/

void tukar(int *nilai1,int *nilai2){
	int temp=*nilai1;
	*nilai1=*nilai2;
	*nilai2=temp;
}


/*
Membuat fungsi yang mengirimkan 10 buah bilangan, 
lalu bilangan tersebut dikalikan dengan dirinya sendiri
*/

/*jika yang dikirim adalah array, 
sifatnya adalah passing parameter by address
karena array merupakan pointer yang menunjuk ke data index  0
*/
void kuadrat2(int number[10]){
	for(int i=0;i<10;i++){
		number[i] = number[i]*number[i];
	}	
}

int cekMax(int number[10]){
	int max = number[0];
	for(int i=1;i<10;i++){
		if(number[i]>max){
			max = number[i];
		}
	}
	return max;
}

int main(){
	float r=0;
	float hasil=0;
	char kalimat[100];
	int jumVokal=0;
	printf("Input jari jari lingkaran : ");
	scanf("%f",&r); fflush(stdin);
	hasil=luasLingkaran(r);
	printf("Luas : %.2f\n",hasil);
	printf("Input Kalimat : ");
	scanf("%[^\n]",kalimat); fflush(stdin);
	jumVokal = hitungVokal(kalimat);
	printf("Jumlah Huruf Vokal : %d\n",jumVokal);

	int nilai1=100;
	int nilai2=50;
	tukar(&nilai1,&nilai2);	
	printf("Nilai 1 : %d\n",nilai1);
	printf("Nilai 2 : %d\n",nilai2);
	
	int number[10]={1,2,3,4,5,6,7,8,9,10};
	kuadrat2(number);	
	for(int i=0;i<10;i++){
		printf("Number ke %d : %d\n",i+1,number[i]);
	}
	
	for(int i=0;i<10;i++){
		printf("Input nilai ke %d : ",i+1);
		scanf("%d",&number[i]); fflush(stdin);
	}
	//menampilkan nilai terbesar
	int max = cekMax(number);
	printf("Nilai Max : %d\n",max);
	
	return 0;
}
