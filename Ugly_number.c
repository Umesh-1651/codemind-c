# include <stdio.h>
# include <string.h>

int main()
{
int n,x=0;
  /*printf("

 Check whether a given number is an ugly number:
");
  printf("----------------------------------------------------
");
  printf("Input an integer number: ");*/
  scanf("%d",&n);

      if (n <= 0) {  
            //printf("Input a correct number.");  
        }
       while (n != 1) 
       {  
            if (n % 5 == 0) 
            {  
                n /= 5;  
            } 
            else if (n % 3 == 0) 
            {  
                n /= 3;  
            } 
            else if (n % 2 == 0) 
            {  
                n /= 2;  
            } 
            else 
            {  
                printf("Not Ugly Number"); 
                x = 1;  
                break;  
            }  
        } 
		        if (x==0)
		        { 
                printf("Ugly Number");
                }
}