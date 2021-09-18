#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Data{
	char words[100];
	int value;
	
	struct Data *next;
}*head,*tail;

/*void pushHead(char w[],int v){
	struct Data *node = (struct Data*)malloc(sizeof(struct Data));
	 strcpy(node->words,w);
	 (*node).value = v;
	node->next = NULL;
	
	if(head == NULL)
		head = tail = node;
	else{
		node->next = head;
		head = node;
	}	 
}*/
void pushTail(char w[],int v){
	struct Data *node = (struct Data*)malloc(sizeof(struct Data));
	strcpy (node->words,w);
	(*node).value = v;
	node->next = NULL;
	
	if(head == NULL)
		head = tail = node;
	else{
		tail->next = node;
		tail = node;
	}	 
}

void pushMidSort(char w[],int v){
	struct Data *node =(struct Data*)malloc(sizeof(struct Data));
	strcpy(node->words,w);
	node->value = v;
	node->next = NULL;
	
	if(head == NULL){
		head = tail = node;
	}else{
		if(v <= head->value){
			//push head
			node->next = head;
			head = node;

	}else if(v >= tail->value){
		//push tail
		tail->next = node;
		tail = node;
	}else{
		//push mid
		struct Data *curr = head;
		while(curr->next->value < v)
			curr = curr->next;
		
		node->next = curr->next;
		curr->next = node;
		
		}
	}
}

void popHead(){
	if(head != NULL){
		if(head == tail){
			free(head);
			head = tail = NULL;
		}
		else{
			struct Data *node = head;
			head = head->next;
			free(node);
			node = NULL;
		}
	}else{
		printf("Data is empty\n");
	}
}

void popTail(){
	if(head != NULL){
		if(head == tail){
			free(head);
			head = tail = NULL;
		}
		else{
			struct Data *node = head;
			while(node->next != tail)
				node = node->next;
			
			tail = node;
			free(tail->next);
			tail->next = NULL;
		}
	}else{
		printf("Data is empty\n");
	}
}

void popMid(int v){
	if(head != NULL){
		if(v == head->value){
			//pop head
			if(head == tail){
				free(head);
				head = tail = NULL;
			}else{
				struct Data *node = head;
				head = head->next;
				free(node);
				node= NULL;
			}
		}else if(v == tail->value){
			//pop tail
			if(head == tail){
				free(head);
				head = tail = NULL;
			}else{
				struct Data *node = head;
				while(node->next !=tail)
				tail = node;
				free(node);
				tail->next = NULL;
			}
			
		}else{
			//pop middle
			struct Data *curr = head;
			while(curr->next->value != v && curr->next != tail){
				curr = curr->next;
			}
			
			if(curr->next->value == v)//FOUND
			{
				struct Data *node = curr->next;
				curr->next = node->next;
				
			}else{
				printf("Data not found\n");
			}
		}
	}
	else
		printf("Data is empty\n");
}
void popAll(){
	while(head !=NULL){
		popHead();
	}
}

void printData(){
	struct Data *curr = head;
	while(curr != NULL){
		printf("%s %d\n",curr->words,curr->value);
		curr = curr->next;
	}
}

int main(){
	
	/*pushTail("andi",10);
	pushTail("budi",20);
	pushTail("caca",30);
	pushTail("doni",40);
	pushTail("Tail",50);
	printData();
	*/
	
	pushMidSort("budi",50);
	pushMidSort("andi",30);
	pushMidSort("eric",40);
	pushMidSort("frans",10);
	pushMidSort("dodi",20);
	
	printf("BEFORE: \n");
	printData();
	
	//popHead();
	//popTail();
	popMid(5);
	
	printf("AFTER:\n");
	printData();
	
	return 0;
}
