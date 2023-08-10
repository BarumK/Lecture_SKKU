#include <stdio.h>

int main() {
	unsigned int counter;
	int num;
	
	counter = 2;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	while (counter < num) {
		if (num % counter == 0){
			printf("It is not a Prime Number.");
			break;
		}
		else if (counter + 1 == num){
			printf("It is a Prime Number.");
		}
		counter += 1;
	}
	
	return 0;
}
/*
"Enter a number: "
"It is not a Prime Number."
"It is a Prime Number."
*/
