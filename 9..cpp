#include<stdio.h>
#include<math.h>
int main()
{
    double Celsius,Fahrenheit;
    printf("Enter the tempereature in degree Fahrenheit:");
    scanf("%lf",&Fahrenheit);
    Celsius=(5.0/9.0)*(Fahrenheit-32.0);
    printf("%lf",Celsius);
    return 0;
}