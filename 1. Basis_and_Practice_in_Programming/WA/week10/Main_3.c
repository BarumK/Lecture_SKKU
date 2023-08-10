#include <stdio.h>

void Swap(int* source, int* dest) {
	for (int i = 0; i < 5; i++) {
		source[i] += dest[i];
		dest[i] = source[i] - dest[i];
		source[i] -= dest[i];
	}
	
	printf("Source array after swapping: ");
	for (int i = 0; i < 5; i++)
		printf("%d ", source[i]);
	puts("");
	
	printf("Dest array after swapping: ");
	for (int i = 0; i < 5; i++)
		printf("%d ", dest[i]);
}
int main() {
	int src[5];
	int dst[5];
	
	printf("\nEnter 5 elements in source array: ");
	for (int i=0; i<5; i++)
		scanf ("%d", src+i);
	
	printf("Enter 5 elements in dest array: ");
	for (int i=0; i<5; i++)
		scanf ("%d", dst+i);	
	
	Swap(src, dst);
}
