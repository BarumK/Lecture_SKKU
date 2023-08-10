#include <stdio.h>
void factorial(int number){
	int output = 1;
	for(int i = number; number > 1; number--){
		output = output * number;
	}
	printf("%d", output); 	
}

int main() {
	int input;
	scanf("%d",&input);
	factorial(input);
	return 0;
}
