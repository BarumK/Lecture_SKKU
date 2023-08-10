#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node {
	int data;
	struct node *nextPtr;
}NODE;

void push(NODE **stack, int value){
	NODE *newPtr = malloc(sizeof(NODE));
	if(newPtr != NULL){
		newPtr->data = value;
		newPtr->nextPtr = *stack;
		*stack = newPtr;
	}else{
		printf("%d not inserted. No memory available.\n", value);
	}
}

int pop(NODE **stack){
	NODE *tmpPtr = *stack;
	int popValue = (*stack)->data;
	*stack = (*stack)->nextPtr;
	free(tmpPtr);
	return popValue;
}

int isEmpty(NODE **stack){
	return *stack == NULL;
}

void printStack(NODE *head){
	if(head == NULL)
		printf("The stack is empty.\n");
	else{
		printf("The stack is: ");
		while(head != NULL){
			printf("%d --> ", (head)->data);
			head = (head)->nextPtr;
		}
		printf("NULL\n");
	}		
}

void instructions(void){
	printf("Enter choice:\n");
	printf("1 to push a value on the stack\n");
	printf("2 to pop a value off the stack\n");
	//printf("3 to reverse stack\n"); // 굳이?
	printf("3 to end program\n");	
}

int main(void){
	srand(20); // Seed fix.
	NODE *stackPtr = NULL;
	int choice, value;
	
	instructions();
	printf(": ");
	scanf("%d", &choice);
	
	while(choice != 3){
		switch(choice){
			case 1:
				printf("Enter an integer: ");
				scanf("%d", &value);
				push(&stackPtr, value);
				printStack(stackPtr);
				break;
			case 2:
				if(!isEmpty(&stackPtr)){
					printf("The popped value is %d.\n", pop(&stackPtr));
				}
				printStack(stackPtr);
				break;
			default:
				printf("Invalid choice.\n");
				instructions();
				break;
		}
		printf(": ");
		scanf("%d", &choice);		
	}
	printf("End of run.\n");	
	return 0;
}

