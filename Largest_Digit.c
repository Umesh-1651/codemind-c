#include<stdio.h>
int main()
{
	int a,max,n;
	scanf("%d",&a);
	max=a%10;
	while(a!=0)
	{
		n=a%10;
		if(n>max) max=n;
		a/=10;
	}
	printf("%d",max);
}