#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i] ==0 || a[i] %2==  0){
            sum+=1;
        }
    }
    if(sum == n) printf("True");
    else printf("False");

}