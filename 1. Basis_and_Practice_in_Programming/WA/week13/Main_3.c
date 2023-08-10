#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node {
	int data;
	struct node *nextPtr;
}NODE;

void push(NODE **stack, int value){
	// Write your code.
	NODE *newPtr = malloc(sizeof(NODE));
	newPtr->data = value;
	newPtr->nextPtr = *stack;
	*stack = newPtr;
}

int pop(NODE **stack){
	// Write your code.
	int i = (*stack)->data;
	*stack = (*stack)->nextPtr;
	return i;
}

int isEmpty(NODE **stack){
	// Write your code.
	if ((*stack == NULL)) {
		return 1;
	}
	else{
		return 0;
	}
}

void printStack(NODE *head){
	// Write your code.	
	NODE *ptr = head;
	if (isEmpty(&ptr)) {
		printf("The stack is empty.\n");
	}
	else {
		printf("The stack is: ");
		while (ptr != NULL) {
			printf("%d --> ", ptr->data);
			ptr = ptr->nextPtr;
		}
		printf("NULL\n");
	}
}
void instructions(void){
	printf("Enter choice:\n");
	printf("1 to push a value on the stack\n");
	printf("2 to pop a value off the stack\n");
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
				printStack(stackPtr); // Note that we used 'stackPtr' instead of '&stackPtr'. 
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

