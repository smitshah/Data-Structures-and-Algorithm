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
	display();
}

void start_node()
{
	int a;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter Element: ");
	scanf("%d",&a);
	newnode->data=a;
	newnode->next=start;
	start=newnode;
	display();
}

void end_node()
{
	struct node *i, *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter element: ");
	scanf("%d",&temp->data);
	i=start;
	while(i->next!=NULL)
	{
		i=i->next;
	}
	i->next=temp;
	temp->next=NULL;
	display();
  }

void delete_beginning()
{
	struct node *i;
	i=start;
	start=i->next;
	free(i);
	display();
}

void delete_end()
{
	struct node *temp =start;
	struct node *t;
	while(temp->next!=NULL)
	{
		t=temp;
		temp=temp->next;	
	}
	free(t->next);
	t->next=NULL;
	display();
}

void search()
{
	int a,count=1;
	printf("\n Enter element to search: ");
	scanf("%d",&a);
	struct node *temp;
	temp=start;
	while(temp!=NULL)
	{
		if(temp->data==a)
		printf("\n Position of element at node: %d",count);
		temp=temp->next;
		count++;
	}
	display();
}

void display()
{
	struct node *temp;
	for(temp=start;temp!=NULL;temp=temp->next)
	{
		printf("\n data=%d \t selfaddress=%d \t next address=%d \n",temp->data,temp,temp->next);
	}
}

int main()
{
	createfirstnode();
	while(1)
	{
		int c;	
		printf("\n 1. at node in begninning");
		printf("\n 2. at node at End");
		printf("\n 3. delete node in beginning");
		printf("\n 4. delete node at end");
		printf("\n 5. Search for node");
		printf("\n Enter your choice: ");
		scanf("%d",&c);
		switch(c)
		{
			case 1:start_node();
				break; 
			case 2:end_node();
				break;
			case 3:delete_beginning();
				break;
			case 4:delete_end();       
        		break;
    		case 5:search();
        		break;
			default: printf("invalid option");
    	}
	}
	getch();
}
