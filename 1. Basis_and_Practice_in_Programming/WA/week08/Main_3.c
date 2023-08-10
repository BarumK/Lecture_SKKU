#include <stdio.h>
int main() {	
	int initialValue;
	scanf("%d", &initialValue);
	
	int arr1[6] = {initialValue};
	int arr2[6];
/*
	Your implementation:
		calculate arr1 and arr2 in correct rule
		★☆★ You should not print anything ★☆★
*/

	for (int i = 0; i <= 5; i++) {
		if (i == 0) {
			arr2[i] = arr1[i];
		}
		else {
			arr1[i] = arr1[i - 1] + arr2[i - 1];
			arr2[i] = arr1[i] + arr2[i - 1];
		}
	}


// You should not print any value to get full credit.
// Print will be done below (with template code)
	for(int i=0; i<6; i++) printf("%d ", arr1[i]);
	printf("\n");
	for(int i=0; i<6; i++) printf("%d ", arr2[i]);
	
	return 0;
}
