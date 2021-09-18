#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Subjects{
	char name[100];
	int score;
	
};

int main(){
	
	struct Subjects sub[10];
	int index = 0;
	int opt;
	
	
	char sName[100];
	int sScore;
	
	
	
	do{
	
		printf("1. Insert Subjects\n");
		printf("2. View Subjects\n");	
		printf("3. Delete Subjects\n");
		printf("4. Exit\n");
		
		printf("Choose: ");
		scanf("%d",&opt);
		getchar();
		
		switch(opt){
			case 1:
				if(index > 9) printf("Data is FULL");
				else{
					printf("Iput Subjects name : ");
					gets(sName);
					
					printf("Input Subjects score : ");
					scanf("%d",&sScore);
					getchar();
					
					strcpy(sub[index].name, sName);
					sub[index].score = sScore;
					
					index++;
				}
				break;
			case 2:
				
				for(int i=0;i<index;i++){
					printf("%d. Subject's Name : %s\n",i+1,sub[i].name);
					printf("Subject Score : %d\n",sub[i].score);
					
				}
				
				break;
			case 3:
				if(index ==0) printf("Data is empty");
				else{
					index--;
					printf("Success deleting last data...");
				}
				break;
		}
		getchar();
	}while(opt !=4);
	return 0;
}
