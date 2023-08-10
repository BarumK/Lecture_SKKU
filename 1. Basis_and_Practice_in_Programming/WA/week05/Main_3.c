#include <stdio.h>
int checkPrime(int a){
	if (a == 1) {
		return 0;
	}
	else if (a == 2) {
		return 1;
	}
	
	int condition;
	for (int i = 2; i < a; i++) {
		if ((a % i) == 0) {
			condition = 0;
			break;
		}
		else {
			condition = 1;
		}
	}
	if (condition == 1){
		return 1;
	}
	else if (condition == 0){
		return 0;
	}
}

int main() {
	int input;
	printf("Enter a positive integer: ");
	scanf("%d", &input);
	
	int temp1 = input / 2;
	for (int i = 1; i <= temp1; i++){
		int j = input - i;
		if ( (checkPrime(i) == 1) && (checkPrime(j) == 1) ){
			printf("%d = %d + %d\n", input, i, j);
		}
	}
	
	return 0;
}
