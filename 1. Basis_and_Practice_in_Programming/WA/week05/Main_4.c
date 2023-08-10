#include <stdio.h>
/*
전체 중요한 처리 절차
1. 10의 제곱을 만드는 반복문
2. for 문을 써서 최고 자릿수 결정
3. 각 자릿수를 나눈다
4. 각 자릿수에 맞게 이진수를 십진수로 바꾼다
5. 총 결과값을 리턴한다
*/
int powerFunction(int n, int m) {
	int total, temp;
	total = 1;
	
	for (int i = 1; i <= m; i++) {
		total *= n;
	}
	
	return total;
}

int convertBinaryToDecimal(int n) {
// 총 몇자릿수인지 확인하기
	int num1;
	for (int i = 1; i <= 10; i++) {
		if ((n / powerFunction(10, i-1)) == 1) {
			num1 = i;
			break;
		}
	}
	
// 각 자릿수 분리
	int temp1, temp2, total;
	total = 0;
	for (int i = num1; i > 0; i--) {
		if(i == num1){
			temp1 = (n / powerFunction(10, i-1));
			temp2 = (n % powerFunction(10, i-1));
			
			total += powerFunction(2, i-1) * temp1;
			temp1 = temp2;
		}
		else{
			if (temp1 / powerFunction(10,i-1) == 1) {
				temp2 = (temp1 % powerFunction(10,i-1));
				temp1 = (temp1 / powerFunction(10,i-1));
				
				total += powerFunction(2,i-1) * temp1;
				temp1 = temp2;
			}
			else{
				temp1 = temp2;
			}
		}
	}
	
	return total;
}

int main() {
	int input;
	printf("Enter a binary number: ");
	scanf("%d", &input);
	printf("%d in binary = ", input);
	printf("%d", convertBinaryToDecimal(input));
	
	return 0;
}
