#include<stdio.h>

int rev(int n){
    int q=0,k=0;
    while(n!=0){
        q=n%10;
        k=(k*10)+q;
        n/=10;
    }
    return k;
}
int is_prime(int n){
    for(int i=2;i<n;i++){
        if (n%i ==0) return 0;
    }
    return 1;
    
}
int main(){
    int n;
    scanf("%d",&n);
    int m=rev(n);
    if(is_prime(n)==1 && is_prime(m)==1) printf("circular prime");
    else if(is_prime(n) == 1 && is_prime(m) ==0 ) printf("prime but not a circular prime");
    else printf("not prime");
}
