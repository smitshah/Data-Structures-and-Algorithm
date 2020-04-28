#include <stdio.h> 
#include <stdlib.h>
#include<conio.h>

struct node
{
	int data;
	struct node *next;
};

struct node *start=NULL;
void createfirstnode()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter Element: ");
	scanf("%d",&newnode->data);
	newnode->next=start;
	start=newnode;
}

void display()
{
	struct node *temp;
	for(temp=start;temp!=NULL;temp=temp->next)
	{
		printf("\n data=%d \t selfaddress=%d \t next address=%d", temp->data, temp, temp->next);
	}
 
}

int main()
{
	createfirstnode();
	display();
	getch();
}
