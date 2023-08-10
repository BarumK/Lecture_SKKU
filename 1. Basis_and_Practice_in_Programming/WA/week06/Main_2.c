#include <stdio.h>
#include <stdlib.h>

//Enter a range : 
//Enter a number : 
//The results ...
int main() {
	srand(50);
// 범위 설정
	int a, b, temp1;
	for (;;) {
		printf("Enter a range : ");
		scanf("%d %d", &a, &b);
		if (a < b) {
			break;
		}
	}
	temp1 = b - a;

// k 할당
	int k;
	for (;;) {
		printf("Enter a number : ");
		scanf("%d", &k);
		if (k > 0) {
			break;
		}
	}

// 난수 출력
	printf("The results ...\n");
	for (int i = 1; i <= k; i++) {
		if (i == k) {
			printf("%d", rand() % temp1 + a);
		}
		else {
			printf("%d ", rand() % temp1 + a);
		}
	}
	return 0;
}
