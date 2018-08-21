#include <stdio.h>
#include <stdlib.h>
void main()
{
	int d1,d2,i;
	int *p1,*p2;
	printf("Enter degree of frst and second polynomial\n");
	scanf("%d",&d1);
	scanf("%d",&d2);
	
	p1 = malloc(d1*sizeof(int));
	p2 = malloc(d2*sizeof(int));
	printf("ENter 1st\n");	
	for(i = d1;i>=0;i--)
		scanf("%d",(p1+i));
	
	printf("enter 2nd\n");	
	for(i = d2;i>=0;i--)
		scanf("%d",(p2+i));
	
	if(d1>d2)
	{
		for(i = 0;i<=d2;i++)
		*(p1+i) = *(p1+i)+*(p2+i);	
		for(i = d1;i>0;i--)
		{
			printf("%+dx^%d",*(p1+i),i);
		}
		printf("%d",*(p1+i));
	}
	else if(d2>d1)
        {
                for(i = 0;i<=d1;i++)
                *(p2+i) = *(p2+i)+*(p1+i);
		for(i = d2;i>0;i--)
		{
			printf("%+dx^%d",*(p2+i),i);
		}
		printf("%d",*(p2+i));
	}
	else
        {
                for(i = 0;i<=d2;i++)
                *(p1+i) = *(p1+i)+*(p2+i);
		
		for(i = d1;i>0;i--)
		{
			printf("%+dx^%d ",*(p1+i),i);
		}
		printf("%d",*(p1+i));
	}
	
}
