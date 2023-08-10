#include <stdio.h>
int main() {
	int input;
	printf("Enter the integer number : ");
	scanf("%d",&input);
	printf("n           ");
	printf("!           ");
	for(int i = 1; i <= input; i++){
		if(i%2==1){
			printf("\n");
			int temp = 1;
			for(int j = 1; j <= i; j++){
				temp *= j;
			}
			printf("%-12d", i);
			printf("%-12d", temp);
		}
	}
	return 0;
}
