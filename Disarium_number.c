#include<stdio.h>
int po(int a,int b){
	int A=1;
	for(int i=1;i<=b;i++){
		A = A*a;
	}
	return A;
}
int main()
{
    int a;
    scanf("%d",&a);
    int sum=0,i=1,A=a;
    int rev=0,t=a;
    while(t!=0)
    {
        rev=(rev*10)+(t%10);
        t/=10;
    }
    while(rev!=0)
    {
        sum=sum+po((rev%10),i);
        rev/=10;
        i++;
    }
    if(sum==A) printf("True");
    else printf("False");
}