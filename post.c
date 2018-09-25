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
	char infix[50],postfix[50],ch,elem;
	int i=0,k=0;
	printf("Enter the expression \n");
	scanf("%s",infix);
	
	push('#');
	
	while((ch=infix[i++])!= '\0')
	{
		if(ch=='(')
		{
			push(ch);
			printf("ch:%c\nPstfix:%s\nStack:%s\n",ch,postfix,S);
		}
		
		else if(isalnum(ch))
		{
			postfix[k++] = ch;
			printf("ch:%c\nPstfix:%s\nStack:%s\n",ch,postfix,S);
		}
		else if(ch==')')
		{
			while(S[top]!='(')
			postfix[k++] = pop();
			elem = pop();
			printf("ch:%c\nPstfix:%s\nStack:%s\n",ch,postfix,S);
		}
			
		else 
		{
			printf("Stack:%d,Char:%d\n",pr(S[top]),pr(ch));
			while(pr(S[top])>=pr(ch))
			postfix[k++] = pop();
			push(ch);
			printf("ch:%c\nPstfix:%s\nStack:%s\n",ch,postfix,S);
		}
	}
	while(S[top]!='#')
	postfix[k++] = pop();
	
	postfix[k] = '\0';
	
	printf("Infix:%s \nPostfix:%s\n",infix,postfix);
} 
