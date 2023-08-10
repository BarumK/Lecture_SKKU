#include <stdio.h>
void factorial(int a){
	int temp = 1;
	
	for (int i = 1; i <= a; i++) {
		temp *= i;
	}
	
	printf("%d", temp);
}
int main() {
	int input;
	scanf("%d", &input);
	
	factorial(input);
	
	return 0;
}
