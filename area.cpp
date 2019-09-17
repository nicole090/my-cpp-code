#include<stdio.h>
int main()
{
    float length, width,area,perimeter;
    length=5.48, width=3.5;
    area = length * width;
    printf("%lf\n",area);
    perimeter = 2 * (length + width);
    printf("%lf",perimeter);
    return 0;
}