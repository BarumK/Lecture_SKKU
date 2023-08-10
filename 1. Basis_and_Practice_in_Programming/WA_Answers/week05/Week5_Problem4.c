#include <stdio.h>
int convertBinaryToDecimal(int n){
	int result = 0;
	int binary = 1;
	while(1){
		result += binary * (n % 10);
		n /= 10;
		binary *= 2;
		if(n == 0)
			break;
	}
	return result;
}
int main() {
	int input;
	printf("Enter a binary number: ");
	scanf("%d",&input);
	int output = convertBinaryToDecimal(input);
	printf("%d in binary = %d", input, output);
	return 0;
}
