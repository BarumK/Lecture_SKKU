#include <stdio.h>
#include <ctype.h>

#define MAXLEN 100	

int main() {
	int digits = 0, alphabets = 0;
	char sentence[MAXLEN];
	int len;
	printf("Enter a sentence :");
	int c;
	len = 0;
	while ((len < MAXLEN - 1) && (c = getchar()) != '\n') {
		digits = isdigit(c) ? ++digits : digits;
		alphabets = isalpha(c) ? ++alphabets : alphabets;
		len++;
	}
	printf("%d digits and %d alphabets in the given sentence.\n", digits, alphabets);
	return 0;
}
