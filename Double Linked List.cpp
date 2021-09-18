#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Gerbong{
	char name[100];
	struct Gerbong *next;
	struct Gerbong *prev;
}*Head = NULL, *Tail = NULL;

//Push & Pop
//Push = Untuk menambahkan Data
//Pop = untuk menghapus Data

struct Gerbong *newGerbong(char name[]){
	struct Gerbong *newData = (struct Gerbong*)malloc(sizeof(struct Gerbong));
	strcpy(newData->name, name);
	newData->next = NULL;
	newData->prev = NULL;
	return newData;
}

void pushHead(char name[]){
	struct Gerbong *temp = newGerbong(name);
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

void pushTail(char name[]){
	struct Gerbong *temp = newGerbong(name);
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

void pushMid(char name[]){
	struct Gerbong *temp = newGerbong(name);
	if(Head == NULL){
		Head = Tail = temp;
	}
	else if(strcmp(Head->name,name) > 0){
		pushHead(name);
	}
	else if(strcmp(Tail->name,name) < 0){
		pushTail(name);
	}
	else{
		struct Gerbong *curr = Head;
		while(curr && strcmp(curr->name,name) < 0){
			curr = curr->next;
		}
		curr->prev->next = temp;
		temp->prev = curr->prev;
		temp->next = curr;
		curr->prev = temp;
	}
}

void popHead(){
	if(Head == NULL){
		printf("Data ngga ada, gimana mau dihapus");
	}
	else{
		struct Gerbong *temp = Head;
		Head = Head->next;
		Head->prev->next = NULL;
		Head->prev = NULL;
		free(temp);
		temp = NULL;	
	}
}

void popTail(){
	if(Head == NULL){
		printf("Data ngga ada, gimana mau dihapus");
	}
	else{
		struct Gerbong *temp = Tail;
		Tail = Tail->prev;
		Tail->next->prev = NULL;
		Tail->next = NULL;
		free(temp);
		temp = NULL;
	}
}

void popMid(char name[]){
	if(Head == NULL){
		printf("Data ngga ada, gimana mau dihapus");
	}
	else if(strcmp(Head->name,name) == 0){
		popHead();
	}
	else if(strcmp(Tail->name,name) == 0){
		popTail();
	}
	else{
		struct Gerbong *curr = Head;
		while(curr != NULL && strcmp(curr->name,name) != 0){
			curr = curr->next;
		}
		if(curr == NULL){
			printf("%s Tidak ada Dalam Data\n", name);
		}
		else if(strcmp(curr->name,name) == 0){
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
	struct Gerbong *curr = Head;
	while(curr != NULL){
		printf("%s ", curr->name);
		curr = curr->next;
	}
}

int main(){
	pushHead("D");
	printAll();
	puts("");
	pushHead("G");
	printAll();
	puts("");
	pushHead("Z");
	printAll();
	puts("");
	pushTail("H");
	printAll();
	puts("");
	pushTail("N");
	printAll();
	puts("");
	pushMid("E");
	printAll();
	puts("");
	pushMid("Z");
	printAll();
	puts("");
	popHead();
	printAll();
	puts("");
	popHead();
	printAll();
	puts("");
	popTail();
	printAll();
	puts("");
	popTail();
	printAll();
	puts("");
//	popMid("Z");
//	printAll();
//	puts("");
	popMid("D");
	printAll();
	puts("");
	
	
	return 0;
}

