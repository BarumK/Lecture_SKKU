#include <stdio.h>
int main() {
	int max_val = -1, max_idx = -1;
	
	printf("Enter nonnegative ten numbers: ");
	
	for(int i=0; i<10; i++){
		int t;	
		scanf("%d",&t);
		
		/*
			Your implementation:
				When t can be the maximum value,
				set max_idx and max_val to proper value.
		*/
		if(t > max_val){
			max_val = t;
			max_idx = i;
		}
		
	}
	
	printf("Array[%d] = %d", max_idx+1, max_val);	
	
	
}
/* Copy & Paste below sentences for print is recommended
"Enter nonnegative ten numbers: "
"Array[★] = ☆"
*/