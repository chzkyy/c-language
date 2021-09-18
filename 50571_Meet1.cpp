#include<stdlib.h>
#include<stdio.h>
#include<string.h>

struct Address{
	char streetName[100];
	int no;
	char zipcode[10];
};


struct Student{
	char ID[11];
	char name[100];
	float GPA;
	
	struct Address addr;
};

int main(){
	
	struct Student arrSt[10];
	
	strcpy(arrSt[0].ID,"2301934070");
	strcpy(arrSt[0].name,"Andi");
	arrSt[0].GPA = 3.98;
	
	strcpy(arrSt[1].ID,"2301934071");
	strcpy(arrSt[1].name,"Budi");
	arrSt[1].GPA = 3.70;
	
	strcpy(arrSt[2].ID,"2301934072");
	strcpy(arrSt[2].name,"Caca");
	arrSt[2].GPA = 3.50;
	
	for(int i=0;i<3;i++){
		printf("%d. ID : %s\n",i+1,arrSt[i].ID);
		printf("Name : %s\n",arrSt[i].name);
		printf("GPA : %.2f\n",arrSt[i].GPA);	
		printf("\n");
	}
	
	
	
	
	
	
	/*struct Student st;
	char NIM[11], nama[100];
	float ipk;
	
	printf("Input ID: ");
	scanf("%s",&NIM);
	getchar();
	
	printf("Input Nama: ");
	scanf("%s",&nama);
	getchar();
	
	printf("Input GPA: ");
	scanf("%f",&ipk);	
	getchar();
	
	strcpy(st.ID,NIM);
	strcpy(st.name,nama);
	st.GPA = ipk;
	
	strcpy(st.addr.streetName, "Jl. K.H. Syahdan");
	st.addr.no = 9;
	strcpy(st.addr.zipcode, "11480");
	
	printf("ID: %s\n", st.ID);
	printf("Name: %s\n", st.name);
	printf("GPA: %.2f\n", st.GPA);
	printf("Address: %s NO: %d, ZIPCODE: %s\n",st.addr.streetName,st.addr.no,st.addr.zipcode);
		


	
	
	
	int v = 10;
	int *p = &v;
	int **p2 = &p;
	
	printf("Value of v : %d\n",v);
	*p = 15;
	printf("Value of v : %d\n",v);
	printf("address of v : %d\n",&v);
	printf("Value of p : %d\n",p);
	printf("address of p : %d\n",&p);
	printf("Value of p2 : %d\n",p2);
	printf("address of p2 : %d\n",&p2);
	**p2 = 100;
	
	printf("The value of **p2 : %d\n",**p2);
	
	int *ptr = (int*)malloc(sizeof(int));	
	*ptr = 100;
	
	printf("*ptr = %d\n",*ptr);
	
	
	//ARRAY
	int arr[]={10,20,30,40,50};
	int arr2D[][3] = {100,200,300,400,500,600,700,800};
	
	printf("arr = %d\n",arr[3]);
	
	for(int i=0;i<5;i++){
		printf("arr[%d] : %d\n",i,arr[i]);
		
	}
	
	//arr[0][2]
	printf("arr2D[0][2] : %d\n",arr2D[0][2]);
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		printf("%d ",arr2D[i][j]);	
		}
		printf("\n");
	}
	*/
	return 0;
}
