#include <stdio.h>

void matrix_printer(int a[4][4], int b[4][4]){
	printf("MatrixA \t MatrixB\n");
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf(" %d", a[i][j]);
		}
		
		printf(" \t");
		
		for (int j = 0; j < 4; j++) {
			printf(" %d", b[i][j]);
		}
		
		puts("");
	}
	
		printf("\n");
}

void matrix_operation(int a[4][4], int b[4][4], char operator){
    printf("\nResult\n");
	if (operator == '+') {
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++)
				printf(" %d", a[i][j] + b[i][j]);
			puts("");
		}
	}
	
	else {
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++)
				printf(" %d", a[i][j] - b[i][j]);
			puts("");
		}
	}
}
int main(){
    int matrixA[4][4];
    int matrixB[4][4];
    char operator;
// assign each elements of matrix by yourself
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++){
			scanf("%d", &matrixA[i][j]);
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++){
			scanf("%d", &matrixB[i][j]);
		}
	}
	
	printf("\n");
    matrix_printer(matrixA, matrixB);
		
    printf("Enter operator(+, -): ");
    do{
			scanf("%c", &operator);
		}while(operator != '+' && operator != '-');

    matrix_operation(matrixA, matrixB, operator);

    return 0;
}
