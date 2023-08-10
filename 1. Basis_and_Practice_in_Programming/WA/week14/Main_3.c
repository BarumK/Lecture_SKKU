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
	scanf("%d", &word_num); // You don't need to use this variable. This will be 2 in the all testcases.
	scanf("%d", &para);	// You don't need to use this variable. This will be 2 in the all testcases.
	scanf("%d", &bin_num); 
// --------------------------------This is your playground.---------------------------------
printf("________________________Summary________________________\n");

int c0 = 0, a0 = 0, n0 = 0;
int p0 = 0, l0 = 0, s0 = 0, t0 = 0, i0 = 0;

int c1 = 0, a1 = 0, n1 = 0;
int p1 = 0, l1 = 0, s1 = 0, t1 = 0, i1 = 0;

for (int counter = 0; trashes[counter] != '\0'; counter++) {
	if ((counter % 2) == 0) {
		switch (trashes[counter]) {
			case 'c':
				c0++;
				break;
				
			case 'a':
				a0++;
				break;
				
			case 'n':
				n0++;
				break;
				
			case 'p':
				p0++;
				break;
				
			case 'l':
				l0++;
				break;
				
			case 's':
				s0++;
				break;
				
			case 't':
				t0++;
				break;
				
			case 'i':
				i0++;
				break;
		}
	}
	else {
		switch (trashes[counter]) {
			case 'c':
				c1++;
				break;
				
			case 'a':
				a1++;
				break;
				
			case 'n':
				n1++;
				break;
				
			case 'p':
				p1++;
				break;
				
			case 'l':
				l1++;
				break;
				
			case 's':
				s1++;
				break;
				
			case 't':
				t1++;
				break;
				
			case 'i':
				i1++;
				break;
		}
	}
}

int can0, plastic0, can1, plastic1;

can0 = c0;
	if (a0 <= can0)
		can0 = a0;
	if (n0 <= can0)
		can0 = n0;
can1 = c1;
	if (a1 <= can1)
		can1 = a1;
	if (n1 <= can1)
		can1 = n1;

c0 -= can0;
a0 -= can0;
n0 -= can0;
c1 -= can1;
a1 -= can1;
n1 -= can1;

plastic0 = p0;
	if (l0 <= plastic0)
		plastic0 = l0;
	if (a0 <= plastic0)
		plastic0 = a0;
	if (s0 <= plastic0)
		plastic0 = s0;
	if (t0 <= plastic0)
		plastic0 = t0;
	if (i0 <= plastic0)
		plastic0 = i0;
	if (c0 <= plastic0)
		plastic0 = c0;
plastic1 = p1;
	if (l1 <= plastic1)
		plastic1 = l1;
	if (a1 <= plastic1)
		plastic1 = a1;
	if (s1 <= plastic1)
		plastic1 = s1;
	if (t1 <= plastic1)
		plastic1 = t1;
	if (i1 <= plastic1)
		plastic1 = i1;
	if (c1 <= plastic1)
		plastic1 = c1;

printf("There are %d cans %d plastics in the 0th bin.\n", can0, plastic0);
printf("There are %d cans %d plastics in the 1th bin.\n", can1, plastic1);
//________________________Summary________________________
//There are %d cans %d plastics in the %dth bin.	

	return 0;
}
