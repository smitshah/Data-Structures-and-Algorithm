#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define max 5

void inqueue();
void dequeue();
int queue[max], rear=-1, front=-1;

void inqueue()
{
	if(front==-1)
		front=0;
	if(rear>max-1)
		printf("Queue is full.");
	else
	{
		rear++;		
		printf("Enter the number you want to enter: ");
		scanf("%d",&queue[rear]);
	}
	
	int i;
	for(i=front;i<=rear;i++)
		printf("\t%d",queue[i]);
}

void dequeue()
{
	if(front<0)
		printf("queue is empty");
	if(front==rear)
	{
		queue[front]=NULL;
		front=-1;
		rear=-1;
	}
	else
	{
		queue[front]=NULL;
		front=front+1;
	}
	
	int i;
	for(i=front;i<=rear;i++)
		printf("\t%d\n",queue[i]);
}

void main()
{
	while(1)
	{
		int k;
		printf("\n 1. to add number");
		printf("\n 2. to delete number");
		printf("\n Enter your choice: ");
		scanf("%d",&k);
		switch(k)
		{
			case 1:inqueue();
		    	break;
			case 2: dequeue();
		    	break;
		}
	}
	return 0;
}
