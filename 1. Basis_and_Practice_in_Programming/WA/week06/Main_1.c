#include <stdio.h>
#include <stdlib.h>

//Enter a positive number from 1 to 9 : 
//The system number is 	
//You Lose.
//You Win.
//You Draw.

int main() {
	srand(50);
// 입력 값 할당하기
	int input;
	for (;;) {
		printf("Enter a positive number from 1 to 9 : ");
		scanf("%d", &input);
		if ((input >= 1)&&(input <= 9)) {
			break;
		}
	}
	
// 난수 생성
	int randNum = (rand() % 9) + 1;
	printf("The system number is %d.\n", randNum);
	
// 승패 결정
	if (input > randNum) {
		printf("You Win.");
	}
	else if (input == randNum) {
		printf("You Draw.");
	}
	else {
		printf("You Lose.");
	}
	return 0;
}
