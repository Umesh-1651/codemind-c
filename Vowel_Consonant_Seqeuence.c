#include <stdio.h>
#include <string.h>

int main()
{
    char message[100];
    scanf("%s",message);
    int i,cntv=0,cntc=0;
    char prev,cur;
    for (i = 0; i < strlen(message); i++)
    {
        
        if(message[i] == 'a' ||message[i] == 'e' ||message[i] == 'i' ||
        message[i] == 'o' ||message[i] == 'u') {
            cur = 'V';
        }
        else{
           cur = 'C';
        }
        if(i>0){
        if(prev != cur) printf("%c",prev);
        }
        prev = cur;
        
    }
    printf("%c",cur);
    return 0;
}