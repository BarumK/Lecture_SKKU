#include <stdio.h>
#define for noIter
#define while noIter
int nSystem(int n, int k){
	if ((k / n) >= 1) {
		return (10 * nSystem(n , (k / n)) + (k % n));
	}
	else {
		return ((10 * (k / n)) + (k % n));
	}
}

#ifdef for
#undef for
#endif
#ifdef while
#undef while
#endif


int main() {
	int n = 0, k;
	
	while(n != 2 && n != 4 && n != 8){
		printf("Enter a system (2, 4 or 8) : ");
		scanf("%d", &n);
	}
	printf("Enter a number : ");
	scanf("%d", &k);
	
	printf("%d\n", nSystem(n, k));
	
	return 0;
}
