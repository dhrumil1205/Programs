#include <stdio.h>
void main() 
{
int n=5,i,j;


for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
    {
        if(i==j || j==5 || j==1)
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
