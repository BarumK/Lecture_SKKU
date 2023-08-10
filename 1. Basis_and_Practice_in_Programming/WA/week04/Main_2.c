#include <stdio.h>
int main() {
	int i = 1;
	int spaceNum, j;
	
	for (; i < 5; i++) {
		spaceNum = 6 - i;
		printf("\n");
		for (j = 1; j <= spaceNum; j++) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		for (j = 1; j < i; j++) {
			printf("*");
		}
	}

	for (; i > 0; i--) {
		spaceNum = 6 - i;
		printf("\n");
		for (j = 1; j <= spaceNum; j++) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		for (j = 1; j < i; j++) {
			printf("*");
		}
	}

	return 0;
}
