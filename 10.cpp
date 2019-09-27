#include<stdio.h>
#include<math.h>
int main()
{
    double length,width;
    printf("Enter the length of the room:");
    scanf("%lf",&length);
    printf("Enter the width of the room:");
    scanf("%lf",&width);
    printf("%lf",length*width);
    return 0;
}