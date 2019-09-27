#include<stdio.h>
#include<math.h>
int main()
{
    double radius,circumference;
    printf("Enter the radius of a circle:\n");
    scanf("%lf",&radius);
    circumference = 2 * 3.1416 * radius;
    printf("The circumference of the circle is %lf\n",circumference);
    return 0;

}