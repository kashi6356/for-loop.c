#include<stdio.h>

void main()
{
	
	goto start;
	printf("line 1\n");

	printf("line 2\n");
	start:
	printf("line 3\n");
}
