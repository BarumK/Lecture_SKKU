#include <stdio.h>
int main() {
	int n, m;
	char op;
	printf("Enter two numbers : ");
	scanf("%d %d", &n, &m);
	printf("Enter an operator {+,-,*,/,^} : ");
	scanf("\n%c", &op);	
	int temp = 1;
	switch(op){
		case '+' :
			printf("%d%c%d = %d", n, op, m, n+m);
			break;
		case '-' :
			printf("%d%c%d = %d", n, op, m, n-m);
			break;
		case '*' :
			printf("%d%c%d = %d", n, op, m, n*m);
			break;
		case '/' :
			printf("%d%c%d = %d", n, op, m, n/m);
			break;
		case '^' :
			for(int i = 0; i < m; i++)
				temp *= n;
			printf("%d%c%d = %d", n, op, m, temp);
			break;
		default :
			printf("You have entered the operator incorrectly");
	}
}
