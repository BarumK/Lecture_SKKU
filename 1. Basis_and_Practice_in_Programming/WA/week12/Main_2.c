#include <stdio.h>
#include <string.h>
int main() {
	char first[11], second[11];
	printf("Path of first file : ");
	scanf("%s", first);
	printf("Path of second file : ");
	scanf("%s", second);
	
	FILE *ptr1 = fopen(first, "r");
	FILE *ptr2 = fopen(second, "r");
	
	char TF;
	
	for (int i = 0;; i++) {
		char c1 = fgetc(ptr1);
		char c2 = fgetc(ptr2);
		
		if ((c1 == EOF) || (c2 == EOF)) {
			break;
		}
		else if (c1 == c2) {
			TF = 'T';
		}
		else {
			TF = 'F';
			break;
		}
	}
	fclose(ptr1);
	fclose(ptr2);
	
	if (TF == 'T')
		printf("Two files are same.\n");
	else
		printf("Two files are different.\n");
	
	return 0;
}

//printf("Path of first file : ");
//printf("Path of second file : ");
//printf("Two files are same.\n");
//printf("Two files are different.\n");
