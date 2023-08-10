#include <stdio.h>

int main() 
{
	int x, y;
	
	printf("Enter a coordinate point :");
	scanf("%d %d", &x, &y);
	
	if (x == 0 && y == 0)
		printf("The point(%d,%d) lies at the intersection of the two axes.", x, y);
	else if (x == 0)
		printf("The point(%d,%d) lies at y axe.", x, y);
	else if (y == 0)
		printf("The point(%d,%d) lies at x axe.", x, y);
	else if (x > 0 && y > 0)
		printf("The point(%d,%d) lies in the First quadrant.", x, y);
	else if (x > 0)
		printf("The point(%d,%d) lies in the Fourth quadrant.", x, y);
	else if (y > 0)
		printf("The point(%d,%d) lies in the Second quadrant.", x, y);
	else
		printf("The point(%d,%d) lies in the Third quadrant.", x, y);

	return 0;
}
/*
The point(%d,%d) lies at the intersection of the two axes.
The point(%d,%d) lies at y axe.
The point(%d,%d) lies at x axe.
The point(%d,%d) lies in the First quadrant.
The point(%d,%d) lies in the Fourth quadrant.
The point(%d,%d) lies in the Second quadrant.
The point(%d,%d) lies in the Third quadrant.
*/
