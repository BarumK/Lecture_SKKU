#include <stdio.h>

int main() {	
	unsigned int len1, len2, len3, sum1, sum2, sum3;
	scanf("%d %d %d", &len1, &len2, &len3);
	
	sum1 = len1 + len2;
	sum2 = len2 + len3;
	sum3 = len3 + len1;
	
	if ( (sum1 > len3) && (sum2 > len1) && (sum3 > len2) ) {
		printf("%s", "Possible");
	}
	else{
		printf("%s", "Impossible");
	}
	
	return 0;
}
/* Copy & Paste below sentences for print is recommended
"Possible"
"Impossible"
*/
