#include <stdio.h>
#include <ctype.h>

#define MAXLEN 100

int main() {
	int digits = 0, alphabets = 0;
	char sentence[MAXLEN];
	int len;
	
	printf("Enter a sentence :");
	for(len = 0; len < MAXLEN && (sentence[len] = getchar()) != '\n'; len++);
	
	sentence[len] = '\0';
	
	for(int i = 0; i < len; i++){
		if(isdigit(sentence[i]))
			digits++;
		else if(isalpha(sentence[i]))
			alphabets++;
	}
	
	printf("%d digits and %d alphabets in the given sentence.\n", digits, alphabets);
	
	return 0;
}
