#include<stdio.h>
int is_pal(int n){
	int N=n;
	int t=0,k=0;
	while(n!=0){
		t=n%10;
		k=(k*10)+t;
		n/=10;
	}
	if(N==k) return 1;
	else return 0;
}
int fpal(int n){
	int r=0;
	for(int i=n+1;;i++){
		if(is_pal(i) == 1){
			r=i;
			break;
		}
	}
	return r;
}
int bpal(int n){
	int r=0;
	for(int i=n-1;;i--){
		if(is_pal(i) == 1){
			r=i;
			break;
		}
	}
	return r;
}
int main(){
		int n;
		scanf("%d",&n);
		int a=fpal(n);
		int b=bpal(n);
		if((a-n)< (n-b)) printf("%d",a);
		else if((a-n) == (n-b)) printf("%d %d",b,a);
		else printf("%d",b);
} 
