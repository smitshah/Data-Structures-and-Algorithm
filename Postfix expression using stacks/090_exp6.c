#include <stdio.h>
#include <stdlib.h>

int stack[50];
int top=-1;

void push(int x)
{
	if (top>49)
	{
		printf("\n stack overflow");
	}
	else
	{
		top++;
		stack[top]=x;
	}
}

int pop()
{
	if(top>=0)
	{
		top--;
		return stack[top+1];
	}
	else
	{
		printf("\n stack underflow");
	}
}

void main()
{
	char str[50];
	int a, b, c, ans, i;
	
	printf("\n Enter a postfix expression: ");
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		if (str[i]>='0'&&str[i]<='9')
		{
			push(str[i]-'0');
		}
		else 
		if (str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
		{
			a= pop();
			b= pop();
			{
				if (str[i]=='+')
				{
					c=a+b;
				}
				else if (str[i]=='-')
				{
					c=b-a;
				}
				else if (str[i]=='*')
				{
					c=a*b;
				}
				else 
				{
					c=b/a;
				}
		    }
			push (c);
		}
	}
	ans=pop();
	printf("\n Solution: %d",ans);
	getch();
}
