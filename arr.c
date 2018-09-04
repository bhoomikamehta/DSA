#include <stdio.h>
int size;
void input(int *a)
{
	int i;
	printf("enter size of array\n");
        scanf("%d",&size);
	printf("Enter Array\n");
	getchar();
        for(i = 0;i<size;i++)
        {
		scanf("%d",&a[i]);
	}
}

void output(int *a)
{
	int i;
	for(i = 0;i<size;i++)
	printf("%d",a[i]);
	printf("\n");
}


void binarysearch(int *a)
{
	int search,i,j,mid,temp,high,low,flag = 0;	
	
	printf("Enter element\n");
	scanf("%d",&search);
		
	high = size-1;
	low = 0;
	mid = (high +low)/2;	
	while(low<=high)
	{
		mid = (high + low)/2;
		
		if(search>a[mid])
		{
			low = mid+1;
		}
		
		else if(search<a[mid])
		{
			high = mid-1;
		}
			
		else if(search == a[mid])
		{
			printf("Element found at %d position \n",mid+1);

			flag = 1;
			break;
		}
 	}
	if(flag == 0)
	printf("Element not found\n");
}

void linearsearch(int *a)
{
	int key,i,flag = 0;
	printf("Enter Key\n");
	scanf("%d",&key);
	for(i = 0;i<size;i++)
	{
		if(key == a[i])
		{
			printf("Element found at %d\n",i+1);
			flag = 1;
		}
	}
	if(flag == 0)
	printf("Element not found");
}

void bubblesortasc(int *a)
{
	int i,j,temp;
	for(i = 0;i<size;i++)
	{
		for(j = 0;j<size-1;j++)
		{
			if(a[j]>a[j+1])	
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

void bubblesortdesc(int *a)
{
        int i,j,temp;
        for(i = 0;i<size;i++)
        {
                for(j = 0;j<size-1;j++)
                {
                        if(a[j]<a[j+1])
                        {
                                temp = a[j];
                                a[j] = a[j+1];
                                a[j+1] = temp;
                        }
                }
        }
}

void finput(float *a)
{
	int i;
	printf("enter size of array\n");
        scanf("%d",&size);
	printf("Enter Array\n");
        for(i = 0;i<size;i++)
        {
		scanf("%f",&a[i]);
	}
}

void foutput(float *a)
{
	int i;
	for(i = 0;i<size;i++)
	printf("%f ",a[i]);
	printf("\n");
}


void fbinarysearch(float *a)
{
	int i,j,mid,temp,high,low,flag = 0;	
	float search;
	
	printf("Enter element\n");
	scanf("%f",&search);
		
	high = size-1;
	low = 0;
	mid = (high +low)/2;	
	while(low<=high)
	{
		mid = (high + low)/2;
		
		if(search>a[mid])
		{
			low = mid+1;
		}
		
		else if(search<a[mid])
		{
			high = mid-1;
		}
			
		else if(search == a[mid])
		{
			printf("Element found at %d position \n",mid+1);

			flag = 1;
			break;
		}
 	}
	if(flag == 0)
	printf("Element not found\n");
}

void flinearsearch(float *a)
{
	int i,flag = 0;
	float key;
	printf("Enter Key\n");
	scanf("%f",&key);
	for(i = 0;i<size;i++)
	{
		if(key == a[i])
		{
			printf("Element found at %d\n",i+1);
			flag = 1;
		}
	}
	if(flag == 0)
	printf("Element not found");
}

void fbubblesortasc(float *a)
{
	int i,j;
	float temp;
	for(i = 0;i<size;i++)
	{
		for(j = 0;j<size-1;j++)
		{
			if(a[j]>a[j+1])	
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

void fbubblesortdesc(float *a)
{
        int i,j;
	float temp;
        for(i = 0;i<size;i++)
        {
                for(j = 0;j<size-1;j++)
                {
                        if(a[j]<a[j+1])
                        {
                                temp = a[j];
                                a[j] = a[j+1];
                                a[j+1] = temp;
                        }
                }
        }
}

