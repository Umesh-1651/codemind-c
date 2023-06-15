#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    scanf("%s",s);
    int cnt1=0,cnt2=0,i;
    for (i = 0; i < strlen(s); i++)
    {
        if(s[i] == 'z') cnt1++;
        else cnt2++;
    }
    if(2*cnt1 == cnt2) printf("Yes");
    else printf("No");
}
