#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct db
{
	char name[50];
	int bal;
	int acc;
};

int c=0;
void print(struct db *);

void main()
{
	int i;
	struct db s1[20];
	for(i=0;i<20;i++)
	{	
		printf("\n Enter the account holder's name: ");
		scanf("%s",&s1[i].name);
		printf("\n Enter the account number: ");
		scanf("%d",&s1[i].acc);
		printf("\n Enter balance in the account: ");
		scanf("%d",&s1[i].bal);
		c++;
		print(s1);	
	}	
}

void print(struct db *s2)
{
	int i;
	for(i=0;i<c;i++)
	{
		printf("\n NAME: \t ACCOUNT NUMBER: \t BALANCE:\n");
		printf("%s \t %d \t\t %d ",s2[i].name,s2[i].acc,s2[i].bal);
	}
}
