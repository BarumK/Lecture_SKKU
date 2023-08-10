#include <stdio.h>
#include <stdlib.h>

//I have a number between 1 and 1000.
//Can you guess my number?
//Please type your guess : 
//Too High. Try again.
//Too Low. Try again.
//Excellent! You guessed the number!

int main() {
	srand(50);
	int randNum = rand() % 1000 + 1;
	printf("I have a number between 1 and 1000.\n");
	printf("Can you guess my number?\n");
	
	int input;
	for (;;) {
		printf("Please type your guess : ");
		scanf("%d", &input);
		if (input > randNum) {
			printf("Too High. Try again.\n");
		}
		else if (input < randNum) {
			printf("Too Low. Try again.\n");
		}
		else {
			printf("Excellent! You guessed the number!");
			break;
		}
	}
	
	return 0;
}
