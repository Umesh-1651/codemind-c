#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int ar[a];
    for(int i=0;i<a;i++){
    scanf("%d",&ar[i]);
    }
    for(int i=a-1;i>=0;i--){
        if(ar[i]%2!=0){
            printf("%d",i);
            break;
        }
    }
}