#include <stdio.h>
int main() {
	int input;
	printf("Enter the integer number : ");
	scanf("%d",&input);
	printf("%-12s%-12s\n", "n", "!");
	for (unsigned int i = 1; i <= input; i++) {
		if ( (i % 2) != 0) {
			int factorial = 1;
			for (int j = 1; j <= i; j++) {
				factorial *= j;
			}
			printf("%-12d%-12d\n", i, factorial);
		}
	}
	return 0;
}
