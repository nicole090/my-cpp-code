#include<stdio.h>
int main()
{
    int x=889;
    double salestax=0.06,price;
    price = x *(1+salestax);
    printf("%f\n",price);
    return 0;
}