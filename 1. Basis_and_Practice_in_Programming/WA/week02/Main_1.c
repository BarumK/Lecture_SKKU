#include <stdio.h>

int main() 
{
	float radius, diameter, circumference, area;
	float Pi = 3.14159;
	
	printf("Enter the radius: ");
	scanf("%f", &radius);
	
	diameter = 2 * radius;
	circumference = diameter * Pi;
	area = Pi * radius * radius;
	
	printf("Diameter of a circle: %f\n", diameter);
	printf("Circumference of a circle: %f\n", circumference);
	printf("Area of a circle: %f\n", area);
	
	return 0;
}
