#include <stdio.h>


#define for noIter
#define while noIter


unsigned int isPalindromic(int number[], int leftIdx, int rightIdx){
	
	if (leftIdx == rightIdx - 1){
		if (number[leftIdx] == number[rightIdx])
			return 1;
		else
			return 0;
	}
	
	else if (leftIdx == rightIdx){
		return 1;
	}
	
	else {
		if (number[leftIdx] == number[rightIdx])
			return isPalindromic(number, (leftIdx + 1), (rightIdx - 1));
		else
			return 0;
	}
	
}
#ifdef for
#undef for
#endif
#ifdef while
#undef while
#endif

int main() {
	int num = 0;
	scanf("%d",&num);
	
	int input[num];		
	for(int i= 0; i<num; i++)
		scanf("%d",&input[i]);

	unsigned int result = isPalindromic(input, 0, num-1);	

	if(result)
		printf("This is a Palindrome.");
	else
		printf("This isn't a Palindrome.");
	
	return 0;	
}
