#include <stdio.h>
int main() {
	float principal, rate;
	int days;
	while(1){
		printf("Enter loan principal (-1 to end): ");
		scanf("%f", &principal);
		if(principal==-1)
			break;
		printf("Enter interest rate: ");
		scanf("\n%f", &rate);
		printf("Enter term of the loan in days: ");
		scanf("\n%d", &days);
		printf("The interest charge is $%.2f",principal*rate*days/365);
		printf("\n\n");
	}
	return 0;	
}
