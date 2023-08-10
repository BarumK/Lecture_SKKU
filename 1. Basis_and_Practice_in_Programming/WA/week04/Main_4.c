#include <stdio.h>
int main() {
	float interest, principal, rate; 
	int days;

	for (;;){
		printf("Enter loan principal (-1 to end): ");
		scanf("%f", &principal);
		
		if (principal == -1)
			break;
		else{
			printf("Enter interest rate: ");
			scanf("%f", &rate);
			printf("Enter term of the loan in days: ");
			scanf("%d", &days);
			
			interest = principal * rate * days / 365;
			printf("The interest charge is $%.2f\n\n", interest);
		}
	}

	return 0;
}

/*
 Copy & Paste below sentences for print is recommended
"Enter loan principal (-1 to end): "
"Enter interest rate: "
"Enter term of the loan in days: "
"The interest charge is $"
*/
