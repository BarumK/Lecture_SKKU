#include <stdio.h>

int getNthBit(int num, int n){
	if (n >= 32)
		return 0;
	return (num >> n) & 1;
}

void displayBits(int num){
	printf("%d = ", num);
	
	for (int i = 31; i >= 0; i--) {
		if ((i + 1) % 8 == 0)
			printf(" ");
		printf("%d", getNthBit(num, i));
	}
}

int main() {
	int num;
	printf("Enter an integer: ");
	scanf("%d",&num);
	
	displayBits(num);
	
	return 0;
}
