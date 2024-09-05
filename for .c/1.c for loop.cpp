#include<stdio.h>

  main()
{
	int n,i,first=1,second=2,sum;
	printf("enter n:");
	scanf("%d",&n);//n=5
	
	printf("%d %d ",first,second);
	for(i=1; i<=n;i++);
	{
		sum=first+second;
		printf("%d\n",&sum);
		first=second;
		second=sum;
	}
}
