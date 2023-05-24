#include<stdio.h>
int main()
{
    int a=0,b=1,c=1,range,n;
    scanf("%d",&range);
    for(n=a;n<range;n++)
    {
        printf("%d ",a);
        a=b;
        b=c;
        c=a+b;
    }
}
