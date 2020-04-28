#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
	int a[]= {64, 34, 25, 12, 22, 11, 90}; 
	int i,j,x,min,temp;
	int n=7;
	
	printf("\n 1. for Bubble Sort");
	printf("\n 2. for Insertion Sort");
	printf("\n Enter your choice: ");
	scanf("%d", &x);
	
	switch(x)
	{
		case 1:
			for(i=0;i<n-1;i++)
			{
				for(j=0;j<n-i-1;j++)
				{
					if(a[j]>a[j+1])
					{
						temp=a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
					}
				}
			}
			printf("Sorted Array:- \n");

			for(i=0;i<n;i++)
				printf("%d\t",a[i]);
			break;
			
		case 2:
			for(i=1;i<=n-1;i++)
			{
				j=i;
				while ( j > 0 && a[j-1] > a[j]) 
				{ 
					temp= a[j];
					a[j]= a[j-1];
					a[j-1] = temp;
					j--;
			    }
			}
			printf("Sorted Array:- \n");
			
			for(i=0;i<n;i++)
				printf("%d\t",a[i]);
			break;
			
		default:
			printf("Wrong Choice!");
	}
	return 0;			
}
