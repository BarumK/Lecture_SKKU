#include <stdio.h>
int checkPrime (int a){
	for(int i = 2; i <= a/2; i++)
		if(a%i == 0)
			return 0;
	return 1;
}
int main() {
	int input;
	printf("Enter a positive integer: ");
	scanf("%d",&input);
	for(int i = 2; i <= input/2; i ++)
		if(checkPrime(i) == 1)
			if(checkPrime(input-i) == 1)
				printf("%d = %d + %d\n", input, i, input-i);
	return 0;
}
