#include <stdio.h>
int fib(int n);
int seq(int n);

int main() {
	int input;
	printf("Target Distance : ");
	scanf("%d", &input);
	
	int counter = 0;
	
	for (int i = 1; fib(i) < input; i++) {
		for (int j = 1; fib(j) < input; j++) {
			if (fib(i) + fib(j) == input)
				counter++;
		}
	}
	for (int i = 1; seq(i) < input; i++) {
		for (int j = 1; seq(j) < input; j++) {
			if (seq(i) + seq(j) == input)
				counter++;
		}
	}
	for (int i = 1; fib(i) < input; i++) {
		for (int j = 1; seq(j) < input; j++) {
			if (fib(i) + seq(j) == input)
				counter++;
		}
	}
	
	printf("Number of possible pogo combination is %d\n", counter);
	
	return 0;
}



int fib(int n) {
	if (n == 1)
		return 3;
	else if (n == 2)
		return 5;
	else
		return (fib(n - 1) + fib(n - 2));
}

int seq(int n) {
	if (n == 1)
		return (3 * n - 2);
	else
		return ((3 * n - 2) + seq(n - 1));
}
/*
printf("Number of possible combination is %d\n", combination);
*/
