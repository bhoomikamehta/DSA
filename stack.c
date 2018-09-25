#include <stdio.h>
#include <string.h>
#define MAX 20
char stack[20];
int top = -1;
void push(char);
char pop();
void main()
{
	char str[20];
	int i;
	printf("enter string \n");
	scanf("%[^\n]s",str);
	for(i = 0;i<strlen(str);i++)
	{
		push(*(str+i));
	}
		
	for(i = 0;i<strlen(str);i++)
	{
		*(str+i)=pop();
	}
	
	printf("Reversed string is %s\n",str);
	
	if(strcmp(stack,str)==0)
		printf("They are a palindrom \n");
	
}
	
void push(char a)
{
	if(top == MAX-1)
	{
		printf("Over flow\n");
	 	return;
	}
	stack[++top] = a;
}

char pop()
{
	if(top == -1)
	{
		printf("Under flow \n");
		return;
	}
	return stack[top--];
}
