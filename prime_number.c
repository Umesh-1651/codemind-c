#include<stdio.h>
//#include<math.h>
#include<stdlib.h>
int main()
{
	int n,c=0;
	scanf("%d",&n);
	for(int i=2;i<n;i++){
	    if(n%i == 0){
	        printf("not a prime");
	        c=1;
	        break;
	    }
	}
	if(c!=1) printf("prime");
}
              
