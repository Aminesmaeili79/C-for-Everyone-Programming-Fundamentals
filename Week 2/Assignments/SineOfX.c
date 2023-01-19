/*

    This program takes the value of x 
    from the user and gives out the output
    of sine of x.

    Date: 19/1/23

*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, result;

    printf("Enter the value to calculate the sine: ");
    scanf("%lf", &x);

    result = sin(x);

    printf("The sine of x is equal to: %lf\n", result);

    return 0;
}