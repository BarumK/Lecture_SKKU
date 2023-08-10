#include <stdio.h>

int main() 
{
	int inputNumber, firstNumber, secondNumber, thirdNumber, fourthNumber, fifthNumber;
	
	scanf("%d", &inputNumber);
	
	firstNumber = inputNumber / 10000;
	secondNumber = (inputNumber % 10000) / 1000;
	thirdNumber = ((inputNumber % 10000) % 1000) / 100;
	fourthNumber = (((inputNumber % 10000) % 1000) % 100) / 10;
	fifthNumber = (((inputNumber % 10000) % 1000) % 100) % 10;
	
	printf("%d %d %d %d %d", firstNumber, secondNumber, thirdNumber, fourthNumber, fifthNumber);
	
	return 0;
}
