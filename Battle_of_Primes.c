#include<stdio.h>
int main(){
    int n,m,a=0,b;
    scanf("%d%d",&n,&m);
    int s=n+m;
    for(int i=1;;i++){
        int cnt=0;
        for(int j=2;j<(i+s);j++){
            if(((i+s)%j) == 0) {
                cnt++;
                break;
            }
        }
           if(cnt==0){ 
            b=i;
            break;
           }
        }
        
        printf("%d",b);
    }