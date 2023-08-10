#include <stdio.h>
int main() {
	
	int values[5] = {-1, -1, -1, -1, -1};
	
	for(int idx=0; idx<5; idx++){
		while((values[idx] < 0) || (values[idx] > 10)){  
					/*
						Your implementation:
							fill in the blank
							that it would iterate until
								get proper value
					*/
			printf("Input number #%d (0~10) : ", idx+1);
			scanf("%d", &values[idx]);
		}
	}
	
	printf("%8s%s\n","","[Histogram]");
	
	
	/*
		Your implementation:
			print histogram using value of values[i]
	*/
	
	for (int i = 10; i >= 1; i--) {
		printf("%2d:", i);
		
		if (i <= values[0]) printf("%5s", "*");
		else printf("%5s", "");
		
		if (i <= values[1]) printf("%5s", "*");
		else printf("%5s", "");
		
		if (i <= values[2]) printf("%5s", "*");
		else printf("%5s", "");
		
		if (i <= values[3]) printf("%5s", "*");
		else printf("%5s", "");
		
		if (i <= values[4]) printf("%5s\n", "*");
		else printf("%5s\n", "");
	}
	
	
	printf("------------------------------\n");
	
	
	/*
		Your implementation:
			print final line
	*/
	
	printf("%6s[1]  [2]  [3]  [4]  [5]", "");
	
	return 0;
}
/* Copy & Paste below sentences for print is recommended
"Input number #★ (0~10) : "
"[Histogram]"
"------------------------------\n"
" [★] "
*/
