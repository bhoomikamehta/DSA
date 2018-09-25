#include <stdio.h>
#include <ctype.h>
char S[50];
int top =-1;

void push(char elem)
{
	S[++top] = elem;
}

char pop()
{
	return S[top--];
}

int pr(char elem)
{
	switch(elem)
	{
		case '#':return 0;
		case '(':return 1;
		case '+':
		case '-':return 2;
		case '*':
		case '/':return 3;
		case '$':
		case '^':return 4;
	}
}

void main()
{
	char infix[50],prefix[50],ch,elem;
	int i=0,k=0;
	printf("Enter the expression \n");
	scanf("%s",infix);
	
	push('#');
	
	while((ch=infix[i++])!= '\0')
	{
		if(ch=='(') 
		{
			while(top!=-1)
			prefix[k++] = pop();
			push(ch);
		}
		
		else if(isalnum(ch))
		{
			push(ch);
		}
		
		else if(ch == ')')
		{
			while(S[top]!='(')
				prefix[k++] = pop();
			elem = pop();
		}
	
		else 
		{
			while(pr(S[top]) >= pr(ch))
			prefix[k++] = pop();
			push(ch);
		}
	}
		
	while(S[top]!='#')
	prefix[k++] = pop();
	prefix[k] = '\0';
	printf("Prefix:%s\n",prefix);
}

