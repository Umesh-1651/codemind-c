#include<stdio.h>
//#include<math.h>
#include<stdlib.h>
int main()
{
	int a,cnt=0,LP=0,GP=0;
	scanf("%d",&a);
	for(int i=1;i<a;i++)
	{
		if(a%i==0) cnt++;	
	}
	if(cnt==1)
	{
		printf("0");
		exit(0);
	}
	cnt=0;
	for(int i=a-1;i>=1;i--)
	{
		cnt=0;	
		for(int j=1;j<i;j++)
		{
			if(i%j==0) cnt++;
		}
		if(cnt==1)
		{
			LP=i;
			break;
		}
	}
	cnt=0;
	for(int i=a+1;;i++)
	{
		cnt=0;
		for(int j=1;j<i;j++)
		{
			if(i%j==0) cnt++;
		}
		if(cnt==1)
		{
			GP=i;
			break;
		}
	}
	if((a-LP)<(GP-a))
	{
		printf("%d",(a-LP));
	}
	else
	{
		printf("%d",(GP-a));
	}
}
              
