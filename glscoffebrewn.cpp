#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Menu{
	char nameMenu[100];
	int numb = 1;
	int type;
	int quan;
	int price;
	struct Menu *next;
	struct Menu *prev;
}*Head = NULL, *Tail = NULL;

int count = 1;

struct Menu *newData(char nameMenu[], int type, int quan, int price){
	struct Menu *newNode = (struct Menu*) malloc(sizeof(struct Menu));
	strcpy(newNode->nameMenu, nameMenu);
	newNode->type = type;
	newNode->price = price;
	newNode->quan = quan;
	newNode->next = NULL;
	newNode->prev = NULL;
	count++;
	
	return newNode;
}

void pushHead(char nameMenu[], int type, int quan, int price){
	struct Menu *temp = newData(nameMenu, type, quan, price);
	if(Head == NULL){
		Head = temp;
		Tail = temp;
	}
	else{
		Head->prev = temp;
		temp->next = Head;
		Head = temp;
	}
}

void pushTail(char nameMenu[], int type, int quan, int price){
	struct Menu *temp = newData(nameMenu, type, quan, price);
	if(Head == NULL){
		Head = temp;
		Tail = temp;
	}
	else{
		Tail->next = temp;
		temp->prev = Tail;
		Tail = temp;
	}
}

void popHead(){
	if(Head == NULL){
		printf("No Data");
	}
	else{
		struct Menu *temp = Head;
		Head = Head->next;
		Head->prev->next = NULL;
		Head->prev = NULL;
		free(temp);
		temp = NULL;	
	}
}

void popTail(){
	if(Head == NULL){
		printf("No Data");
	}
	else{
		struct Menu *temp = Tail;
		Tail = Tail->prev;
		Tail->next->prev = NULL;
		Tail->next = NULL;
		free(temp);
		temp = NULL;
	}
}

void popMid(int numb){
	if(Head == NULL){
		printf("No Data");
	}
	else if(Head->numb == numb){
		popHead();
	}
	else if(Tail->numb == numb){
		popTail();
	}
	else{
		struct Menu *curr = Head;
		while(curr != NULL && curr->numb != numb){
			curr = curr->next;
		}
		if(curr == NULL){
			printf("%c Tidak ada Dalam Data\n", numb);
		}
		else if(curr->numb == numb){
			curr->prev->next = curr->next;
			curr->next->prev = curr->prev;
			curr->prev = NULL;
			curr->next = NULL;
			free(curr);
			curr = NULL;
		}
	}	
}

void printAll(){
	struct Menu *curr = Head;
	int cou = 1;
	while(curr != NULL){
		if(curr->type == 1){
			printf("%d  |\t  %s \t\t|Coffee \t|\t%d \t|\t%d\t|\n", cou, curr->nameMenu, curr->quan, curr->price);
		}
		else if(curr->type == 0){
			printf("%d  |\t  %s \t|Non-Coffee \t|\t%d \t|\t%d\t|\n", cou, curr->nameMenu, curr->quan, curr->price);
		}
		curr = curr->next;
		cou++;
	}
}

void MenuAwal(){
	char name[100];
	printf("Enter Your Name : ");
	scanf("%s",&name);
	printf("================================================================================\n");
	printf("\t\t\t\t++++ Brew Coffee Shop ++++\n\n");
	printf("Welcome, Mr./Mrs. %s\n\n", name);
	printf("=================================================================================\n");
	printf("No.| \t| Menu \t\t\t| Type \t\t| Quantity \t|      Price    |\n"); 
	printf("---------------------------------------------------------------------------------\n");
	printAll();
	
}

void MenuCust(){
	printf("1. Buy Item\n");
	printf("2. Cancel Item\n");
	printf("3. View Item\n");
	printf("4. Exit\n");
	printf(" \n");
	printf("__________________________________________________________________________________\n");
	printf(" \n");
	printf("Enter your action: ");
}


int main(){
	
	int role;
	char MB[100];
	char comp[100];
	int QB;
	int PB;
	int TB;
	char tempM[100];
	int tempQ = 0;
	int tempP = 0;
	int tempT = 0;
	int dropp;
	int hm = 1;
	int dropp2;
	char temp[100];
	int typetemp;
	int qual;
	int pric;
	
	strcpy(temp, "Americano");
	typetemp = 1;
	qual = 23;
	pric = 19000;
	pushTail(temp, typetemp, qual, pric);
	
	strcpy(temp, "Chocolate Baked");
	typetemp = 0;
	qual = 15;
	pric = 24000;
	pushTail(temp, typetemp, qual, pric);
	
	strcpy(temp, "Alberto");
	typetemp = 1;
	qual = 7;
	pric = 44000;
	pushTail(temp, typetemp, qual, pric);
	
	do{
		MenuAwal();
		MenuCust();
		scanf("%d", &role);
		getchar();
		if(role == 1){
			do{
				printf("Choose your menu[1-%d] : ", count);	
				scanf("%d", &dropp); getchar();
			}while(dropp < 1 || dropp > 3);
			struct Menu *curr = Head;
			while(curr != NULL){
				if(curr->numb == dropp){
					strcpy(curr->nameMenu, tempM);
					tempP = curr->price;
					tempT = curr->type;
					tempQ = curr->quan;
				}
				curr == curr->next;
			}
			do{
				printf("Enter the Quantity [1-%d] : ", tempQ);
				scanf("%d", &dropp2);
				getchar();
			}while(dropp2 < 1 || dropp2 > tempQ);
			tempQ = tempQ - dropp2;
			popMid(dropp);
			pushTail(tempM, tempT, tempQ, tempP);
			hm++;
		}
		else if(role == 2){
			printf("\nCanceling Your Order...\n");
			printf("Press Enter to Continue..");
			getchar();
			hm = 0;
		}
		else if(role == 3){
			system("cls");
			int hitung = 1;
			if(hm >= 1){
				printf("Your Order : \n");
				printf("No.| \tMenu \t\t\t| Type \t\t| Quantity \t| Price|\n");
				if(tempT == 1){
					printf("%d \t%s \t\tCoffee \t\t%d \t\t%d\n", hitung, tempM, tempQ, tempP);
				}
				else if(tempT == 0){
					printf("%d \t%s \tNon-Coffee \t%d \t\t%d\n", hitung, tempM, tempQ, tempP);
				}
				printf("Press Enter to Continue...");
				getchar();					
			}
			else if(hm == 0){
				printf("There is No Order!\nPress Enter to Continue...");
				getchar();
				}
			}
		}while(role != 3);
	
	return 0;
}

