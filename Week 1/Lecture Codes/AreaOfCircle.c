#include <stdio.h>

#define PI 3.14159

int main(void)
{
	double area, radius;
	printf("Enter the radius of your circle: ");
	scanf("%lf", &radius);
	area = PI * radius * radius;
	printf("The area of the circle with %.2lf radius, is: %.2lf", radius, area);
	return 0;
}
