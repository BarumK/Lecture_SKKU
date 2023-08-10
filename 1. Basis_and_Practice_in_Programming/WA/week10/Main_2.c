#include <stdio.h>

void Permute(char* source)
{
	printf("The permutations of %s is ", source);
	
	// 경우의수: 123 132 213 231 312 321
	
	printf("%c%c%c ", source[0], source[1], source[2]);
	printf("%c%c%c ", source[0], source[2], source[1]);
	printf("%c%c%c ", source[1], source[0], source[2]);
	printf("%c%c%c ", source[1], source[2], source[0]);
	printf("%c%c%c ", source[2], source[0], source[1]);
	printf("%c%c%c ", source[2], source[1], source[0]);
}

int main() {
	char input[4];
	
	printf("Input string: ");
	scanf("%s", input);
	
	Permute(&input);
	
	return 0;
}
