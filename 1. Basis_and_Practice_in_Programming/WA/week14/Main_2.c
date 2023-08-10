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
	scanf("%d", &word_num); // In intermediate you don't need to use this variable. This will be 2 in the all testcases.
	scanf("%d", &para); // In intermediate you don't need to use this variable. This will be 1 in the all testcases.
	scanf("%d", &bin_num); // In intermediate you don't need to use this variable. This will be 1 in the all testcases.
// --------------------------------This is your playground.---------------------------------
printf("________________________Summary________________________\n");

int c = 0, a = 0, n = 0;
int p = 0, l = 0, s = 0, t = 0, i = 0;

for (int j = 0; trashes[j] != '\0'; j++) {
	if (trashes[j] == 'c')
		c++;
	else if (trashes[j] == 'a')
		a++;
	else if (trashes[j] == 'n')
		n++;
	else if (trashes[j] == 'p')
		p++;
	else if (trashes[j] == 'l')
		l++;
	else if (trashes[j] == 's')
		s++;
	else if (trashes[j] == 't')
		t++;
	else if (trashes[j] == 'i')
		i++;
}

int can = 0, plastic = 0;

can = c;
if (a <= can) 
	can = a;
if (n <= can)
	can = n;

c -= can;
a -= can;
n -= can;

plastic = p;
if (p <= plastic)
	plastic = p;
if (l <= plastic)
	plastic = l;
if (a <= plastic)
	plastic = a;
if (s <= plastic)
	plastic = s;
if (t <= plastic)
	plastic = t;
if (i <= plastic)
	plastic = i;
if (c <= plastic)
	plastic = c;

printf("There are %d cans %d plastics in the 0th bin.", can, plastic);
//________________________Summary________________________
//There are %d cans %d plastics in the %dth bin.	

	return 0;
}
