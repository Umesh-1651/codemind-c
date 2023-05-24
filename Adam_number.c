#include<stdio.h>
int main()
{
	int N=0,Rev=0,Orig=0,Sr=0,So=0,Srr=0;
	scanf("%d",&N);
	Orig=N;
	for( ;N>0;N=N/10)
		Rev=(Rev*10)+(N%10);
		So=Orig*Orig;
		Sr=Rev*Rev;
	for( ;Sr>0;Sr=Sr/10)
        Srr=(Srr*10)+(Sr%10);
	if(Srr==So)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}