#include <stdio.h>

#define for noIter
#define while noIter

int sumUP(int n){
	if (n == 1) {
		return 3 * n + 2;
	}
	else {
		return (3 * n + 2) + sumUP(n - 1);
	}
}

#ifdef for
#undef for
#endif
#ifdef while
#undef while
#endif

int main() {
	
	int n = 0, ret;
	
	while(1){
		printf("Enter a positive integer : ");
		scanf("%d", &n);
		if(n < 0)
			break;
		ret = sumUP(n);
		printf("Sum up to %dth term = %d\n", n, ret);
	}
	
	return 0;
}
