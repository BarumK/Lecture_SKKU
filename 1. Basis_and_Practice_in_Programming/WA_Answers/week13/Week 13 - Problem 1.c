#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node {
	int data;
	struct node *nextPtr;
}NODE;

int addElement(NODE **head, int item){
	// 1) Make new NODE.
	NODE *newPtr = malloc(sizeof(NODE));
	if(newPtr != NULL){
		newPtr->data = item;
		newPtr->nextPtr = NULL;
		
		NODE *prev = NULL;
		NODE *curr = *head;

		// 2) Find appropriate location to add (Ascending order).
		while(curr != NULL && item > curr->data){
			prev = curr; 
			curr = curr->nextPtr;
		}

		// 3) Insert NewPtr to the list
		if(prev == NULL){ 
			newPtr->nextPtr = *head;
			*head = newPtr;		
		}else{ 
			prev->nextPtr = newPtr;
			newPtr->nextPtr = curr;		
		}
	}else{
		printf("%c not inserted. No memory available.\n", item);
	}
}

void printList(NODE **head){
	if(*head == NULL)
		printf("List is empty.\n");
	else{
		while(*head != NULL){
			printf("%d ", (*head)->data);
			*head = (*head)->nextPtr;
		}
		printf("\n");
	}		
}

int main(void){
	srand(20); // Seed fix.
	int data[100];
	int num;
	
	printf("How many elements? (0 - 100): ");
	scanf("%d", &num);
	
	for(int i = 0; i < num; i++)
		data[i] = rand() % 100 + 1;
	
	printf("Randomly generated array.\n");
	for(int i = 0; i < num; i++)
		printf("%d ", data[i]);
	printf("\n\n");
	
	printf("Sorted(Ascending) linked-list.\n");
	NODE *start = NULL;
		
	for(int i = 0; i < num; i++){
		addElement(&start, data[i]);
	}
	printList(&start);
	
	return 0;
}

