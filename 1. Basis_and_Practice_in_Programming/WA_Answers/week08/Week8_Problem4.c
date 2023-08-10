#include <stdio.h>
int main() {
	
	int values[5] = {-1, -1, -1, -1, -1};
	
	for(int idx=0; idx<5; idx++){
		while(values[idx] < 0 || values[idx] > 10){  
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
	for(int val=10; val>=1; val--){
		printf("%2d:", val);
		for(int idx=0; idx<5; idx++){
			printf("%4s", "");
			if(values[idx] >= val) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	
	
	printf("------------------------------\n");
	
	
	/*
		Your implementation:
			print final line
	*/
	printf("%5s", "");
	for(int idx=0; idx<5; idx++) printf(" [%d] ", idx+1);
	
	return 0;
}
/* Copy & Paste below sentences for print is recommended
"Input number #★ (0~10) : "
"[Histogram]"
"------------------------------\n"
" [★] "
*/