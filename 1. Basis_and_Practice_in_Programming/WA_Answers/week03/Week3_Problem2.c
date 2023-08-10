#include <stdio.h>
int main() {
	int reg_num = 0;
	printf("Enter first seven digit of your resident registration number : ");
	scanf("%d", &reg_num);
	
	if(reg_num > 9999999)
		return 0;
	
	int year = reg_num / 100000;
	int month = reg_num / 1000 % 100;
	int day = reg_num / 10 % 100;
	int gender = reg_num % 10;
	if(gender <= 2)
		year += 1900;
	else
		year += 2000;

	printf("You born on %d / %d / %d.\n", year, month, day);

	if(gender == 1)
		printf("Your Gender is male (born 1900-1999)\n");
	else if (gender == 2)
		printf("Your Gender is female (born 1900-1999)\n");
	else if (gender == 3)
		printf("Your Gender is male (born 2000-present)\n");
	else if (gender == 4)
		printf("Your Gender is female (born 2000-present)\n");

	
	
	return 0;
}
