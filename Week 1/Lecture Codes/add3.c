#include <stdio.h>

int main(void)
{
	float a, b, c, sum;
	printf("Enter three values: \n");
	scanf("%f %f %f", &a, &b, &c);
	printf("The values are: a = %.2f\tb = %.2f\tc = %.2f\n", a, b, c);
	sum = a + b + c;
	printf("The sum of the entered values is: %.2f", sum);

	return 0;
}
