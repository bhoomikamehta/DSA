#include  <stdio.h>
#include "arrint.h"
void main()
{
	int arr[100],n,choice,i;
	input(&arr[0]);
	printf("Enter choice 1.linear 2.Binary\n");
	scanf("%d",&choice);
	if(choice == 1)
	{
		linearsearch(&arr[0]);
	}
	
	else if(choice == 2)
	{	
		bubblesortasc(&arr[0]);
		output(&arr[0]);
		binarysearch(&arr[0]);
	}	
	else 
		printf("Wrong choice\n");
}
