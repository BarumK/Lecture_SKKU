
#include <stdio.h>
#include <string.h>

typedef struct{
	char firstname[20];
	unsigned height;
	unsigned weight;
} Person;

//You can use this function
void BufferCleaner(){	
	while(getchar()!='\n');
}

void FileCleaner(){
	FILE *fp;	
	fp = fopen("data/14w_2.txt", "w");
	fprintf(fp,"");	
	fclose(fp);
	
}
int main() {
	FileCleaner();

	char c;
	char input[100];
	int counter1 = 0;
	int counter2 = 0;
	char yn = 'n';
	while(1) {
		printf("Please select a mode - <W> Write, <F> Find name, <Q> Quit : ");
		c = getchar();
		FILE *ptr;
		if (c == 'Q') {
			printf("Quit program");
			if (counter2 != 0)
				fclose(ptr);
			break;
		}
		else if (c == 'W') {
			ptr = fopen("data/14w_2.txt", "a");
			Person per;
			
			printf("Enter your first name : ");
			scanf("%s", per.firstname);
			printf("Enter your height and weight - (Ex) 181 78 : ");
			scanf("%d %d", &per.height, &per.weight);
			BufferCleaner();
			
			fprintf(ptr, "%s %d %d\n", per.firstname, per.height, per.weight);
			fclose(ptr);
			
			counter1++;
		}
		else if (c == 'F') {
			Person per;
			ptr = fopen("data/14w_2.txt", "r");
			rewind(ptr);
			printf("Enter a name : ");
			scanf("%s", input);
			BufferCleaner();
			
			if ((counter2 == 0)||(counter1 == 0)) {
				printf("Not found\n");
			}
			
			for(int i = 1; i <= counter1; i++) {
				fscanf(ptr, "%s %d %d", per.firstname, &per.height, &per.weight);
				if (strcmp(input, per.firstname) == 0) {
					printf("%s %d %d\n", per.firstname, per.height, per.weight);
					yn = 'y';
				}
				else {
					if ((yn == 'n') && (i == counter1)) {
						printf("Not found\n");
					}
				}
			}
			yn = 'n';
			fclose(ptr);
		}
		counter2++;
		
	}
}

/*
Please select a mode - <W> Write, <F> Find name, <Q> Quit : 
Enter your first name : 
Enter your height and weight - (Ex) 181 78 : 
Enter a name : 
Not found
Quit program

*/
