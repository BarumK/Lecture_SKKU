#include <stdio.h>
#include <math.h>
#define MAX_SIZE 10

void decimalToBinary (char* c, int num, int size)
{
	for (int i=0; i<size; i++)
		*(c+i) = '0';
	
	while (num!=0)
	{
		if (num%2 == 1)
			*(c+size-1) = '1';
		else
			*(c+size-1) = '0';
		num = num / 2; 
		size -= 1;
	}
}
void coin(char* c, int n)
{
	for(int i = 0; i < (int)pow(2,n); i++) {
		decimalToBinary(c, i, n);
		for(int j = 0; j < n; j++) {
			printf("%c", c[j]);
		}
		puts("");
	}
}

int main()
{
	 char c[MAX_SIZE];
   int n;
   printf("Case? ");
   scanf("%d", &n);
   coin (c, n);
}
