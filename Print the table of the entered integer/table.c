// (a) using for loop:

#include <stdio.h>
#include <stdlib.h>
int main()
{
int n, i;
printf("\n Enter an integer: ");
scanf("%d", &n);
for(i=1; i<=10; i++)
{
printf("\n %d * %d = %d", n, i, n*i);
}
return 0;
}


// (b) using while loop:

#include <stdio.h>
#include <stdlib.h>
int main()
{
int n, i=1;
printf("\n Enter an integer: ");
scanf("%d", &n);
while(i<=10)
{
printf("\n %d * %d = %d", n, i, n*i);
i++;
}
return 0;
}


// (c) using do while loop:

#include <stdio.h>
#include <stdlib.h>
int main()
{
int n, i=1;
printf("\n Enter an integer: ");
scanf("%d", &n);
do
{
printf("\n %d * %d = %d", n, i, n*i);
i++;
}while(i<=10);
return 0;
}
