#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct data {
	int date, month, year;
	char name[100];
	struct data *next, *prev;
}*head, *tail, *temp;

void popHead();
void popAll();
void printAll();
void addData();
void priorityPush(int, int, int, char*);
int getMonthNumber(char*);
char* getMonthName(int);
long getDateNumber(int, int, int);
struct data *createNode(int, int, int, char*);

long getDateNumber(int date, int month, int year) {
	return (long)(year*10000)+(month*100)+date;
}

int getMonthNumber(char *month) {
	if(!strcmp(month, "january"))return 1;
	if(!strcmp(month, "february"))return 2;
	if(!strcmp(month, "march"))return 3;
	if(!strcmp(month, "april"))return 4;
	if(!strcmp(month, "may"))return 5;
	if(!strcmp(month, "june"))return 6;
	if(!strcmp(month, "july"))return 7;
	if(!strcmp(month, "august"))return 8;
	if(!strcmp(month, "september"))return 9;
	if(!strcmp(month, "october"))return 10;
	if(!strcmp(month, "november"))return 11;
	if(!strcmp(month, "december"))return 12;
}

char* getMonthName(int month) {
	switch(month) {
		case 1: return "january";
		case 2: return "february";
		case 3: return "march";
		case 4: return "april";
		case 5: return "may";
		case 6: return "june";
		case 7: return "july";
		case 8: return "august";
		case 9: return "september";
		case 10: return "october";
		case 11: return "november";
		case 12: return "december";
	}
}

void popAll() {
	while(head){
		popHead();
	}
}

void printAll() {
	temp = head;
	while(temp) {
		printf("%d %s %d - %s\n", temp->date, getMonthName(temp->month), temp->year, temp->name);
		temp = temp->next;
	}
}

void addData() {
	int date, year;
	char month[100], name[100];
	scanf("%d %s %d - %[^\n]", &date, month, &year, name); getchar();
	priorityPush(date, getMonthNumber(month), year, name);
	
}

struct data *createNode(int date, int month, int year, char *name) {
	// [1] INSERT YOUR CODE HERE
	temp = (data *)malloc(sizeof(data));
	temp->date = date;
	temp->month = month;
	temp->year = year;
	strcpy(temp->name, name);
	temp->next = temp->prev = NULL;
	return temp;
}

void priorityPush(int date, int month, int year, char *name) {
	// [2] INSERT YOUR CODE HERE
	data *newNode = createNode(date, month, year, name);
	long newDate = getDateNumber(date, month, year);
	long dateTempHead = 0;
	long dateTempTail = 0;
	if(head)dateTempHead = getDateNumber(head->date, head->month, head->year),dateTempTail = getDateNumber(tail->date, tail->month, tail->year);
	
	if(!head)head = tail = newNode;
	else if(head == tail||newDate<dateTempHead||newDate>dateTempTail){
		if(newDate >= dateTempTail)tail->next = newNode,newNode->prev = tail,tail = newNode;
		else head->prev = newNode,newNode->next = head,head = newNode;
		
	}else{
		temp = head;
		long dateTemp = getDateNumber(temp->date, temp->month, temp->year);
		while(temp != tail){
			if(newDate < dateTemp)break;
			temp = temp->next;
			dateTemp = getDateNumber(temp->date, temp->month, temp->year);
		}
		temp->prev->next = newNode;
		temp->prev = newNode;
		newNode->prev = temp->prev;
		newNode->next = temp;
	}
}

void popHead() {
	// [3] INSERT YOUR CODE HERE
	if(head == tail)head = tail = NULL,free(head),free(tail);
	else temp = head,head = head->next,free(temp),head->prev = NULL;	
	
}

int main() {
	int totalPatients, totalCure;
	scanf("%d %d", &totalPatients, &totalCure); getchar();
	for(int i=0; i<totalPatients; i++){
		addData();
	}
		
	
	for(int i=0; i<totalCure; i++)
		popHead();
	
	if(totalPatients < totalCure || totalPatients == totalCure)
		printf("All patients get the cure, %d cure left\n", totalCure-totalPatients);
	else if(totalPatients > totalCure)
		printf("Need %d more cure\n", totalPatients-totalCure);
	
	printAll();
	popAll();
	return 0;
}


