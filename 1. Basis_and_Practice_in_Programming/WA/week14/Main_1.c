#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define findIndex(x) (x - 'a')
#define MAX_TRASH_SIZE 1000 
// --------------------------------This is your playground.---------------------------------

int main(void){
	int bin_num = 0;
	int word_num = 0;
	int para = 0; 
	char * trashes = (char *)malloc(sizeof(char) * MAX_TRASH_SIZE);

	scanf("%s", trashes);
	scanf("%d", &word_num); // In basic you don't need to use this variable. This will be 1 in the all testcases.
	scanf("%d", &para); // In basic you don't need to use this variable. This will be 1 in the all testcases.
	scanf("%d", &bin_num); // In basic you don't need to use this variable. This will be 1 in the all testcases.
// --------------------------------This is your playground.---------------------------------
printf("________________________Summary________________________\n");

int c = 0, a = 0, n = 0;
for (int i = 0; trashes[i] != '\0'; i++) {
	switch (trashes[i]) {
		case 'c':
			c++;
			break;
			
		case 'a':
			a++;
			break;
			
		case 'n':
			n++;
			break;
			
		default:
			break;
	}
}

int can = 0;

if (c <= a) {
	if (c <= n) {
		can = c;
	}
	else{
		can = n;
	}
}
else {
	if (a <= n) {
		can = a;
	}
	else
		can = n;
}

bin_num = 0;

printf("There are %d cans in the %dth bin.", can, bin_num);
//________________________Summary________________________
//There are %d cans in the %dth bin.	

	return 0;	
}
