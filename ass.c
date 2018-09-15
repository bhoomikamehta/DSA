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
  printf("Elements are \n");
	for(i = 0;i<size;i++)
	printf("%d,",a[i]);
	printf("\n");
}

void sum(int *a)
{
  int sum=0,i;
  for(i = 0;i<size;i++)
  sum += a[i];

  printf("Sum of elements int the array is %d\n",sum );
}

void average(int *a)
{
  int average;
  int sum=0,i;
  for(i = 0;i<size;i++)
  sum += a[i];
  average = sum/size;

  printf("Average of the elemets of the array is %d\n",average);
}

void square(int *a)
{
  int i;
  for(i = 0;i<size;i++)
  printf("Square of %dth elements is %d\n",i+1,a[i]*a[i]);
}

void factorial(int *a)
{
  int fact = 1,i,j;
  for(i = 0;i<size;i++)
  {
    for(j=1;j<=a[i];j++)
      fact *= j;
    printf("Factorial of %dth elements is %d\n",i+1,fact);
    fact = 1;
  }
}

void main()
{
  int choice = 0,arr[100];
  input(&arr[0]);
  while(choice != 6)
  {
    printf("1.Output,2.Sum,3.Average,4.Square,5.Factorial,6,exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
      output(&arr[0]);
      break;

      case 2:
      sum(&arr[0]);
      break;

      case 3:
      average(&arr[0]);
      break;

      case 4:
      square(&arr[0]);
      break;

      case 5:
      factorial(&arr[0]);
      break;

      case 6:
      break;

      default:
      printf("Enter correct option\n");
    }
  }
}
