#include<stdio.h>
int main()
{
        int a, b, x, y, s, hcf, lcm;
        scanf("%d%d",&x,&y);
        a=x;
        b=y;
        while(b!=0)
        {
                s=b;
                b=a%b;
                a=s;
        }
        hcf=a;
        lcm=(x*y)/hcf;
        printf("%d",hcf);
        return 0;
}
