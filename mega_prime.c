#include<stdio.h>
int main()
{
	    int cnt=0,cnt1=0,cnt2=0,a,t;
	    scanf("%d",&a);
	    for(int i=1;i<=a;i++)
	    {
	        if(a%i==0) cnt++;
	    }
	    if(cnt==2)
	    {
	        while(a!=0)
	        {
	            t=a%10;
	            cnt=0;
	            for(int i=1;i<=t;i++)
	            {
	            	if(t%i==0) cnt++;
	            }
	            if(cnt==2)  cnt1++;
	            cnt2++;
	            a/=10;
	        }
	        if(cnt1==cnt2)  printf("Mega Prime");
	        else printf("Not Mega Prime");
	    }
	    else printf("Not Mega Prime");
}