#include <stdio.h>
int main() {
	int flag = 0;
	for(int i = 1; i >= 1; i++){
		printf("\n");
		for(int j = 5; j >= i; j--){
			printf(" ");
		}
		for(int k = 1; k < 2*i; k++){
			printf("*");
		}
		if(i==5){
			flag = 1;
		}
		if(flag == 1){
			i -= 2;
		}
	}
	return 0;
}
