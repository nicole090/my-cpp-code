#include<stdio.h>
int main()
{
    float celsius;
    float fahrenheit = 86.5;

    celsius = 5.0/9.0 * (fahrenheit - 32.0);
    printf("The Celsius equivalent of %5.2f degrees Fahrenheit\n",fahrenheit);
    printf("     is %5.2f degree\n", celsius);

    return 0;
}