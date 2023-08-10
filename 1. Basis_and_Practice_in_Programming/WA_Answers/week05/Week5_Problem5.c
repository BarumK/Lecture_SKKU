#include <stdio.h>
void reversePrint(int number){
	int result = 0;
	while(1){
		result = result * 10 + (number % 10);
		number /= 10;
		if(number == 0)
			break;
	}
	printf("%d", result);
}

int main() {
	int input;
	scanf("%d",&input);
	reversePrint(input);
	return 0;
}
