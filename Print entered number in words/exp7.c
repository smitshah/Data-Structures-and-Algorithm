#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int a,b,c,n;
	printf("\n Enter a number: ");
	scanf("%d",&n);
	c=(n/100)*100;
	a=((n-c)/10)*10;
	b=n-a-c;
	switch(c)
	{
		case 100:
			printf(" one hundred ");break;
		case 200:
			printf(" two hundred ");break;	
		case 300:
			printf(" three hundred ");break;	
		case 400:
			printf(" four hundred ");break;		
		case 500:
			printf(" five hundred ");break;		
		case 600:
			printf(" six hundred ");break;		
		case 700:
			printf(" seven hundred ");break;	
		case 800:
			printf(" eight hundred ");break;	
		case 900:
			printf(" nine hundred ");break;		
	}
	if (n<=19)
	{
		switch(n)
		{
			case 1:
				printf(" one");break;
			case 2:
				printf(" two");break;	
			case 3:
				printf(" three");break;	
			case 4:
				printf(" four");break;		
			case 5:
				printf(" five");break;		
			case 6:
				printf(" six");break;		
			case 7:
				printf(" seven");break;	
			case 8:
				printf(" eight");break;	
			case 9:
				printf(" nine");break;	
			case 10:
				printf("ten");break;
			case 11:
				printf("eleven");break;	
			case 12:
				printf("twelve");break;
        		case 13:
				printf("thirteen");break;		
			case 14:
				printf("fourteen");break;
			case 15:
				printf("fifteen");break;	
			case 16:
				printf("sixteen");break;	
			case 17:
				printf("seventeen");break;	
			case 18:
				printf("eighteen");break;
			case 19:
				printf("ninteen");break;	
		}
	}
	else
	{
		switch(a)
		{

			case 20:
				printf("twenty");break;	
			case 30:
				printf("thirty");break;	
			case 40:
				printf("forty");break;		
			case 50:
				printf("fifty");break;		
			case 60:
				printf("sixty");break;		
			case 70:
				printf("seventy");break;	
			case 80:
				printf("eighty");break;	
			case 90:
				printf("ninety");break;		
		}
		switch(b)
		{		
			case 1:
				printf(" one");break;
			case 2:
				printf(" two");break;	
			case 3:
				printf(" three");break;	
			case 4:
				printf(" four");break;		
			case 5:
				printf(" five");break;		
			case 6:
				printf(" six");break;		
			case 7:
				printf(" seven");break;	
			case 8:
				printf(" eight");break;	
			case 9:
				printf(" nine");break;		
		}
	}
	return 0;
}
