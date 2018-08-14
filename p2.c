#include <stdio.h>

void main()
{
	int n,i,j;
	printf("enter a number");
	scanf("%d",&n);
	
	for(i = n;i>=1;i--)
	{
		for(j = i;j>=1;j--)
			printf("%d",j);
		printf("\n");
	}
}
