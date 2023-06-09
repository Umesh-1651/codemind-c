#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    int avg = sum/n;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]>=avg) cnt++;
    }
    printf("%d",cnt);
}