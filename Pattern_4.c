#include <stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    for(int i=r;i>=1;i--){
        for(int j=i;j>=1;j--){
            printf("*",j);
        }
        printf("
");
    }
}