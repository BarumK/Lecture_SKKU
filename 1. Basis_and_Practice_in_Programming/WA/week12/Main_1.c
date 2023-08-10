#include <stdio.h>
int main() {
	char temp[50];
	
	FILE *inputPtr = fopen("data/c11p1_input.txt", "r");
	for (int i = 0;; i++) {
		char c = fgetc(inputPtr);
		if (c == EOF){
			temp[i] = '\0';
			break;
		}
		else
			temp[i] = c;
	}
	fclose(inputPtr);
	
	FILE *outputPtr = fopen("data/c11p1_output.txt", "w");
	fprintf(outputPtr, "%s", temp);
	fclose(outputPtr);
	
	FILE *fp;
	fp = fopen("data/c11p1_output.txt", "r");
	char output[50];
	fgets(output, 49, fp);
	printf(output);
	fclose(fp);
	return 0;
}
