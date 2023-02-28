#include<stdio.h>
void main()
{
int n=5,i,j;


for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
	if(j==1 || i==1 || i==3 || i==5)
	{
	printf("* ");
	}
	else
	{
	printf(" ");
	}
	}
printf("\n");
}
}
