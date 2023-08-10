#include <stdio.h>
#define string.h FORBIDDEN
#define cstring FORBIDDEN
int main()
{	
	// Your code here
	
	char my_string[100]; 
									/*
										Your implementation:
											fill the blank
									*/
	
	printf("Enter the word : ");
	scanf("%s", my_string); 
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
	char reverse_string[100];
	
	for(int i = 0;; i++) {
		if (my_string[i] != '\0') {
			for (int j = i; j >= 0; j--) {
				reverse_string[j + 1] = reverse_string[j];
			}
			reverse_string[0] = my_string[i];
			string_len++;
		}
		else {
			reverse_string[i] = '\0';
			break;
		}
	}
	
	printf("Word Length : %d\n", string_len);
	
	
	printf("Reverse word : ");
	
	
	/*
		Your implementation:
			print string in reverse order
	*/
	
	printf("%s", reverse_string);
	
}
/* Copy & Paste below sentences for print is recommended
"Enter the word : "
"Word Length : ★\n"
"Reverse word : ★"
*/
