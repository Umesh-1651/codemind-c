#include<stdio.h>
int is_prime(int n){
    for(int i=2;i<n;i++){
        if (n%i ==0) return 0;
    }
    return 1;
    
}
int main(){
    int n,c=0,i,j,a,b;
    scanf("%d",&n);
    for(i=2;i<n;i++){
        for(j=2;j<n;j++){
            if((is_prime(i)==1 && is_prime(j) == 1) && i*j ==n){
                c=1;
                break;
            }
        }
        if(c==1) {
            a=i;
            b=j;
            break;
        }
    }
    if(c==1){
            printf("%d %d",i,j);
        }
    else printf("-1");
}