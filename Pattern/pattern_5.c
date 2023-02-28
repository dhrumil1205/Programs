#include <stdio.h>
void main() 
{
int n=7,i,j;

for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
    {
        if(j==7  || j==3)
        {
            printf("* ");
        }
        else if (i==7 || i==1)
        {
            printf("* ");
        }
        else
        {
        printf("  ");
        }
    }
printf("\n");
}
}
