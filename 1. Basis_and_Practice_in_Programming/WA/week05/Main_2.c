#include <stdio.h>
int addNumbers(int a){
	int temp = 0;
	
	for (int i = 1; i <= a; i++) {
		temp += i;
	}
	
	return temp;
}

int main() {
	int a;
	
	printf("Enter a positive integer: ");
	scanf("%d", &a);
	
	printf("Sum = %d", addNumbers(a));
	
	return 0;
}
