#include <stdio.h>
int main() {
	int n, m;
	char op;
	printf("Enter two numbers : ");
	scanf("%d %d", &n, &m);
	printf("Enter an operator {+,-,*,/,^} : ");
	scanf("\n%c", &op);	
	int power = 1;
	switch (op) {
		case '+':
			printf("%d%c%d = %d\n", n, op, m, n + m);
			break;
		case '-':
			printf("%d%c%d = %d\n", n, op, m, n - m);
			break;
		case '*':
			printf("%d%c%d = %d\n", n, op, m, n * m);
			break;
		case '/':
			printf("%d%c%d = %d\n", n, op, m, n / m);
			break;
		case '^':
			for (int i = 1; i <= m; i++){
				power *= n;
			}
			printf("%d%c%d = %d\n", n, op, m, power);
			break;
		default:
			printf("You have entered the operator incorrectly\n");
			break;
	}
	return 0;
}
