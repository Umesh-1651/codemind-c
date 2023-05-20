#include<stdio.h>
int main()
{
	int a,cnt0=0,cnt1=0;
	scanf("%d",&a);
	int x[a];
	for(int i=0;i<a;i++)
	{
		scanf("%d",&x[i]);
	}
	for(int i=0;i<a;i++)
	{
		if(x[i]==0)	cnt0++;
		else cnt1++;
	}
	for(int i=1;i<=cnt0;i++)
	{
		printf("0 ");
	}
	for(int i=1;i<=cnt1;i++)
	{
		printf("1 ");
	}
}