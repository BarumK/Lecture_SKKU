#include <stdio.h>
int main() {
	FILE *fp, *fp2;
	
	fp = fopen("data/c11p1_input.txt", "r");
	fp2 = fopen("data/c11p1_output.txt", "w");

	char contents[50];
	fgets(contents, 49, fp);
	fputs(contents, fp2);
	fclose(fp);
	fclose(fp2);
	
	fp = fopen("data/c11p1_output.txt", "r");
	char output[50];
	fgets(output, 49, fp);
	printf(output);
	fclose(fp);
	return 0;
}