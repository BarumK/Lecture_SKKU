#include <stdio.h>

int main() 
{
	int TotalMinutes, hours, minutes, seconds, temp1;
	
	scanf("%d", &TotalMinutes);
	
	hours = TotalMinutes / 3600;	
	temp1 = TotalMinutes % 3600;
	minutes = temp1 / 60;
	seconds = temp1 % 60;

	printf("%d:%d:%d", hours, minutes, seconds);
	
	return 0;
}
