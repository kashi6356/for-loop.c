#include<stdio.h>

void main()
{
	int n,i;
	printf("enter n:");
	scanf("%d",&n);
	
	for(i=1;i<=25;i++)
	{
		if(i==n)
		{
			continue;
		}
		printf("%d\n",i);
	}
}
