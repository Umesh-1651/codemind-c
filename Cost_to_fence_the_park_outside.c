#include<stdio.h>
int main(){
	int l,b,w,c,ar1,ar2,L,B,cost;
	scanf("%d%d%d%d",&l,&b,&w,&c);
	ar1=l*b;
	L = l+2*w;
	B=b+2*w;
	ar2= L*B;
	cost = ar2-ar1;
	printf("%d",cost*c);
}