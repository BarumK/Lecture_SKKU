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
		while(curr != NULL){
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
		NODE *mem = *head;
		while(*head != NULL){
			printf("%d ", (*head)->data);
			*head = (*head)->nextPtr;
		}
		printf("\n");
		*head = mem;
	}		
}

void concatList(NODE **list1, NODE **list2){
	while(*list2 != NULL){
		addElement(list1, (*list2)->data);
		*list2 = (*list2)->nextPtr;
	}
}


int main(void){
	srand(20); // Seed fix.
	int num;
	
	NODE *list[2] = {NULL};	
	
	printf("How many elements? (0 - 100): ");
	scanf("%d", &num);
	
	for(int j = 0; j < 2; j++){
		for(int i = 0; i < num; i++)
			addElement(&list[j], rand() % 100 + 1);
	}
	
	for(int i = 0; i < 2; i++){
		printf("[List %d]\n", i);
		printList(&list[i]);		
	}
	
	concatList(&list[0], &list[1]);
	
	printf("[Concat]\n");
	printList(&list[0]);
		
	return 0;
}

