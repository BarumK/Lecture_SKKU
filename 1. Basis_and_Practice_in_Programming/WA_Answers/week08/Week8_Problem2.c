#include <stdio.h>
#define string.h FORBIDDEN
#define cstring FORBIDDEN
int main()
{	
	// Your code here
	
	char my_string[101]; // 1 for final '\0'
									/*
										Your implementation:
											fill the blank
									*/
	
	printf("Enter the word : ");
	scanf("%s", my_string); // no & for char array
						/*
							Your implementation:
								fill the blank
						*/
	
	int string_len = 0;
	
	
	/*
		Your implementation:
			calculate the length of the input string
			and save it to string_len
	*/
	while(my_string[string_len] != '\0'){
		string_len++;
	}
	
	
	printf("Word Length : %d\n", string_len);
	
	
	printf("Reverse word : ");
	
	
	/*
		Your implementation:
			print string in reverse order
	*/
	for(int i=string_len-1; i>=0; i--){
		printf("%c", my_string[i]);
	}
	
}
/* Copy & Paste below sentences for print is recommended
"Enter the word : "
"Word Length : ★\n"
"Reverse word : ★"
*/