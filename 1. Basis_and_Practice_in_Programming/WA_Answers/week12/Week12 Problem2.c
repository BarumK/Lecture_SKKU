#include <stdio.h>
#include <string.h>
int main() {
	char file1[20];
	char file2[20];
	
	char text1[100];
	char text2[100];
	printf("Path of first file : ");
  scanf("%s", file1);
	printf("Path of second file : ");
	scanf("%s", file2);
	FILE *fp, *fp2;
	
	char temp1, temp2;
	
	int result = 1;
	fp = fopen(file1, "r");
	fp2 = fopen(file2, "r");
	while((fscanf(fp, "%c", &temp1)) != EOF){
		fscanf(fp2, "%c", &temp2);
		if(temp1 == temp2){
			continue;
		}
		else{
			result = 0;
			break;
		}
	}
	if((fscanf(fp2,"%c", &temp2)) != EOF)
		result = 0;
	if(result == 1)
		printf("Two files are same.\n");
	else
		printf("Two files are different.\n");


	return 0;
}