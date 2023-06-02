#include<stdio.h>
int arr[4]; 
int biggest(int a,int b,int c,int d){
	int big = a;
	if(big<b) big=b;
	if(big<c) big=c;
	if(big<d) big=d;
	return big;
}
int get(int i){
	int k=arr[i];
	if(k==6) return k=9;
	return k=6;
}
int array_reversor(){
	int a[4];
	a[0]=arr[3];
	a[1]=arr[2];
	a[2]=arr[1];
	a[3]=arr[0]; 
	arr[0]=a[0];
	arr[1]=a[1];
	arr[2]=a[2];
	arr[3]=a[3]; 
}
void array_convertor(int n){
    int i=3;
    while(i>=0){
        arr[i] = n%10;
        n/=10;
        i--;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    if(n==9999) printf("9999");
    else{
	    array_convertor(n);
	    int a=get(0);
	    a=(a*1000)+(arr[1]*100)+(arr[2]*10)+arr[3];
	    int b=get(1);
	    b=(arr[0]*1000)+(b*100)+(arr[2]*10)+arr[3];
	    int c=get(2);
	    c=(arr[0]*1000)+(arr[1]*100)+(c*10)+arr[3];
	    int d=get(3);
	    d=(arr[0]*1000)+(arr[1]*100)+(arr[2]*10)+d;
	    int ans = biggest(a,b,c,d);
	    printf("%d",ans);
	}
}