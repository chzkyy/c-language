#include<stdio.h>

struct pemilik{
	char namaPemilik[100];
	int umur;
};

struct hewan{
	char namaHewan[100];
	char jenisHewan[100];
	struct pemilik orang;
};

int main(){
	struct hewan kucing = {
		"Meow","Kucing",{"Doni",22}
	};
	
	printf("Nama Hewan		: %s\n",kucing.namaHewan);
	printf("Jenis Hewan		: %s\n",kucing.jenisHewan);
	printf("========================================\n");
	printf("Nama Pemilik Hewan	: %s\n",kucing.orang.namaPemilik);
	printf("Umur Pemilik		: %d\n",kucing.orang.umur);
	
	return 0;
}

