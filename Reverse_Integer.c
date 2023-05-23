#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m=0;
    int h=0;
    while(n!=0){
        m=n%10;
        h=h*10 + m;
        n/=10;
    }
    printf("%d",h);
}