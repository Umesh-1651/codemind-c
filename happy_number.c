#include"stdio.h"
int dig_sqr(int n){
	int x=0;
	int k=0;
	while(n!=0){
		k=n%10;
		x=x+(k*k);
		n/=10;
	}
	//printf("x = %d
",x);
	return x;
}
int main()
{
	int n;
	scanf("%d",&n);
	while(n>=9){
	//	printf("n = %d
",n);
		n=dig_sqr(n);	
	}
	if(n==1 || n==7) printf("True");
	else printf("False");
}