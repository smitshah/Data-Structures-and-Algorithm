#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
	int a[]= {5, 10, 15, 20, 25, 30, 35};
	int n=7,x,ch,i, first,last, middle;
	printf("\n Enter a number to search: ");
	scanf("%d", &x);
	printf("\n 1. to Sequential Search");
	printf("\n 2. for Binary Search");
	printf("\n Enter your choice: ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			for (i= 0; i < n; i++)
			{
				if (a[i] == x)    
				{
					printf("\n %d is present at location %d.", x, i+1);
					break;
    			}
			}
			if (i == n)
				printf("\n %d isn't present in the array.", x);
    	break;
    	
		case 2:
			first = 0;
			last = n - 1;
			middle = (first+last)/2;
			while (first <= last) 
			{
				if (a[middle] < x)
					first = middle + 1;    
				else if (a[middle] == x) 
				{
					printf("\n %d found at location %d.", x, middle+1);
					break;
				}
				else
				{
					last = middle - 1;
					middle = (first + last)/2;
				}
			}
			if (first > last)
				printf("\n Not found! %d isn't present in the array.", x);
			break;
	
		default:
			printf("\n Wromg Choice!");
	}
	getch();
}
