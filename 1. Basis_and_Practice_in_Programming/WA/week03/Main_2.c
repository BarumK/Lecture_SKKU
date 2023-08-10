#include <stdio.h>

int main (void) {
	int input, year, month, day, gender;
	printf("Enter first seven digit of your resident registration number : ");
	scanf("%d", &input);
	year = input / 100000;
	month = (input % 100000) / 1000;
	day = ( (input % 100000) % 1000 ) / 10;
	gender = input % 10;
	
	if (gender == 1) {
		printf("You born on %d / %d / %d.\n", 1900 + year, month, day);
		printf("Your Gender is male (born 1900-1999)");
	}
	else if (gender == 2) {
		printf("You born on %d / %d / %d.\n", 1900 + year, month, day);
		printf("Your Gender is female (born 1900-1999)");
	}
	else if (gender == 3) {
		printf("You born on %d / %d / %d.\n", 2000 + year, month, day);
		printf("Your Gender is male (born 2000-present)");
	}
	else {
		printf("You born on %d / %d / %d.\n", 2000 + year, month, day);
		printf("Your Gender is female (born 2000-present)");
	}
	
}
/* Use following sentences for output
"Enter first seven digit of your resident registration number : "
"You born on ★ / ☆ / ★.\n"
"Your Gender is male (born 1900-1999)"
"Your Gender is female (born 1900-1999)"
"Your Gender is male (born 2000-present)"
"Your Gender is female (born 2000-present)"
*/
