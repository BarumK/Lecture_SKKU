#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node {
	int data;
	struct node *nextPtr;
}NODE;

int addElement(NODE **head, int item){
	// Similar implementation to prob1
	// But, you don't have to sort
	NODE *newPtr = malloc(sizeof(NODE));
	NODE *curr;
	
	newPtr->data = item;
	newPtr->nextPtr = NULL;
	
	if (*head == NULL) {
		*head = newPtr;
	}
	else {
		curr = *head;
		while(curr->nextPtr != NULL) {
			curr = curr->nextPtr;
		}
		curr->nextPtr = newPtr;
	}
}

void printList(NODE **head){
	// Similar implementation to prob1
	// But you have to restore "head" after print out.
	NODE *curr;
	
	curr = *head;
	
	if(curr == NULL) {
		printf("List is empty.");
	}
	else {
		while (curr != NULL) {
			printf("%d ", curr->data);
			curr = curr->nextPtr;
		}
	}
	puts("");
}

void concatList(NODE **list1, NODE **list2){
	// Use addElement function.
	NODE *curr;
	
	if ((*list1 != NULL) && (*list2 != NULL)) {
		curr = *list1;
		
		while(curr->nextPtr != NULL) {
			curr = curr->nextPtr;
		}
		
		curr->nextPtr = *list2;
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
