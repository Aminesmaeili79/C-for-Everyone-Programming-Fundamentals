#include<stdio.h>
#define PI 3.14159
int main(void)
{ 
int radius;
printf("Enter radius: ");
scanf("%d", &radius);
printf("volume is : %.2f \n\n", 4.0 / 3 * PI * radius * radius * radius);
return 0;
}