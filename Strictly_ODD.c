#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i%2!=0){
            if(a[i]%2!=0) sum=sum;
            else sum=1;
        }
    }
    if(sum == 0) printf("True");
    else printf("False");

}