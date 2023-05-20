#include <stdio.h>
int main()
{
    int i, j, k,n,ctr;
       scanf("%d",&n);
       int arr1[n];
       for(i=0;i<n;i++)
            {
	      scanf("%d",&arr1[i]);
	    }
    for(i=0; i<n; i++)
    {
        ctr=0;
        for(j=0,k=n; j<k+1; j++)
        {
            if (i!=j)
            {
		       if(arr1[i]==arr1[j])
              {
                 ctr++;
               }
             }
        }
       if(ctr==0)
        {
          printf("%d",arr1[i]);
        }
    }
}