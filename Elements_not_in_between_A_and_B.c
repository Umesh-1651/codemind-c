#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int r,t,x,m;
    scanf("%d%d",&r,&t);
    if(r<=t){
        m=r;
        x=t;
    }
    else{
        x=r;
        m=t;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(a[i]<m || a[i]>x) {
            sum=1;
            printf("%d ",a[i]);
        }
    }
    if(sum==0) printf("-1");
}