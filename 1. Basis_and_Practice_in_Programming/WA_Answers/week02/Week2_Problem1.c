#include <stdio.h>
int main() {
    float r;
    float pi = 3.14159;
    printf("Enter the radius: ");
    scanf("%f", &r);
    
    printf("Diameter of a circle: %f\n", r*2);
    printf("Circumference of a circle: %f\n", 2*pi*r);
    printf("Area of a circle: %f\n", pi*r*r);
    return 0;
}

