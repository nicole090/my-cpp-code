#include<stdio.h>
int main()
{
    float volume,length,width,depth;
    length=25.0,width=10.0,depth=6.0;
    volume=0.3048*(length*width*depth);
    printf("%f",volume);
    return 0;
}