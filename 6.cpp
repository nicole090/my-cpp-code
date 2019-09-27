#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,y1,y2,d;
    x1=7,y1=12,x2=3,y2=9;
    d=sqrt(pow((x1 - x2),2)+pow((y1 -y2),2));
    printf("%lf",d);
    return 0;


}