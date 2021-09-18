#include<stdio.h>
#include<string.h>

int main() {
	char nama[100];
	long long int produk,total,basicsalary=1000000;
	
	printf("Masukkan Nama : ");
	scanf("%[^\n]",&nama);
	printf("Masukkan Jumlah Produk Terjual : ");
	scanf("%lld",&produk);
	
	if(produk == 10 && produk <= 25){
		total = basicsalary + (produk*10000);
	}else if(produk == 25 && produk <= 50){
		total = basicsalary + (produk*15000);
	}else if(produk > 50){
		total = basicsalary + 1250000;
	}else{
		total = basicsalary;
	}
	
	printf("\n=====================================\n");
	printf("========== Total Pendapatan =========\n\n");
	printf("Nama Karyawan	= %s\n",nama);
	printf("Total Gaji	= %lld\n",total);
	printf("\n=====================================\n");
	
	return 0;
}
