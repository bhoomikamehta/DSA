#include <stdio.h>

char stack[20];
int top = 0;
void main()
{
	char *str;
	printf("enter string \n");
	scanf("%s",str);
	for(i = 0;i<strlen(str);i++)
	{
		push(*(str+i));
	}
		
	for(i = 0;i<strlen(str);i++)
	{
		*(str+i)=pop();
	}
	
	printf("Reversed string is %s \n",str);
}
	
char push(char a)
{
	if(top == 19)
	{
		printf("Over flow\n");
	 	return;
	}
	stack[top++] = a;
}

void pop()
{
	if(top == -1)
	{
		pt
