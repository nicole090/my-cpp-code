#include<stdio.h>
int main()
{
    int x,y;
    double z;
    x=98,y=55;
    z=x*1.0/(x+y)*1.0;
    printf("%lf%%",z*100);

    return 0;
}