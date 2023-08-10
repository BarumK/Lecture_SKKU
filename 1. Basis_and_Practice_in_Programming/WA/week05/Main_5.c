#include <stdio.h>
void reversePrint(int number);

int main() {
	int input;
	scanf("%d", &input);
	reversePrint(input);
	
	return 0;
}

void reversePrint(int number){
	int total, temp1;
	total = 0;
	for(;;) {
		if (number >= 10) {
			total *= 10;
			temp1 = number % 10;
			total += temp1;
			number = (number - temp1) / 10;
		}
		else{
			total *= 10;
			total += number;
			break;
		}
	}
	
	printf("%d", total);
}
